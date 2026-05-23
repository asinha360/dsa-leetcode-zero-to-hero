# PROGRESS

## Current state
- **Phase:** W3 — Sliding window
- **Active week:** W3 (D2 complete)
- **Streak:** 3 weeks
- **Cumulative problems solved:** 7
- **Last `/sync`:** 2026-05-22

## Next session
**First action:** W3 Day 3 retrieval — open cold: confirm LC#121 Accepted, then (a) fixed vs. variable window — when do you shrink?; (b) LC#3 while condition and why s[l] breaks it; (c) LC#15 inner-skip exact boolean and why one step is wrong.
**Retrieval question:** In LC#3, when a duplicate is found at position r, the inner while loop shrinks from the left. What is the exact condition — and why does checking s[l] instead of s[r] break the algorithm?
**Carry-forwards:** LC#121 Accepted unconfirmed (confirm at D3 open); LC#15 inner-skip mechanism (four sessions at 1.5 — drill harder at D3, not just one ask); LC#3 hashmap std::max(l,...) — why std::max protects against backward jumps (not probed D2).

## Today's artifact
2026-05-22 — W3 Day 2: solo attempts LC#121 (solution derived, Accepted unconfirmed — carry-forward) and LC#3 (Accepted 988/988, hashset + hashmap optimization). O(n) derivations correct. W1 spaced retrieval LC#15 inner-skip: 1.5 (third session). notes/w3_d2.md.
2026-05-22 — W3 Day 1: sliding window pattern intro. Monotone property derived. LC#121 traced on paper (bug found: l=r not l++). W1 spaced retrieval LC#15 inner-skip: 1.5. notes/w3_d1.md.
2026-05-21 — W2 Day 5: acceptance test (LC#1 63/63, LC#49 128/128, LC#128 85/85 — all Accepted). Retrospective. W2 complete. notes/w2_d5.md.
2026-05-19 — W2 Day 3: retrieval practice (LC#1=2, LC#49=2, LC#15 spaced=1.5), LC#128 Accepted (85/85). notes/w2_d3.md.
2026-05-19 — W2 Day 2: LC#1 Accepted (63/63), LC#49 Accepted (128/128). LC#125 carry-forward resolved (first clean retrieval). notes/w2_d2.md.
2026-05-18 — W2 Day 1: hash map intro, W1 retrieval (LC#11=2, LC#15=1.5, LC#125=1). notes/w2_d1.md.
2026-05-15 — W1 Day 5: acceptance test (all 3 Accepted), retrospective. notes/w1_d5.md.
2026-05-14 — W1 Day 3: retrieval practice (all 2s) + LC#15 3Sum Accepted (316/316). notes/w1_d3.md.
2026-05-12 — W1 Day 2: LC#125 + LC#11 both Accepted. notes/w1_d2.md.
2026-05-10 — W1 Day 1: two-pointer intro from first principles. notes/w1_d1.md.
2026-05-08 — workspace scaffolded; 20-week curriculum, templates, sync
command, agents file, decisions/assumptions logged.

## Wins
- **2026-05-22** — LC#3 O(n) time derivation: "each character is added and removed at most once" — stated cold, no scaffolding. `[FIRST TIME]`
- **2026-05-19** — LC#125 monotone property retrieved cleanly for the first time (third session — window shrinks monotonically, matched pairs permanently settled). `[FIRST TIME]`
- **2026-05-12** — "Moving the taller pointer can only lead to a smaller area" — correct reasoning for LC#11 pointer-move direction, self-stated. `[FIRST TIME]`
- **2026-05-10** — Monotonicity as the general property enabling two-pointer elimination. `[FIRST TIME]` Named and defined correctly without scaffolding on the first ask.

---

## Week-by-week ledger

| Week | Pattern | Status | Started | Completed | Problems solved (LC#s) | Retrospective |
|------|---------|--------|---------|-----------|------------------------|---------------|
| 1 | Arrays + Two-pointer | complete | 2026-05-10 | 2026-05-15 | LC#125, LC#11, LC#15 | Monotonicity core: solid. Per-problem instantiation: 1.5 on D5 (nudge needed for LC#11 vs LC#15 distinction). Carry-forward: `static_cast<int>(container.size())`. |
| 2 | Hash maps + Hash sets | complete | 2026-05-18 | 2026-05-21 | LC#1, LC#49, LC#128 | k log k synthesis gap resolved by D5. Amortized O(n) for LC#128 closed. STL syntax (.contains, sort) resolved. Process carry-forward: state complexity before code. |
| 3 | Sliding window | in progress | 2026-05-22 | — | LC#3 (LC#121 unconfirmed) | — |
| 4 | Binary search (M1) | not started | — | — | — | — |
| 5 | Stacks | not started | — | — | — | — |
| 6 | Queues + monotonic queue | not started | — | — | — | — |
| 7 | Linked lists | not started | — | — | — | — |
| 8 | Trees I — BFS/DFS (M2) | not started | — | — | — | — |
| 9 | Trees II — BST/LCA/paths | not started | — | — | — | — |
| 10 | Heaps + priority queues | not started | — | — | — | — |
| 11 | Graphs I — BFS/DFS, components | not started | — | — | — | — |
| 12 | Graphs II — Dijkstra/topo (M3) | not started | — | — | — | — |
| 13 | DP I — 1D | not started | — | — | — | — |
| 14 | DP II — 2D / grid | not started | — | — | — | — |
| 15 | DP III — subsequences | not started | — | — | — | — |
| 16 | Intervals + binary-search-on-answer | not started | — | — | — | — |
| 17 | Backtracking + combinatorics | not started | — | — | — | — |
| 18 | Mixed hard problems | not started | — | — | — | — |
| 19 | Timed mock interviews (×2) | not started | — | — | — | — |
| 20 | Final mock + portfolio polish (M4) | not started | — | — | — | — |

---

## Retrieval-practice scores

Format: `Week | Prompt 1 | Prompt 2 | Prompt 3 | Notes`. Score each 0–2:
- **0** = could not retrieve
- **1** = retrieved with one nudge
- **2** = retrieved cleanly, closed-book

| Week | P1 | P2 | P3 | Notes |
|------|----|----|----|-------|
| 1 | 2 | 2 | 2 | D1 closing (×2): "monotonicity" + failure example both clean; D2 closing: exit condition + exhaustiveness argument, clean; D3 opening: all 3 prompts clean; D3 closing: 3Sum reduction + all 3 duplicate-suppression points clean; D5 opening: 1.5 (per-problem breakdown needed two nudges); D5 closing: 2 (all three correct and unprompted); W2 D1 spaced opening: LC#11=2, LC#15=1.5 (one redirect — sorted-sum monotonicity), LC#125=1 (mechanism ≠ property); W2 D1 closing: LC#11=2, LC#15=2 (property stated unprompted — improvement), LC#125=1 (unchanged — third session at 1, must drill D3); W2 D2 opening: LC#125=2 (first clean retrieval — window shrinks monotonically, matched pairs permanently settled) `[FIRST TIME]`; W2 D2 closing: LC#125=2 (cold, no scaffolding — same answer retrieved cleanly at session end); W2 D4 spaced opening: LC#15 inner-skip trigger=1.5 (condition correct, trigger wrong — applied to all branches); W2 D4 closing: LC#15=2 (trigger correct: sum==0 only; reasoning given unprompted — "sum won't change, loop continues naturally"); W3 D1 spaced opening: LC#15 inner-skip trigger=1.5 (condition correct, purpose correct, mechanism imprecise — "one step" vs while-loop; why-not-other-branches correct unprompted); W3 D1 closing: LC#15=1.5 (same error — mechanism still "one step"; condition/purpose/why-not-other-branches all correct; FLAG — resurface W3 D2 open); W3 D2 open: LC#15=1.5 (condition wrong twice — stated nums[l]==nums[l++] first [UB], then nums[l]==nums[l-1], correct nums[l]==nums[l-1]/nums[r]==nums[r+1] after two redirects; purpose/why-not-other-branches correct from start; FLAG); W3 D2 close: LC#15=1.5 (condition now clean and unprompted — improvement; "why" thin: "might require multiple moves" correct but imprecise — missing: after one step you may still be on same-value element; FLAG weakened but resurface D3) |
| 2 | 2 | 2 | — | W2 D2: LC#1 hash map vs two-pointer distinction (2 with one nudge on hash map side); LC#49 pre-code complexity correction (O(n*k log k) derived after one question). W2 D3: LC#1=2, LC#49=2. LC#128 Accepted (85/85), O(n) time/space derivation correct. W2 D4 cold: LC#49 dropped k log k again (second time — flagged); LC#128 amortized O(n) argument closed after probing ("at max once"). `set.contains()` and `std::sort` carry-forwards resolved in code. W2 D5 open: LC#49 time complexity = 2 (O(n·k log k) unprompted — carry-forward finally closed); space = 1.5 (self-corrected after probe). W2 D5 close: LC#49 time complexity = 2 (clean, unprompted — "additive, not encapsulated in O(n)"). |
| 3 | — | — | — | — |
| 4 | — | — | — | — |
| 5 | — | — | — | — |
| 6 | — | — | — | — |
| 7 | — | — | — | — |
| 8 | — | — | — | — |
| 9 | — | — | — | — |
| 10 | — | — | — | — |
| 11 | — | — | — | — |
| 12 | — | — | — | — |
| 13 | — | — | — | — |
| 14 | — | — | — | — |
| 15 | — | — | — | — |
| 16 | — | — | — | — |
| 17 | — | — | — | — |
| 18 | — | — | — | — |
| 19 | — | — | — | — |
| 20 | — | — | — | — |

---

## Re-implement-from-scratch challenges

Spaced at week+5 intervals. The challenge is the *original* W_n problem,
solved cold, no notes, in C++.

- [ ] **W6** — re-derive a W1 problem (Two-pointer, e.g., LC#125 Valid Palindrome) cold
- [ ] **W11** — re-derive a W6 problem (Monotonic queue, e.g., LC#239 Sliding Window Max) cold
- [ ] **W16** — re-derive a W11 problem (Graph BFS/DFS, e.g., LC#200 Number of Islands) cold

---

## Milestones

- [ ] **M1 (W4)** — Easy cold in patterns 1–4 in <15 min; Medium with one hint in <30 min
- [ ] **M2 (W8)** — Medium with one hint in all 8 core patterns
- [ ] **M3 (W12)** — Hard in patterns 1–6; Medium with one hint in patterns 7–12
- [ ] **M4 (W20)** — 45-min mock interview, 2 problems, no hints; portfolio current
