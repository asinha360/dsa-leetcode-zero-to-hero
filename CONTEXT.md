# CONTEXT

## Project
**dsa-leetcode-zero-to-hero**

## Purpose
Take a non-technical beginner to interview-ready DSA competency for quant
finance roles (quant developer, quant researcher, SWE at a trading firm or
hedge fund). The user has not yet decided between QD / QR / SWE tracks; the
curriculum is built to leave that choice open through Week 12 and converge
on track-specific polish in Weeks 17–20.

## Sister project
**cpp-finance-zero-to-hero** — a C++ quant curriculum, currently at Week 5 of
16 (started 2026-04-18). That curriculum has unconditional priority. If the
C++ track slips in any given week, this project pauses for that week. Do not
sacrifice the primary curriculum to keep this one on schedule.

## Time budget
3–5 hrs/week, 20 weeks. The 5-hr ceiling is sustainable, not the floor — a
2-hr week is fine and means: keep Day 2 (the longest solo-attempt block),
compress Days 3 and 5.

## Solution language
**C++ only.** Every problem is attempted and submitted in C++. No Python
alternative. The rationale is curriculum compounding: applying STL containers
(`vector`, `unordered_map`, `priority_queue`, `stack`, `queue`) in arbitrary
problem-solving mode reinforces what the C++ curriculum already builds in
finance contexts.

## Success criteria — 4 milestones
- **M1 (W4):** Can solve any Easy in patterns 1–4 cold in C++ in <15 min.
  Medium in patterns 1–4 with at most one hint in <30 min.
- **M2 (W8):** Medium in all 8 core patterns with at most one hint. Easy cold
  in any core pattern in <15 min.
- **M3 (W12):** Hard in patterns 1–6. Medium in patterns 7–12 with at most
  one hint. Graphs I/II at Medium difficulty.
- **M4 (W20):** Completes a timed 45-min mock interview (2 Medium/Hard
  problems drawn from all 17 patterns) without hints. GitHub portfolio
  current.

## What to avoid
- Pattern-matching without understanding. If the user can't say *why* a pattern
  fits before writing code, redirect.
- Moving to the next problem before clean retrieval of the prior. Spaced
  retrieval is non-negotiable.
- Treating LeetCode "Accepted" as proof of understanding. Accepted with the
  wrong complexity analysis is a bug, not a win.
- Letting this project cannibalize C++ curriculum time.
- Finance analogies. Use calculus and probability analogies only.

## Sister-project overlap to surface continuously
- Binary search → already built in W4 YTM bisection solver
- `std::vector` → every C++ week; price series in W3
- `std::unordered_map` → upcoming W9 OHLC bar aggregator
- `std::priority_queue` → upcoming W10 SMA-crossover strategy
- `std::stack` → upcoming W11 limit order book
- Graph BFS → not in C++ curriculum; introduce fresh here
- DP → not in C++ curriculum; introduce fresh here
