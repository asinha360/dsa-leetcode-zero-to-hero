# Problem attempt template

Copy this template into `solutions/weekXX/LC###_name.md` (or as a comment
block at the top of the `.cpp` file) **before** you start coding. The
template's job is to force pattern-first thinking. If you're filling
it in *after* the code is working, you've already missed the point.

---

## Problem: [LC# — Name] [E/M/H]

## Pattern
*Name the pattern before writing any code. If you can't name it, you
don't yet understand the problem. Re-read the constraints.*

> e.g., "Two-pointer (opposite ends, converging)"

## Brute force
*Describe the obvious-but-slow approach. Derive its time and space
complexity. This is the baseline you're trying to beat.*

- Approach:
- Time: O( ? ) — derivation:
- Space: O( ? ) — derivation:

## Optimization insight
*What property of the input unlocks a better approach? This is the
*why* behind the pattern. If you can't articulate this in one sentence,
you're pattern-matching, not pattern-recognizing.*

> e.g., "The array is sorted, so a hash-map lookup is overkill — we can
> converge two pointers in O(n) without extra memory."

## Code attempt
*Paste your code here AFTER your solo attempt (Day 2). Do NOT paste
Claude's code. If you collaborated on the solution during Day 4 review,
note that — and then re-implement cold during the W+5 retrieval
challenge.*

```cpp
// your code
```

## Edge cases tested by hand
*At minimum, walk through each of these. Add problem-specific cases too.*

- [ ] Empty input — `[]` / `""` / `nullptr` head
- [ ] Single element
- [ ] All same values / all duplicates
- [ ] Sorted ascending / sorted descending (where it matters)
- [ ] Maximum-size input per constraints (TLE risk)
- [ ] Negative numbers / zero (where it matters)
- [ ] Integer overflow risk (`int` vs. `long long`)

## LeetCode result
- [ ] Accepted
- [ ] Wrong Answer
- [ ] Time Limit Exceeded
- [ ] Memory Limit Exceeded
- [ ] Runtime Error

## If not Accepted — failing test case
*Paste the test case. Form a hypothesis. DO NOT modify code without one.*

- Failing input:
- Expected:
- Got:
- Hypothesis (what went wrong, why):
- Fix:

## Final complexity
*Derive step by step — not just a label.*

- Time: O( ? )
  - Outer work:
  - Inner work:
  - Dominant term:
- Space: O( ? )
  - Allocations:
  - Recursion stack depth (if applicable):

## Retrieval note
*One sentence: what would you recognize faster next time? This is the
sentence the W+5 challenge will test you on. Make it specific.*

> e.g., "Sliding window with hash-map state — when I see 'longest
> substring with at most K distinct,' the hash map *counts* characters
> in the window; the window shrinks while the map's size > K."
