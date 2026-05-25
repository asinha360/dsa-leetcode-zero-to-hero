# DECISIONS

Each entry: **what was decided**, **rationale**, **flip-condition** (under
what observable state would we revisit). Written for future-Claude and
future-user, not for the present moment.

---

## D-001 — Language: C++ only

**Decided:** 2026-05-08

**What:** Every LeetCode problem in this workspace is attempted and
submitted in C++. No Python alternative track. STL is the default
toolkit — `std::vector`, `std::unordered_map`, `std::priority_queue`,
`std::stack`, `std::queue`, `std::deque`.

**Rationale:** The user has 5 weeks of C++ via the sister curriculum and
zero programming history before that. Two languages shallow is worse than
one language deep. C++ STL literacy compounds across both projects. The
LeetCode environment forces "STL in arbitrary problem-solving mode," which
the C++ curriculum (driven by finance artifacts) under-exercises.

**Flip-condition:** User firmly chooses the QR (quant researcher) track
*and* completes Week 8 of the C++ curriculum. At that point Python becomes
the QR working language, and a parallel Python LeetCode track may be
warranted. Until then, switching languages multiplies cognitive load.

**Cross-reference (2026-05-08 research):** The 2026-05-08 sub-agent
research [VERIFIED — see curriculum.md "Sources cited" S14, S15] that
*no* prominent LeetCode-interview prep guide recommends C++ over Python.
LeetCode community consensus prefers Python for terser syntax (lower
implementation time per problem). C++-recommending sources are
competitive-programming guides (USACO, Codeforces) where execution time
is tight — different optimization than interview prep. **This does not
flip D-001** because the rationale here is curriculum-compounding (the
sister C++ project), not LeetCode-prep optimization. But it does mean
the user should expect a *one-time* implementation-time penalty per
problem vs. a Python-using peer, traded for STL fluency that compounds
across both projects.

---

## D-002 — Scope: full top-tier quant coverage (10 categories, 20 weeks)

**Decided:** 2026-05-08

**What:** Curriculum covers 17 patterns across 20 weeks (16 teaching weeks
+ 4 consolidation weeks). Targets first- and second-round screens at
top-tier quant firms (Jane Street, Citadel Securities, HRT, Two Sigma,
Optiver, etc.).

**Rationale:** User has explicitly chosen top-tier targets. The "core 6"
(Arrays → Trees) is sufficient for many SWE screens but insufficient for
second-round screens at quant shops, which routinely include graphs, DP,
and binary-search-on-answer-space. Stopping at W8 would leave the user
under-prepared for the harder rounds.

**Flip-condition:** Time budget falls below 3 hrs/week for 3 consecutive
weeks. At that point, contract scope to 12 weeks ending after Graphs II
and accept reduced DP/intervals coverage as the trade-off.

---

## D-003 — Timeline: 20 weeks (not 16)

**Decided:** 2026-05-08

**What:** 20 weeks from W1 Day 1 to W20 final mock. Pattern density
roughly one new pattern per week through W17, then 3 weeks of
consolidation/mocks.

**Rationale:** Graphs and DP each require 2–3 weeks at 3–5 hrs/week to
reach the milestone bar (Medium with one hint). Compressing into 16
weeks would mean either skipping intervals/binary-search-on-answer (a
quant-frequent pattern category — `[UNVERIFIED PLACEHOLDER]`) or shipping
surface-level coverage on the hardest patterns. Both are worse than the
extra 4 weeks.

**Flip-condition:** User is consistently completing weeks in <3 hrs and
clearing all retrieval prompts at score 2 (clean retrieval). Compress
to 16 weeks by merging W14+W15 (DP II+III) and W17 into mock-week
preparation.

---

## D-004 — Sync mechanism: manual `/sync` command (not automatic hook)

**Decided:** 2026-05-08

**What:** Commits and pushes are triggered by the user invoking `/sync` at
end of session. No `Stop` or `PostToolUse` hook auto-commits.

**Rationale:** Deliberate commit discipline is itself part of the
engineering practice we're building. Hook-driven auto-commits push
mid-session state (broken code, partial reasoning) and pollute the git
history. The user controls when changes are publishable.

**Flip-condition:** The user reports forgetting to sync 3+ times. At that
point, add a `Stop` hook that *prompts* (not auto-commits) — "Session
ending, run /sync?"

---

## D-005 — Session-file enforcement: hookify block rule (not model compliance)

**Decided:** 2026-05-23

**What:** PROGRESS.md, TASKS.md, DECISIONS.md, and notes/wX_dY.md are write-protected during sessions via a hookify PreToolUse block rule (`.claude/hookify.block-session-files.local.md`). Writes to those files are rejected by the harness unless /end has explicitly disabled the guard. /end disables the rule at Step 0 and re-enables it at Step 8.

**Rationale:** CLAUDE.md section 12 already prohibited mid-session writes. Claude violated it anyway. A rule Claude can override in a long session is a suggestion, not a constraint. Hookify fires at the harness level — it cannot be overridden by model reasoning within the session.

**Flip-condition:** If the /end disable/re-enable mechanism proves brittle (e.g., /end crashes between Step 0 and Step 8, leaving the guard disabled), revisit. Alternative: a flag-file check if hookify adds filesystem-condition support. Or: a stop hook that re-enables the guard automatically on session end regardless of whether /end completed cleanly.

**Superseded 2026-05-25:** Guard file deleted and Step 0/Step 8 removed from /end. Rule now relies on model compliance with CLAUDE.md section 12. The /sync yes/no confirmation was also removed — /sync now auto-commits and pushes.

---

## D-006 — Process: interview coding loop enforced before every problem attempt

**Decided:** 2026-05-25

**What:** Before any problem attempt (D2 solo, D3 retrieval, D4 review), the 8-step interview coding loop is surfaced explicitly and the user must work through each step before opening the editor: (1) restate problem, (2) name pattern and why, (3) state target complexity, (4) trace on paper with one edge case, (5) state the invariant, (6) code, (7) trace one edge case through the code before submitting, (8) derive complexity and confirm it matches step 3.

**Rationale:** User self-identified in W3 D5 retrospective that implementation feels disconnected from the interview context. The loop replicates the structure of a real coding round — treating every attempt as "first time in an interview." It also directly addresses the recurring `static_cast` and variable-shadowing bugs, which trace to coding before the invariant is fully understood.

**Flip-condition:** User reaches M1 (W4) and reports the loop feels mechanical rather than reinforcing. At that point, compress to a 3-step check (pattern, complexity, invariant) for Easy problems; full 8 steps for Medium and Hard.

---

## D-007 — Curriculum: LC#76 Minimum Window Substring deferred from W3

**Decided:** 2026-05-25

**What:** LC#76 (Hard, sliding window + hash map counting) was not attempted in W3. W3 closed with only the Easy (LC#121) and Medium (LC#3). LC#76 is deferred to a later spaced-retrieval slot.

**Rationale:** W3 time budget was consumed by: D1 pattern intro + LC#121 trace, D2 solo attempts on both problems, D3 retrieval + LC#121 confirmation, D4 code review of both solutions, D5 acceptance test + retrospective. Adding LC#76 would have required a sixth day or compressing D3/D5. The Medium (LC#3) was the priority — it exercises the full variable-length sliding window with hash map state, which is the core W3 skill. LC#76 adds a second map (need/have counting) but doesn't introduce a new pattern.

**Flip-condition:** Resurface LC#76 as a Hard-difficulty problem in W4–W6 spaced retrieval, or as the interleaved Hard in W6 (Queues + monotonic queue week), where the sliding window + map state combination is directly relevant.
