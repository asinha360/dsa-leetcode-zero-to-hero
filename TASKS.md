# TASKS

Lifecycle states: `Now` (active this session), `Next` (queued, ordered),
`Done` (completed, with date), `Blocked` (with reason and unblock criterion).

Move items between sections — do not delete from `Done`. The `Done` log is
the audit trail.

---

## Now
- **W3 Day 2 (1.5h)** — State pattern + target complexity for LC#121 before writing code. Solo attempt LC#121 [E] (30 min), then LC#3 [M] (30 min). No hints first 30 min per problem. Enforce: complexity stated aloud before every attempt.

---

## Next
- **W3 Day 3 (0.5h)** — Retrieval: (a) sliding window fixed vs. variable; (b) spaced — LC#49 time complexity O(n·k log k); (c) spaced — LC#15 inner-skip trigger (sum==0 branch only).
- **W3 Day 4 (1.0h)** — Code review. Complexity derivations (user first). STL fluency check: .find, .contains, .count usage.
- **W3 Day 5 (0.5h)** — Acceptance test. Retrospective. PROGRESS.md. /sync.

---

## Done
- **2026-05-22** — W3 Day 1 complete. Sliding window pattern intro. Monotone property derived: permanently suboptimal buy day eliminated when l advances. LC#121 traced on paper; bug found and fixed (l=r not l++). W1 spaced retrieval (LC#15 inner-skip): score 1.5 open → corrected. notes/w3_d1.md created.
- **2026-05-21** — W2 Day 5 complete. Acceptance test: LC#1 (63/63), LC#49 (128/128), LC#128 (85/85) — all Accepted. LC#49 time complexity scored 2 (carry-forward finally closed). Retrospective done. W2 marked complete. notes/w2_d5.md created.
- **2026-05-20** — W2 Day 4 complete. Code review of LC#1, LC#49, LC#128. Complexity derivations: LC#1 phrasing errors (no logic errors); LC#49 dropped k log k again (corrected); LC#128 amortized O(n) argument closed after probing. Carry-forward resolved: `set.contains()` clean, `std::sort` free function clean. notes/w2_d4.md created.
- **2026-05-19** — W2 Day 3 complete. Retrieval: LC#1=2, LC#49=2, LC#15 spaced=1.5. LC#128 Accepted (85/85), O(n) time/O(n) space, derivation correct. notes/w2_d3.md created.
- **2026-05-19** — W2 Day 2 complete. LC#1 Accepted (63/63), LC#49 Accepted (128/128). LC#125 carry-forward resolved (score 2, first time). Complexity correction on LC#49 (O(n*k log k)). notes/w2_d2.md created.
- **2026-05-18** — W2 Day 1 complete. Hash maps + Hash sets intro. W1 retrieval: LC#11=2, LC#15=1.5 (one redirect), LC#125=1 (carry-forward). Final check: 1.5. notes/w2_d1.md created.
- **2026-05-15** — W1 Day 5 complete. Acceptance test passed (all 3 Accepted). Retrospective done. notes/w1_d5.md created. PROGRESS.md updated. W1 marked complete.
- **2026-05-15** — W1 Day 4 complete. Code review of LC#125, LC#11, LC#15. Two corrections: LC#15 space complexity (O(n²) output, O(log n) auxiliary — not O(1)); `i < nums.size()` signed/unsigned fix. No logic bugs. notes/w1_d4.md created.
- **2026-05-14** — W1 Day 3 complete. Retrieval practice: all 3 W1 prompts
  scored 2. LC#15 3Sum (Accepted, 316/316). O(n²) time, O(log n) auxiliary
  space. Duplicate suppression at outer loop + l + r. notes/w1_d3.md created.
- **2026-05-12** — W1 Day 2 complete. LC#125 Valid Palindrome (Accepted,
  user confirmed, parallel session) + LC#11 Container With Most Water
  (Accepted, 65/65, beats 100% C++ runtime). Both O(n) time O(1) space,
  complexity derivations complete. notes/w1_d2.md created.
- **2026-05-08** — Workspace initialized: 20-week curriculum scaffold,
  templates, agents config, git repo. Curriculum synthesized from
  research (memory-sourced with strict `[UNVERIFIED PLACEHOLDER]` labels —
  see REFERENCE_RESEARCH_QUEUE.md for items to verify when web access is
  restored).
- **2026-05-10** — W1 Day 1 complete. Arrays + Two-pointer intro built from
  first principles: O(1) random access → O(n²) brute force → monotonicity
  → O(n) two-pointer. LC#125 problem read; approach designed (Option B:
  in-place skip). No code yet. Key retrieval: "monotonicity" named correctly
  without scaffolding. notes/w1_d1.md created.
- **2026-05-08** — Setup session 2: curriculum labels upgraded to
  [VERIFIED]/[UNVERIFIED PLACEHOLDER]/[TO RESEARCH] via two research
  sub-agents (S1–S16). AGENTS.md updated (role 12 Prompt Engineer added).
  Start/end session prompts drafted. No DSA problems attempted.

---

## Blocked
*(none)*
