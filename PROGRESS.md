# PROGRESS

## Current state
- **Phase:** W2 — Hash maps + Hash sets
- **Active week:** W2 (in progress — D2 complete)
- **Streak:** 1 week
- **Cumulative problems solved:** 5
- **Last `/sync`:** 2026-05-15

## Next session
**First action:** W2 D3 — retrieval practice (3 prompts, closed-book). Start with LC#1.
**Retrieval question:** In one sentence, why does a hash map turn O(n²) into O(n)? (cold, no notes)
**Carry-forwards:** `std::sort` is a free function returning void (high-friction — 4 iterations to land); pre-code complexity must account for inner-loop costs (O(k log k) per string ≠ O(n)).

## Today's artifact
2026-05-19 — W2 Day 2: LC#1 Accepted (63/63), LC#49 Accepted (128/128). LC#125 carry-forward resolved (first clean retrieval). notes/w2_d2.md.
2026-05-18 — W2 Day 1: hash map intro, W1 retrieval (LC#11=2, LC#15=1.5, LC#125=1). notes/w2_d1.md.
2026-05-15 — W1 Day 5: acceptance test (all 3 Accepted), retrospective. notes/w1_d5.md.
2026-05-14 — W1 Day 3: retrieval practice (all 2s) + LC#15 3Sum Accepted (316/316). notes/w1_d3.md.
2026-05-12 — W1 Day 2: LC#125 + LC#11 both Accepted. notes/w1_d2.md.
2026-05-10 — W1 Day 1: two-pointer intro from first principles. notes/w1_d1.md.
2026-05-08 — workspace scaffolded; 20-week curriculum, templates, sync
command, agents file, decisions/assumptions logged.

## Wins
- **2026-05-19** — LC#125 monotone property retrieved cleanly for the first time (third session — window shrinks monotonically, matched pairs permanently settled). `[FIRST TIME]`
- **2026-05-12** — "Moving the taller pointer can only lead to a smaller area" — correct reasoning for LC#11 pointer-move direction, self-stated. `[FIRST TIME]`
- **2026-05-10** — Monotonicity as the general property enabling two-pointer elimination. `[FIRST TIME]` Named and defined correctly without scaffolding on the first ask.

---

## Week-by-week ledger

| Week | Pattern | Status | Started | Completed | Problems solved (LC#s) | Retrospective |
|------|---------|--------|---------|-----------|------------------------|---------------|
| 1 | Arrays + Two-pointer | complete | 2026-05-10 | 2026-05-15 | LC#125, LC#11, LC#15 | Monotonicity core: solid. Per-problem instantiation: 1.5 on D5 (nudge needed for LC#11 vs LC#15 distinction). Carry-forward: `static_cast<int>(container.size())`. |
| 2 | Hash maps + Hash sets | in progress | 2026-05-18 | — | LC#1, LC#49 | — |
| 3 | Sliding window | not started | — | — | — | — |
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
| 1 | 2 | 2 | 2 | D1 closing (×2): "monotonicity" + failure example both clean; D2 closing: exit condition + exhaustiveness argument, clean; D3 opening: all 3 prompts clean; D3 closing: 3Sum reduction + all 3 duplicate-suppression points clean; D5 opening: 1.5 (per-problem breakdown needed two nudges); D5 closing: 2 (all three correct and unprompted); W2 D1 spaced opening: LC#11=2, LC#15=1.5 (one redirect — sorted-sum monotonicity), LC#125=1 (mechanism ≠ property); W2 D1 closing: LC#11=2, LC#15=2 (property stated unprompted — improvement), LC#125=1 (unchanged — third session at 1, must drill D3); W2 D2 opening: LC#125=2 (first clean retrieval — window shrinks monotonically, matched pairs permanently settled) `[FIRST TIME]`; W2 D2 closing: LC#125=2 (cold, no scaffolding — same answer retrieved cleanly at session end) |
| 2 | — | — | — | W2 D2: LC#1 hash map vs two-pointer distinction (2 with one nudge on hash map side); LC#49 pre-code complexity correction (O(n*k log k) derived after one question). D3 retrieval prompts queued. |
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
