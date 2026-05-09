# Curriculum — dsa-leetcode-zero-to-hero (20 weeks)

A 20-week DSA / LeetCode curriculum for a non-technical beginner targeting
quant finance roles. C++ only. 3–5 hrs/week. Four milestones at W4 / W8 /
W12 / W20.

---

## Research caveat (read first)

Both research sub-agents at workspace-init (2026-05-08) hit
permission-denied on `WebSearch` / `WebFetch`. The pattern-frequency
claims in the **"Why this pattern in quant screens"** column below are
synthesized from training memory, not from live verified sources, and are
labeled accordingly. Every such claim is `[UNVERIFIED PLACEHOLDER]` until
verified per the worklist in [REFERENCE_RESEARCH_QUEUE.md](REFERENCE_RESEARCH_QUEUE.md).
The structural choices (pattern *order*, milestone placement, problem
density) are robust to the verification — they reflect widely-shared
curriculum consensus that does not hinge on firm-specific frequencies.

---

## Pedagogical framing

This curriculum is built on four learning principles drawn from the same
framework as the sister C++ curriculum:

- **Spaced retrieval** `[VERIFIED — S16]` — deliberately re-test prior
  material at expanding intervals. The most-cited LeetCode-specific
  schedule is doubling intervals (1d → 2d → 4d → 8d → 16d → 32d → 64d
  → 128d → 256d) per Red-Green-Code; this curriculum uses a
  compressed variant (current + prior + one earlier-week prompt
  weekly, plus week+5 re-implement challenges) calibrated to the
  20-week timeline. Re-implement-from-scratch challenges fire at
  week+5 intervals (W6 re-derives W1, W11 re-derives W6, W16
  re-derives W11).
- **Deliberate practice** `[UNVERIFIED PLACEHOLDER]` — solving problems
  *just past* current ability, with feedback. Every Medium problem
  should be uncomfortable; every Hard problem should be barely tractable.
  Comfort is a signal to step up difficulty.
- **Interleaving** `[UNVERIFIED PLACEHOLDER]` — never block-practice a
  single pattern in isolation. Each week's Hard / variant problem
  combines the current pattern with a prior one. This forces *recognition*
  over rote application.
- **Project-based learning** `[UNVERIFIED PLACEHOLDER]` — the GitHub repo
  itself is the artifact. By W20, the repo is the portfolio: 60+
  problems solved with derivations, retrospectives, and pattern notes.

These are the same frameworks the sister C++ curriculum uses; verified
citations live there and will be backported once located (see
[REFERENCE_RESEARCH_QUEUE.md](REFERENCE_RESEARCH_QUEUE.md) item 14).

---

## Spacing schedule

- **Daily (within a week):** Day 3 retrieval prompts test current week
  cold, prior week with one nudge allowed, and one earlier week (~3–4
  weeks back) — the *earlier* prompt is the meaningful test.
- **Weekly:** Day 5 retrospective auto-includes a check-in on the
  prior 2 weeks' patterns.
