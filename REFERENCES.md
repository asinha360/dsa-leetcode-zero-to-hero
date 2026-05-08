# REFERENCES

Background reading and reference material for this curriculum. Citations
are labeled `[VERIFIED]` (sources confirmed live this session),
`[UNVERIFIED PLACEHOLDER]` (training-memory belief, needs confirming), or
`[TO RESEARCH]` (pointer only, content unread). When a reference is
consulted in a session, summarize what was useful below the entry — don't
let entries become dead links.

---

## Algorithm and data-structure foundations

### Books
- **CLRS — *Introduction to Algorithms* (Cormen, Leiserson, Rivest, Stein)**
  `[UNVERIFIED PLACEHOLDER]` — the canonical reference. Use for derivation
  rigor when complexity proofs feel hand-wavy. Not a tutorial — too dense
  for first exposure.
- ***Competitive Programmer's Handbook* — Antti Laaksonen**
  `[UNVERIFIED PLACEHOLDER]` — free PDF, contest-oriented, C++-first. Best
  bridge from "I can write a for-loop" to "I can write a sliding window."
- ***Algorithm Design Manual* — Steven Skiena**
  `[UNVERIFIED PLACEHOLDER]` — "war stories" make patterns memorable.
  Pattern recognition first, derivations second.

### Online
- **NeetCode — neetcode.io / neetcode.io/roadmap** `[UNVERIFIED PLACEHOLDER]`
  — pattern-organized roadmap; widely cited as the de-facto sequence.
- **Grind 75 — techinterviewhandbook.org/grind75** `[UNVERIFIED PLACEHOLDER]`
  — selectable timeline (8 / 12 / 26 weeks); good for sanity-checking
  problem density.
- **LeetCode Discuss — firm-tagged threads** `[TO RESEARCH]` — primary
  source for what each firm actually asks. Subject to recency bias and
  individual experience; treat as anecdotal.
- **AlgoMonster — algo.monster** `[UNVERIFIED PLACEHOLDER]` — pattern
  taxonomy and decision flowcharts.
- **USACO Guide — usaco.guide** `[UNVERIFIED PLACEHOLDER]` — competitive
  programming, but its DP and graph sections are the most pedagogically
  tight resources I'm aware of.

### Visualization
- **VisuAlgo — visualgo.net** `[UNVERIFIED PLACEHOLDER]` — animated
  data-structure operations. Useful for tree rotations, Dijkstra, union-find.

---

## Quant firm interview context

- **Glassdoor — firm interview pages** `[TO RESEARCH]` — anecdotal,
  sometimes outdated, but the largest sample.
- **r/quant, r/csMajors, Wall Street Oasis** `[TO RESEARCH]` — recent
  candidate experiences. Source bias toward complainers; calibrate.
- ***A Practical Guide to Quantitative Finance Interviews* — Xinfeng Zhou**
  `[UNVERIFIED PLACEHOLDER]` — known as "the green book." Mostly probability
  and brain-teasers, *not* DSA — but useful for understanding what the
  *non*-coding rounds emphasize. Helps calibrate the user's track choice.
- ***Heard on the Street* — Timothy Crack** `[UNVERIFIED PLACEHOLDER]` —
  similar function to the green book.

---

## C++ STL fast reference

- **cppreference.com** `[VERIFIED]` (used continuously in C++ curriculum) —
  authoritative. Bookmark `/w/cpp/container` for container complexities.
- **Compiler Explorer — godbolt.org** `[VERIFIED]` (used in C++ curriculum)
  — paste a snippet, see the assembly. Useful for "is `unordered_map` actually
  faster than `map` here?" intuition.

---

## Sister-project artifacts (cpp-finance-zero-to-hero)

When a DSA pattern overlaps a C++ artifact, the *Sister-Project Liaison*
role from `AGENTS.md` flags it. The relevant files (paths within the C++
project) — verify these exist before referencing in a session:

- **W4 YTM bisection solver** — binary search precedent. `[TO VERIFY]`
- **W3 returns stats tool** — `std::vector` price series. `[TO VERIFY]`
- **W9 OHLC bar aggregator** (upcoming) — `std::unordered_map`.
- **W10 SMA-crossover strategy** (upcoming) — `std::priority_queue`.
- **W11 limit order book** (upcoming) — `std::stack` and possibly
  `std::map` for price levels.
