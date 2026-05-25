# dsa-leetcode-zero-to-hero

A 20-week, self-directed DSA / LeetCode curriculum built for a non-technical
beginner targeting quant finance roles — quant developer, quant researcher, or
SWE at a trading firm or hedge fund. All solutions are in C++.

**Current status:** Week 3 of 20 — Sliding window (complete) | Week 4 of 20 — Binary search (starting)

---

## What this is

Not a problem-count grind. The goal is pattern recognition: being able to look
at a problem, name the pattern, derive the target complexity, and only then write
code. Accepting a solution on LeetCode with the wrong complexity analysis counts
as a bug, not a win.

The curriculum compounds a parallel C++ quant finance curriculum
([cpp-finance-zero-to-hero](https://github.com/asinha360/cpp-finance-zero-to-hero)). Every STL container used here — `vector`,
`unordered_map`, `priority_queue`, `stack`, `queue` — is also built in a
finance context in that track. C++ is the only solution language; there are
no Python alternatives.

---

## Curriculum structure

20 weeks, 3–5 hrs/week. Four milestones gate progression.

| Milestone | Week | Criteria |
|-----------|------|----------|
| M1 | W4  | Easy in patterns 1–4 cold in C++ in <15 min; Medium with one hint in <30 min |
| M2 | W8  | Medium with one hint in all 8 core patterns; Easy cold in <15 min |
| M3 | W12 | Hard in patterns 1–6; Medium with one hint in patterns 7–12; Graphs at Medium |
| M4 | W20 | 45-min mock interview (2 Medium/Hard problems, all 17 patterns, no hints); portfolio current |

### 17 patterns across 20 weeks (final 3 weeks are review and mock interviews)

| Week | Pattern |
|------|---------|
| 1 | Arrays + Two-pointer |
| 2 | Hash maps + Hash sets |
| 3 | Sliding window |
| 4 | Binary search (M1) |
| 5 | Stacks |
| 6 | Queues + monotonic queue |
| 7 | Linked lists |
| 8 | Trees I — BFS/DFS (M2) |
| 9 | Trees II — BST/LCA/paths |
| 10 | Heaps + priority queues |
| 11 | Graphs I — BFS/DFS, components |
| 12 | Graphs II — Dijkstra/topological sort (M3) |
| 13 | DP I — 1D |
| 14 | DP II — 2D/grid |
| 15 | DP III — subsequences |
| 16 | Intervals + binary-search-on-answer |
| 17 | Backtracking + combinatorics |
| 18 | Mixed hard problems |
| 19 | Timed mock interviews (×2) |
| 20 | Final mock + portfolio polish (M4) |

---

## Weekly rhythm

Each week is five sessions:

- **Day 1 (1h)** — Pattern intro from first principles. Why this pattern? What
  property in the input unlocks it? Complexity derivation before any code.
- **Day 2 (1.5h)** — Solo attempts on two problems. 30 min each, no hints
  first. State pattern and target complexity before writing a line.
- **Day 3 (0.5h)** — Retrieval practice: three closed-book prompts covering the
  current week, prior week, and one week from ~4 weeks back.
- **Day 4 (1h)** — Solution review. You derive complexity first; Claude confirms or
  corrects with a derivation, never just a label.
- **Day 5 (0.5h)** — Acceptance test, retrospective, PROGRESS.md update.

Spaced retrieval fires at week+5 intervals: W6 re-derives a W1 problem cold,
W11 re-derives a W6 problem, W16 re-derives a W11 problem.

---

## Repo layout

```
solutions/weekXX/     # C++ solution files, one per problem
notes/wX_dY.md        # Session notes (pattern intuition, edge cases, mistakes)
curriculum.md         # Full 20-week plan with problem sets and acceptance tests
PROGRESS.md           # Week-by-week ledger, retrieval scores, milestone tracking
TASKS.md              # Session task queue (Now / Next / Done / Blocked)
DECISIONS.md          # Non-trivial approach choices and their flip-conditions
CLAUDE.md             # Operating instructions for the Claude Code AI collaborator
```

---

## Pedagogy

Four principles drive the curriculum design:

1. **Pattern-first recognition** — the pattern and target complexity are named
   before any code is written. Code without a complexity target is a guess.
2. **Spaced retrieval** — prior material is re-tested at expanding intervals.
   Week+5 re-implement challenges require deriving a prior problem cold with no
   notes.
3. **Deliberate practice** — every Medium should be uncomfortable; every Hard
   barely tractable. Comfort at a given difficulty level is a signal to step up.
4. **Interleaving** — Hard and variant problems combine the current pattern with
   a prior one to force recognition over rote application.

---

## AI collaborator

Sessions use [Claude Code](https://claude.ai/code) as a Socratic coach, not an
answer dispenser. The operating contract is in [CLAUDE.md](CLAUDE.md): directed
hints with a "why this direction" fragment, a three-rung hint ladder (30 min
stuck → hint 1 → hint 2 → hint 3, no rungs skipped), and complexity
derivation required before any solution is revealed. No solution is ever given
before the user has attempted the problem themselves.

---

## Progress snapshot

**Week 1 of 20 — complete (2026-05-10 → 2026-05-15)**

| # | Problem | Difficulty | Verdict | Time | Aux space |
|---|---------|------------|---------|------|-----------|
| 1 | LC#125 Valid Palindrome | Easy | Accepted (488/488) | O(n) | O(1) |
| 2 | LC#11 Container With Most Water | Medium | Accepted (65/65, 100% runtime) | O(n) | O(1) |
| 3 | LC#15 3Sum | Hard | Accepted (316/316) | O(n²) | O(log n) |

**Week 2 of 20 — complete (2026-05-18 → 2026-05-21) | Hash maps + Hash sets**

| # | Problem | Difficulty | Verdict | Time | Aux space |
|---|---------|------------|---------|------|-----------|
| 4 | LC#1 Two Sum | Easy | Accepted (63/63) | O(n) | O(n) |
| 5 | LC#49 Group Anagrams | Medium | Accepted (128/128) | O(n · k log k) | O(n · k) |
| 6 | LC#128 Longest Consecutive Sequence | Hard | Accepted (85/85) | O(n) | O(n) |

- Pattern owned: hash map as O(1) lookup to eliminate O(n) inner scan; hash set for membership + sequence-start detection; amortized O(n) via each-element-visited-once argument.

**Week 3 of 20 — complete (2026-05-22 → 2026-05-25) | Sliding window**

| # | Problem | Difficulty | Verdict | Time | Aux space |
|---|---------|------------|---------|------|-----------|
| 7 | LC#121 Best Time to Buy and Sell Stock | Easy | Accepted (212/212, 100% runtime) | O(n) | O(1) |
| 8 | LC#3 Longest Substring Without Repeating Characters | Medium | Accepted (988/988) | O(n) | O(n) |

- Pattern owned: variable-length sliding window with hash set/map to track window state; shrink condition driven by window invariant violation; running max/length updated each step.
- LC#76 Minimum Window Substring (Hard) deferred to W4+ spaced retrieval.
