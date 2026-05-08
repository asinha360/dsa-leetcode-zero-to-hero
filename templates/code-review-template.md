# Code review — [LC# — Problem name]

**Reviewer role:** Senior Engineer (per AGENTS.md §3)
**Date:** YYYY-MM-DD
**Solution file:** `solutions/weekXX/LC###_name.cpp`

---

## 1. Correctness
- Does it pass all LeetCode test cases? (Accepted / WA / TLE / MLE / RTE)
- If WA: which test failed? Trace by hand. What's the hypothesis?
- Are there edge cases the LeetCode judge happens not to test that *would*
  fail in production?

**Verdict:** [pass / pass with caveats / fails on X]

## 2. Complexity analysis
**The user derives first. The reviewer confirms or corrects with a
derivation, not just a label.**

- **User's claimed time complexity:** O( ? )
- **Derivation:** [count operations against input size; identify dominant
  term]
- **Reviewer's confirmed time complexity:** O( ? )
- **User's claimed space complexity:** O( ? )
- **Reviewer's confirmed space complexity:** O( ? )

**Match the implementation?** yes / no — [if no, where's the gap?]

## 3. Pattern identification
- What pattern was applied?
- Is it the *right* pattern, or did a more naive pattern coincidentally
  pass on the constraints?
- Is there a simpler pattern that achieves the same complexity?
- Is there a *quant-relevant* variant of this pattern (e.g., binary search
  on answer space, monotonic queue for streaming statistics)?

## 4. Edge cases — checklist
- [ ] Empty input
- [ ] Single element
- [ ] All same values (duplicates)
- [ ] Negative numbers (where applicable)
- [ ] Maximum-size input per constraints (TLE risk)
- [ ] Integer overflow (`int` vs. `long long` — LeetCode's most common gotcha)
- [ ] Off-by-one at loop boundaries
- [ ] Unsorted vs. sorted input (where the algorithm assumes sorted)

## 5. C++ STL usage
- Idiomatic vs. roundabout? (e.g., manual hashing vs. `unordered_map`;
  index loops vs. range-based `for`)
- Right container chosen? (`vector` vs. `deque`, `unordered_map` vs. `map`,
  `priority_queue` vs. sorted `multiset`)
- Move semantics where copies are accidental?
- Any `auto&` that should be `const auto&` or vice versa?

## 6. Findings classification

### Blocking
*(must fix before counting this problem solved)*
-

### Suggestion
*(would improve quality; not blocking)*
-

### Style nit
*(taste-level; flag and move on)*
-

## 7. Sister-curriculum connection
*(Does this STL container or algorithm appear in the C++ curriculum? If
yes, name the artifact and the overlap.)*

-