- **Week+5:** re-implement-from-scratch challenges. The W+5 interval
  (rather than W+4) is calibrated to the 20-week timeline so that the
  three challenge weeks (W6, W11, W16) align with consolidation rather
  than mid-pattern weeks.
  - **W6** re-derives a W1 problem cold (Two-pointer, e.g., LC#125 Valid Palindrome)
  - **W11** re-derives a W6 problem cold (Monotonic queue, e.g., LC#239 Sliding Window Maximum)
  - **W16** re-derives a W11 problem cold (Graph BFS, e.g., LC#200 Number of Islands)

---

## Milestone map

| # | Week | Definition |
|---|------|------------|
| **M1** | W4 | Easy in patterns 1–4 cold in C++ in <15 min. Medium in patterns 1–4 with at most one hint in <30 min. |
| **M2** | W8 | Medium in all 8 core patterns with at most one hint. Easy cold in any core pattern in <15 min. |
| **M3** | W12 | Hard in patterns 1–6. Medium in patterns 7–12 with at most one hint. Graphs I/II at Medium difficulty. |
| **M4** | W20 | Timed 45-min mock interview, 2 Medium/Hard problems drawn from all 17 patterns, no hints. GitHub portfolio current. |

---

## Relationship to the sister C++ curriculum (cpp-finance-zero-to-hero)

This DSA workspace runs alongside the sister C++ quant finance curriculum
(currently W5/16). The two compound each other in two directions: the C++
curriculum builds STL fluency in *finance contexts* (PV calculator, bond
pricer, Black-Scholes), while this workspace exercises the same STL
containers in *arbitrary problem-solving mode* — exactly the mode a
LeetCode timer demands. By W12 of this curriculum, the user will have
applied `std::vector`, `std::unordered_map`, `std::priority_queue`,
`std::stack`, and `std::deque` to dozens of unfamiliar problems, which
will make the upcoming C++ artifacts (W11 limit order book, W12
backtester) substantially less novel.

**Explicit overlap to surface during weekly sessions** (the
*Sister-Project Liaison* role from `AGENTS.md` flags these):

| C++ curriculum artifact | DSA week | Overlap |
|-------------------------|----------|---------|
| W4 YTM bisection solver (already built) | W4 binary search | Same algorithm, different problem framing. Re-read the YTM solver before W4 Day 1. |
| W3 returns stats tool — `std::vector` | every week | Vector is the workhorse container. |
| W9 OHLC bar aggregator (upcoming) — `std::unordered_map` | W2 hash maps | Hash maps in DSA mode build the muscle for the bar aggregator. |
| W10 SMA-crossover strategy (upcoming) — `std::priority_queue` | W10 heaps | The DSA week trains the container in arbitrary mode; the C++ week applies it. |
| W11 limit order book (upcoming) — `std::stack` / `std::map` | W5 stacks | Stack semantics are reinforced before the LOB needs them. |
| Graph BFS / DFS | (W11) | Not in C++ curriculum; introduced fresh here. |
| Dynamic programming | (W13–W15) | Not in C++ curriculum; introduced fresh here. |

---

## Weekly rhythm (3–5 hrs/week)

| Day | Time | Activity |
|-----|------|----------|
| **D1** | 1.0 h | Pattern intro — WHY first (intuition + math analogy). One worked example traced on paper, no keyboard. End with a check question. |
| **D2** | 1.5 h | Solo attempt — 2 problems × 30 min each, no hints first. One directed hint per problem after 30 min. Never the solution. |
| **D3** | 0.5 h | Retrieval practice — 3 prompts, written, closed-book. |
| **D4** | 1.0 h | Solution review with Claude as Code Reviewer. User derives complexity first; Claude confirms or corrects. Fix any suboptimal solutions. |
| **D5** | 0.5 h | Acceptance test confirmation. Session note `notes/wX_d5.md`. Retrospective. PROGRESS.md update. `/sync`. |

If a week has only 2 hours: preserve **D2** (the longest solo block).
Compress D3 and D5 to 15 minutes each.

---

## Problem selection rules

- LeetCode problem numbers and names are real; canonical, widely-cited
  problems are used. Items I'm less sure about are tagged
  `[TO VERIFY — confirm on leetcode.com]`.
- Difficulty per problem: **[E]** Easy, **[M]** Medium, **[H]** Hard.
- The Hard / variant problem each week combines the current pattern
  with one prior pattern — this trains *recognition*, not rote.
- For W13–W15 (DP): each problem is annotated with its DP subtype
  (memoization vs. tabulation; 1D vs. 2D state).

---

## The 20-week table

| Week | DSA Pattern | Problem set (E / M / H or variant) | Why this pattern in quant screens | C++ STL + curriculum overlap | Math connection (calculus / probability) | Retrieval prompts (current / prior / spaced) | Acceptance test |
|---|---|---|---|---|---|---|---|
| **1** | Arrays + Two-pointer | LC#125 Valid Palindrome [E]; LC#11 Container With Most Water [M]; LC#15 3Sum [H, two-pointer + sort] | Arrays are the substrate of every coding round. Two-pointer is the simplest *invariant-based* algorithm and a frequent first-round screen. `[VERIFIED — S2, S7]` (Citadel: Trapping Rain Water, Sliding Window Max; Optiver: Remove Duplicates II, Majority Element) | `std::vector`, `std::sort`, `std::swap`. Overlap: the W3 returns-stats tool stores prices in a `vector` — this is the same container in DSA mode. | Two-pointer convergence is like the squeeze theorem: bound the answer from both ends and tighten. | (a) When does two-pointer beat brute force? (b) — (no prior) (c) — (no spaced) | Solve LC#125 cold in <15 min; explain why two-pointer is O(n) on a sorted array but not on an unsorted one. |
| **2** | Hash maps + Hash sets | LC#1 Two Sum [E]; LC#49 Group Anagrams [M]; LC#128 Longest Consecutive Sequence [H, hash set + linear scan] | Hash-map "two-sum-class" problems are routinely the warm-up at quant SWE first rounds. `[VERIFIED — S2, S3, S4, S6, S7]` (universal across Citadel, Two Sigma, IMC, Optiver, HRT phone screens) | `std::unordered_map`, `std::unordered_set`. Overlap: the upcoming W9 C++ OHLC bar aggregator is built on `unordered_map<timestamp, bar>` — same container, different domain. | A hash map is an O(1) "indicator function" — given x, does it belong to a set, and what's its associated value? Like a probability mass function over a discrete sample space. | (a) When does a hash map turn O(n²) into O(n)? (b) Two-pointer vs. hash map — which to pick when? (c) — | Solve LC#1 cold in <10 min. Explain why LC#128 is O(n) and not O(n log n) despite the "consecutive" structure. |
| **3** | Sliding window | LC#121 Best Time to Buy and Sell Stock [E]; LC#3 Longest Substring Without Repeating Characters [M, sliding window + hash map]; LC#76 Minimum Window Substring [H, sliding window + hash map counting] | Sliding window is the canonical "incremental update" pattern; appears across screens but especially the streaming/series-shaped problems quant firms favor. `[VERIFIED — S2, S9]` (Citadel: Sliding Window Max + Trapping Rain Water in OA pool) | `std::unordered_map` for window state. Builds toward the upcoming W10 C++ SMA strategy (rolling window over price series). | A moving window is a discrete *running integral*: as the window slides by one, you add the new endpoint's contribution and subtract the old one's — never recompute the integral from scratch. | (a) Fixed-length vs. variable-length window — when do you shrink? (b) Hash map's role inside the window? (c) — | Solve LC#3 with at most one hint in <30 min. Derive O(n) from the fact that each character is added and removed at most once. |
| **4 (M1)** | Binary search | LC#704 Binary Search [E]; LC#33 Search in Rotated Sorted Array [M]; LC#875 Koko Eating Bananas [H, binary search on answer space] | Binary-search-on-answer-space is a *quant-favored* variant — appears at HRT, Optiver, and prop shops more than at general SWE. `[VERIFIED — S1]` (HRT OA Q4 of the canonical 4-question OA is explicitly binary-search-on-answer — max embeddable square) | Manual implementation (no `std::lower_bound` shortcut on D2). Overlap: **W4 YTM bisection solver** in the C++ curriculum is exactly this algorithm — re-read it before D1. | Binary search is the discrete bisection method from numerical analysis — same as Newton's method's "halve the interval" intuition. Convergence is logarithmic for the same reason. | (a) Why is the loop invariant (`l ≤ r` vs. `l < r`) the source of every off-by-one in binary search? (b) Sliding window vs. binary search — when? (c) Two-pointer vs. binary search — when? | **Milestone M1.** Solve any Easy in patterns 1–4 cold in <15 min. Solve a Medium with one hint in <30 min. Self-check on each pattern, not on average. |
| **5** | Stacks | LC#20 Valid Parentheses [E]; LC#155 Min Stack [M]; LC#739 Daily Temperatures [H, monotonic stack — preview of W6] | Monotonic stack is a *next-greater-element* generator — appears in problems modeling order book sweeps and price-spike detection. `[UNVERIFIED PLACEHOLDER — S9]` (single-source: Citadel valid-parens + monotonic-deque variants) | `std::stack`, `std::vector` (often a stack-as-vector for indexing). Overlap: the upcoming W11 C++ limit order book uses stack semantics for order matching. | A stack is LIFO — like the call stack of a recursive function, or the unwinding of a Riemann sum partition: the most recently added bar is the first one removed. | (a) Why is monotonic stack O(n) amortized? (b) Binary search vs. stack-based parsing — when? (c) Two-pointer revisited (W1) | Solve LC#739 with at most one hint. Derive amortized O(n) from "each element is pushed once and popped at most once." |
| **6** | Queues + monotonic queue | LC#225 Implement Stack using Queues [E]; LC#933 Number of Recent Calls [E] [VERIFIED at https://leetcode.com/problems/number-of-recent-calls/ — note: actual difficulty is Easy; W6 row therefore reads 2E + 1H rather than 1E + 1M + 1H. Swap-in candidate for a true Medium: LC#622 Design Circular Queue]; LC#239 Sliding Window Maximum [H, monotonic deque — combines queue + sliding window] | Monotonic deque for streaming statistics is a near-iconic quant pattern — sliding-window max is the canonical "running maximum over a stream." `[VERIFIED — S5, S9]` (Jane Street OA prep + Citadel "Find Median from Data Stream" — both confirm streaming-stat data structures as a signature pattern) | `std::queue`, `std::deque`. The deque is the workhorse for monotonic queue. Overlap: prepares for the C++ W12 backtester's rolling stats. | A monotonic deque maintains an *invariant*: front is always the current window's max. Like a martingale's filtration — strictly the relevant history, evicting what can't matter. | (a) Why is monotonic deque O(n)? (b) Stack vs. queue — when? (c) **W+1 spaced:** sliding window state from W3 | Solve LC#239 with at most one hint. **W+5 challenge:** re-derive a W1 two-pointer problem cold (LC#125). |
| **7** | Linked lists | LC#206 Reverse Linked List [E]; LC#21 Merge Two Sorted Lists [M]; LC#143 Reorder List [H, three-pattern combo: find middle + reverse + merge] | Linked-list problems test *pointer discipline* — frequent at any C++-favoring shop because pointer bugs are the C++ shop's most costly category. `[UNVERIFIED PLACEHOLDER — S6, S11]` (single sources: Two Sigma LRU, Jane Street merge-sorted-lists) | Manually-defined `ListNode*`. Overlap: pointer hygiene transfers directly to C++ smart-pointer reasoning later. | A linked list is a *function from index to value defined recursively* — `head + tail` rather than `array[i]`. Same expressivity, different access cost (O(n) random access). | (a) Why does the slow/fast pointer find the middle? (b) Stack/queue vs. linked list — when? (c) Hash map for node uniqueness (W2) | Solve LC#143 with at most one hint. Identify the three sub-patterns it composes. |
| **8 (M2)** | Trees I — BFS / DFS traversal | LC#104 Maximum Depth of Binary Tree [E]; LC#102 Binary Tree Level Order Traversal [M, BFS]; LC#199 Binary Tree Right Side View [H, BFS + per-level last-element extraction] | Tree traversal is the dependency for everything in the next 4 weeks — graphs, DP on trees, BST operations. `[VERIFIED — S4, S6]` (Jane Street: recursive tree traversals dominate due to OCaml/functional style; Two Sigma onsite) | `std::queue` for BFS; recursion stack for DFS. Overlap: BFS-by-`std::queue` will reappear in W11 graphs. | DFS is structural induction (prove the property for the leaves, then for any internal node assuming its children). BFS is breadth-first level-set traversal — like sweeping a contour in 2D. | (a) DFS vs. BFS — when does each fit? (b) Linked-list traversal vs. tree DFS (W7) (c) Sliding window state (W3) | **Milestone M2.** Medium with one hint in all 8 core patterns. Easy cold in <15 min in any core pattern. |
| **9** | Trees II — BST, LCA, paths | LC#700 Search in a Binary Search Tree [E]; LC#230 Kth Smallest Element in a BST [M, BST in-order]; LC#236 Lowest Common Ancestor of a Binary Tree [H, recursion + invariant] | LCA and path problems test recursive-invariant reasoning — used in firms that ask hierarchical-data problems. `[VERIFIED — S8]` (Citadel order-book interview explicitly favors TreeMap / ordered-map for price levels — BST is the underlying data structure) | Recursion. Overlap: tree-shaped recursion preps for graph DFS in W11. | A BST encodes an ordered ranking — in-order traversal is sorted. Like reading off a CDF from left to right. | (a) Why does in-order on a BST yield sorted? (b) BFS level-order vs. DFS in-order (W8) (c) Two-pointer revisited (W1) | Solve LC#236 with at most one hint. Explain the invariant the recursion maintains. |
| **10** | Heaps + priority queues | LC#1046 Last Stone Weight [E]; LC#215 Kth Largest Element in an Array [M, heap-select]; LC#295 Find Median from Data Stream [H, two-heap streaming median] | Streaming statistics — *median, top-K, k-closest* — are quant-favored because they map directly to streaming market data. `[VERIFIED — S2, S3, S5, S9]` (top-cited at Citadel Find-Median + Sliding-Window-Max; IMC explicitly lists "heap, priority queue, BST"; Jane Street OA: order-book matcher uses dual heaps) | `std::priority_queue<int>` (max-heap by default), or with `std::greater<int>` for min-heap. Overlap: directly preps for the C++ W10 SMA-crossover strategy and C++ W12 backtester rolling stats. | A heap maintains an order-statistic invariant — like a partial sort that's "lazy" about the unrelated half. The two-heap median trick is the *median-as-balance-point* of a discrete distribution. | (a) Why is heap-insert O(log n) and not O(log² n)? (b) Sorted-vs.-heap trade-off (vs. W4 binary search) (c) Hash map for streaming counts (W2) | Solve LC#295 with at most one hint. Explain why two heaps + size-balancing work but a single sorted structure would be O(log n) per op too — and which is faster in practice. |
| **11** | Graphs I — BFS / DFS, components, cycle detection | LC#200 Number of Islands [E/M, grid BFS]; LC#695 Max Area of Island [M, grid DFS with size accumulation]; LC#207 Course Schedule [H, cycle detection in directed graph] | Graphs are universally tested at second-round screens. Cycle-detection in directed graphs maps to dependency-resolution problems quant infrastructure runs at scale. `[VERIFIED — S1, S3, S11]` (IMC OA reportedly "all 3 questions on graphs"; HRT VO maze/portal traversal; Two Sigma Friend Circles) | `std::vector<vector<int>>` adjacency list, `std::queue` for BFS, `std::unordered_set` for visited. Overlap: combines W2 hash sets, W6 queues, W8 BFS. | A graph traversal is a discrete process on a state space — like a Markov chain reachability question without probabilities. Cycle detection is asking "does the trajectory ever revisit a state?" | (a) BFS vs. DFS for shortest path on unweighted graphs? (b) Tree DFS (W8) vs. graph DFS — what's the new concern? (visited!) (c) **W+5 spaced:** re-implement W6 LC#239 cold | Solve LC#200 cold in <30 min. Solve LC#207 with at most one hint. |
| **12 (M3)** | Graphs II — Dijkstra, topological sort | LC#841 Keys and Rooms [E, DFS reachability]; LC#210 Course Schedule II [M, topo sort, Kahn's]; LC#743 Network Delay Time [H, Dijkstra with `priority_queue`] | Dijkstra + topo sort are the classical *weighted graph* algorithms. Topo sort applies to any DAG dependency problem; Dijkstra to any shortest-path-with-positive-weights problem. `[UNVERIFIED PLACEHOLDER — S5]` (single source: Jane Street OA prep guide lists currency arbitrage / negative cycles; Dijkstra/topo less corroborated than basic graph BFS/DFS at quant first rounds) | `std::priority_queue` of `pair<dist, node>` with `std::greater` for min-heap. Combines W10 heap + W11 graph. | Dijkstra is greedy with a heap — at each step, finalize the unvisited node with the smallest tentative distance. The proof of correctness is the same shape as proving the greedy choice is optimal in a matroid. | (a) Why does Dijkstra fail on negative weights? (b) BFS-as-Dijkstra-with-unit-weights (W11) (c) Heap insert/pop semantics (W10) | **Milestone M3.** Hard in patterns 1–6. Medium with one hint in patterns 7–12. |
| **13** | DP I — 1D | LC#509 Fibonacci Number [E, memoization → tabulation]; LC#198 House Robber [M, 1D state — tabulation]; LC#322 Coin Change [H, 1D state — tabulation, unbounded] | DP is heavily tested at second-round screens; 1D DP is the prerequisite. `[VERIFIED — S2, S10, S12]` (Citadel "pronounced emphasis on DP"; HRT 2D DP problems; recursion-mastery → 1D-before-2D consensus across NeetCode 150 and LeetCode's official DP study plan) | `std::vector<int>` for the DP table; sometimes two scalars for rolling state. Fresh introduction — no C++ curriculum overlap. | DP is the principle of optimality from dynamic optimization: an optimal solution is composed of optimal sub-solutions. Like the Bellman equation — value at state s = best immediate reward + value at next state. | (a) Memoization vs. tabulation — equivalent? (b) Recursion-with-memo vs. iteration — when does each fit? (c) Greedy vs. DP (W12 Dijkstra is greedy — when does greedy fail?) | Solve LC#322 with at most one hint. Annotate which subtype: **memoization (top-down)** vs. **tabulation (bottom-up)**, and **1D state** explicitly. |
| **14** | DP II — 2D / grid | LC#62 Unique Paths [E/M, 2D state — tabulation]; LC#931 Minimum Falling Path Sum [M, 2D state — tabulation, transition over 3]; LC#72 Edit Distance [H, 2D state — tabulation, classical Levenshtein] | 2D DP appears in any problem with two index dimensions — strings, grids, sequence-vs-sequence. `[VERIFIED — S10]` (HRT OA reports "2D DP problems with edge cases" as a recurring pattern) | `std::vector<vector<int>>` for the 2D DP table. | 2D DP is a discrete partial differential equation: each cell depends on its neighbors via a transition rule, propagated bottom-up. Like solving a Bellman equation on a 2D state space. | (a) Why is the order of filling the 2D table critical? (b) 1D DP recursion vs. 2D DP recursion (W13) (c) Grid BFS (W11) vs. grid DP — what's different? | Solve LC#72 with at most one hint. Annotate: **tabulation, 2D state.** |
| **15** | DP III — subsequences (LCS, LIS) | LC#392 Is Subsequence [E, two-pointer reframe]; LC#300 Longest Increasing Subsequence [M, 1D DP O(n²) — and binary-search variant O(n log n) is the W+1 stretch]; LC#1143 Longest Common Subsequence [H, 2D DP — tabulation] | LCS / LIS appear at firms doing string-similarity, log-diffing, and trade-reconciliation problems. `[TO RESEARCH]` (the trade-reconciliation framing is plausible but not corroborated in firm-tagged sources surveyed; the patterns themselves are standard 2D-DP / 1D-DP-with-binary-search and confirmed by S12) | `std::vector<int>` for LIS; `std::vector<vector<int>>` for LCS. | LIS asks for a *monotone-increasing subsequence* — like extracting the upper-envelope of a discrete time series. The O(n log n) trick uses binary search (W4 callback). | (a) LIS O(n²) vs. O(n log n) — what changes? (b) 2D DP from W14 — what's the analog here? (c) Two-pointer (W1) — why does it work for *subsequence* but not *substring*? | Solve LC#1143 with at most one hint. Derive the O(nm) tabulation from the recurrence. |
| **16** | Intervals + binary-search-on-answer | LC#252 Meeting Rooms [E] [VERIFIED at https://leetcode.com/problems/meeting-rooms/ — confirmed LeetCode Premium-gated. Free-tier alternative: write the "can attend all meetings" check yourself using LC#56 Merge Intervals input shape, or substitute LC#1854 Maximum Population Year for an interval-overlap Easy]; LC#56 Merge Intervals [M, sort + sweep]; LC#1011 Capacity To Ship Packages Within D Days [H, binary search on answer] | Binary-search-on-answer is a *quant-frequent* variant — Optiver, HRT lore. Interval merging models calendar / order-window problems. `[VERIFIED — S1]` for binary-search-on-answer (HRT OA Q4); `[TO RESEARCH]` for the "trading order-window" framing of intervals — that part is interpretation, not corroborated in firm sources | `std::sort` with custom comparator; `std::vector` of `pair<int,int>`. | Sweep over sorted intervals = discrete left-to-right scan with state. Binary-search-on-answer = binary search over the *answer space* rather than the input — same algorithm, different domain. | (a) Why is sort + sweep O(n log n) and not O(n)? (b) Binary search on input vs. on answer (W4) (c) **W+5 spaced:** re-implement W11 LC#200 cold | Solve LC#1011 with at most one hint. Identify *which* monotone function the binary search is searching over. |
| **17** | Backtracking + combinatorics | LC#46 Permutations [E/M]; LC#39 Combination Sum [M]; LC#79 Word Search [H, backtracking + grid DFS — combines W11] | Backtracking shows up at firms with combinatorial-search problems (portfolio construction, basket selection). `[VERIFIED — S6]` for the pattern at Jane Street (subset generation, parser-like state machines); `[TO RESEARCH]` for the specific portfolio/basket framing | Recursion with explicit `std::vector` state and undo. | Backtracking is exhaustive search with pruning — like rejection sampling from a constrained distribution where you backtrack out of impossible assignments. | (a) Backtracking vs. DP — when does each fit? (b) Graph DFS (W11) vs. backtracking — what's the difference? (c) Hash set for visited state (W2) | Solve LC#79 with at most one hint. Identify the pruning rule that turns brute-force exponential into "fast enough." |
| **18** | Mixed hard problems (no new pattern) | LC#42 Trapping Rain Water [H, two-pointer or stack]; LC#23 Merge K Sorted Lists [H, heap or divide-and-conquer]; LC#297 Serialize and Deserialize Binary Tree [H, BFS/DFS encoding] | Hard problems test *pattern-recognition speed* under time pressure. `[VERIFIED — S1, S11]` (HRT OA: 4 problems in 70 min; Two Sigma: 3 in 105 min "Medium then Hard" — both confirm time pressure as a primary signal) | All prior STL — this week is integration. | Each problem admits multiple patterns; choosing the right one quickly is the skill being tested. Like model selection — the data fits multiple frames; pick the most parsimonious. | (a) For each problem: which two patterns could solve it? Which is faster, and why? (b) — (c) — | Solve all 3 with at most one hint each. *Before* coding any of them, name the pattern and complexity target aloud — the recognition step is the test. |
| **19** | Timed mock interviews (×2) | **Mock 1:** 2 problems randomly drawn from W1–W12 (1M + 1H). **Mock 2:** 2 problems randomly drawn from W1–W17 (1M + 1H). 45-min timer each. | Real interviews test recognition + time pressure together. `[VERIFIED — S1, S6, S11]` (Jane Street: 3 hybrid 75-min coding+design rounds; HRT 70-min OA; Two Sigma 105-min OA) | All STL — used in arbitrary-recall mode. | The mock is a *sampled draw from the curriculum's distribution* — variance is the point. The signal is in the residuals: which patterns fail to retrieve under time pressure. | Use [mock-interview-template.md](templates/mock-interview-template.md) for both. | Both mocks completed. The follow-up "one thing to drill before next mock" is concrete, not generic. |
| **20 (M4)** | Final mock + portfolio polish | **Final mock:** 45-min timer, 2 problems (1M + 1H) drawn from any of W1–W17. No hints. | The final mock is the milestone — and the portfolio commit is the artifact the user shows interviewers. `[UNVERIFIED PLACEHOLDER]` (no specific source; portfolio-as-artifact claim is general practice rather than firm-cited) | All STL. | The final mock is the *empirical estimator* of interview readiness — a single sample, but a high-variance one. Pass = encouraging signal; near-pass = drill-list known. | Final retrospective: M1, M2, M3, M4 self-assessment per pattern. Track choice (QD / QR / SWE) — is it converged? | **Milestone M4.** 45-min mock, 2 problems, no hints, both Accepted, complexity correct on both. GitHub repo current with all 20 weeks of solutions, notes, and retrospectives. |

---

## Sources cited

References for the `[VERIFIED]` and `[UNVERIFIED PLACEHOLDER]` labels in
the table above. Verified during the 2026-05-08 post-init research pass
after sub-agents gained `WebSearch` / `WebFetch` access via user-scope
permissions. Anything still labeled `[TO RESEARCH]` is in
[REFERENCE_RESEARCH_QUEUE.md](REFERENCE_RESEARCH_QUEUE.md).

### Quant firm interview sources
- **S1** — HRT 4-question OA full walkthrough, [medium.com/@programhelp/hrt-oa-...](https://medium.com/@programhelp/hrt-oa-4-question-full-ac-walkthrough-hudson-river-trading-online-assessment-7b4800ed02bf)
- **S2** — Citadel Software Engineer interview guide, [interviewquery.com](https://www.interviewquery.com/interview-guides/citadel-software-engineer)
- **S3** — IMC Software Engineer interview questions, [interviewkickstart.com](https://interviewkickstart.com/blogs/interview-questions/imc-trading-software-engineer-interview-questions)
- **S4** — Two Sigma careers blog, "Interviewing for Software Engineering," [twosigma.com](https://www.twosigma.com/careers/interviewing-at-two-sigma/interviewing-for-software-engineering/)
- **S5** — Jane Street OA prep guide, [lodely.com](https://www.lodely.com/companies/jane-street/online-assessment)
- **S6** — Jane Street interviewing.io questions, [interviewing.io](https://interviewing.io/jane-street-interview-questions)
- **S7** — Optiver Software Engineer interview guide, [interviewquery.com](https://www.interviewquery.com/interview-guides/optiver-software-engineer)
- **S8** — Citadel SWE order-book interview experience, [dev.to/net_programhelp_e160eef28/...](https://dev.to/net_programhelp_e160eef28/citadel-swe-interview-experience-order-book-design-in-depth-behavioral-interview-3hb0)
- **S9** — Citadel SWE deep-dive, [interviewcoder.co](https://www.interviewcoder.co/blog/citadel-software-engineer)
- **S10** — Hudson River Trading interview reports, [algodaily.com](https://algodaily.com/companies/hudson-river-trading)
- **S11** — Two Sigma interview questions, [algocademy.com](https://algocademy.com/blog/two-sigma-interview-questions-mastering-the-technical-challenge/)

### Curriculum-sequencing sources
- **S12** — NeetCode 150 roadmap, [neetcode.io/practice/practice/neetcode150](https://neetcode.io/practice/practice/neetcode150)
- **S13** — AlgoMaster 20 DSA patterns, [blog.algomaster.io](https://blog.algomaster.io/p/20-dsa-patterns)
- **S14** — USACO Guide language choice, [usaco.guide/general/choosing-lang](https://usaco.guide/general/choosing-lang)
- **S15** — Tech Interview Handbook languages page, [techinterviewhandbook.org](https://www.techinterviewhandbook.org/programming-languages-for-coding-interviews/) *(403 on direct fetch; claims via search snippets only)*
- **S16** — Red-Green-Code spaced repetition for LeetCode, [redgreencode.com](https://www.redgreencode.com/leetcode-tip-10-planning-a-spaced-repetition-schedule/)

### Findings noted but not directly applied to the table

These came up during the 2026-05-08 research and inform future curriculum
decisions; they don't change the W1–W20 plan but are worth flagging:

- **C++ vs Python for LeetCode** `[VERIFIED — S14, S15]` — *no* prominent
  LeetCode-interview prep guide recommends C++ over Python; C++
  recommendations come from competitive-programming sources (USACO,
  Codeforces) where execution time is tight. The user's choice of C++
  in this curriculum is justified on **curriculum-compounding grounds
  ([D-001](DECISIONS.md))**, not on prep-guide consensus. See updated
  D-001 entry for the cross-reference.
- **Optiver "80 in 8" mental arithmetic test** `[VERIFIED]` — distinct
  from DSA but appears in Optiver's screening (80 questions / 8 min;
  pass ~56, competitive ~70). Out of scope for this curriculum but
  flagged for the user if they pursue Optiver specifically.
- **Aggregate quant-screen difficulty mix:** roughly 15% Easy / 60%
  Medium / 25% Hard `[UNVERIFIED PLACEHOLDER]` — inferred from Optiver's
  7E/16M/3H pool plus HRT/Two Sigma timing reports; treat as approximate
  planning anchor, not a hard target.
- **Distributed/scalability system design (FAANG-style)** `[VERIFIED]` —
  largely *absent* from quant SWE screens, replaced by domain design
  (order book, matching engine). The curriculum doesn't include system
  design; this finding confirms that scope choice.
