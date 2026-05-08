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
