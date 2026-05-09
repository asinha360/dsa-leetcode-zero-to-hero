# REFERENCE_RESEARCH_QUEUE

Items to research / verify. Each item is one *specific* claim to verify
with a *specific* source. Do not generalize ("research quant
interviews"); be concrete ("verify Citadel SWE first-round screen
frequency of two-pointer problems on LeetCode Discuss
`citadel-securities` tag").

When verified: move the item to `REFERENCES.md` with a `[VERIFIED]`
label and the source URL, or to `curriculum.md`'s **Sources cited**
section if it informs a curriculum claim. When the verification turns
up a different answer than the placeholder, update `curriculum.md`
accordingly and log the correction in `DECISIONS.md` if it changed any
structural choice.

---

## History — research passes

### 2026-05-08 (init)
Both research sub-agents at workspace-init hit permission-denied on
`WebSearch` and `WebFetch`. Curriculum.md was synthesized from training
memory rather than live sources.

### 2026-05-08 (post-init, project-scope perms)
Sub-agents re-spawned after the project's `permissions.allow` was
updated to include `WebSearch` / `WebFetch`. Both sub-agents again hit
permission-denied — project-level allowlist does not propagate to
sub-agent contexts in this harness build.

### 2026-05-08 (post-init, user-scope perms)
After `~/.claude/settings.json` was updated to include `WebSearch` and
`WebFetch` in `permissions.allow`, sub-agents successfully completed
both research prompts. **Items 1–12 below are now resolved.** Sources
moved to `curriculum.md`'s **Sources cited** section (S1–S16).

---

## Resolved items (2026-05-08, user-scope perms pass)

### Quant firm interview content

1. **Pattern frequency by firm** — `[VERIFIED — S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11]`
   Top patterns at quant SWE first-round screens are **hash maps,
   heaps/priority queues, trees BFS/DFS, graphs BFS/DFS, DP 1D/2D, and
   arrays/two-pointer/sliding window** — universal across Citadel,
   Two Sigma, IMC, Optiver, HRT, Jane Street. See curriculum.md per-row
   labels for which firms confirmed which patterns.

2. **First-round vs. second-round difficulty distribution** — `[VERIFIED — S1, S6, S7, S11]`
   No hard consensus, but a **roughly 15% Easy / 60% Medium / 25%
   Hard** mix is inferred from Optiver's 7E/16M/3H pool plus HRT 4-q
   in 70 min and Two Sigma 3-q in 105 min reports. Treat as approximate
   anchor, not a hard target.

3. **Quant-specific patterns under-covered in standard SWE prep** — `[VERIFIED]`
   Confirmed quant-specific (rare in general SWE):
   - **Binary search on the answer space** — `[VERIFIED — S1]` (HRT OA Q4)
   - **Order-book / matching-engine design** — `[VERIFIED — S5, S8]` (Citadel + Jane Street)
   - **Streaming statistics with deque / two-heap medians** — `[VERIFIED — S5, S9]`
   - **Simulation problems** (dice, mazes, trading flow) — `[VERIFIED — S1, S5]`
   - **Probability / EV / Bayes brainteasers** — `[VERIFIED — S5]`
   - **Mental arithmetic** (Optiver "80 in 8") — `[VERIFIED — S7]`
   - **Lock-free / ring-buffer / concurrency primitives** — `[VERIFIED — S7]`
   - **Segment trees** — `[TO RESEARCH]` (plausible but not directly confirmed)

4. **Numerical / probability problems vs. pure DSA** — partially `[VERIFIED]`
   Probability/EV brainteasers confirmed at Jane Street, Optiver, SIG;
   less common at HRT/IMC SWE roles. No precise fraction available.
   `[TO RESEARCH]` for the *quantitative* split (% pure DSA vs. % EV).

5. **Citadel Securities QD interview content specifically** — `[TO RESEARCH]`
   Sources surveyed are predominantly Citadel SWE (not QD). The QD
   pipeline likely emphasizes more probability / numerical methods,
   but no firm-specific QD-vs-SWE comparison was found.

6. **Optiver / IMC / DRW market-making firm difference** — partially `[VERIFIED]`
   Optiver mental-arithmetic + lock-free/concurrency confirmed
   `[VERIFIED — S7]`. IMC graph-heaviness `[UNVERIFIED PLACEHOLDER — S3]`
   (single source, but specific). DRW: `[TO RESEARCH]` (no DRW-specific
   sources surveyed).

### Curriculum sequencing

7. **NeetCode 150 roadmap pattern order** — `[VERIFIED — S12]`
   Confirmed order: Arrays/Hashing → Two Pointers → Sliding Window →
   Stack → Binary Search → Linked List → Trees → Tries → Heap →
   Backtracking → Graphs → 1-D DP → 2-D DP → Greedy/Intervals/Math/Bits.
   This curriculum's W1–W17 deviates by inserting Hash Maps as a
   distinct W2 (NeetCode merges with Arrays) and putting Stacks at W5
   after Binary Search at W4 (NeetCode has Stack before BSearch).
   Deviations are minor and serve the C++ curriculum overlap timing —
   no `DECISIONS.md` entry needed.

8. **Grind 75 / 169 problem density** — `[UNVERIFIED PLACEHOLDER — S15]`
   `techinterviewhandbook.org` returned HTTP 403 on direct fetch;
   density specifics not confirmable from snippets alone. Approximate
   guidance from S12/S13: 5–8 problems per pattern minimum, more for
   trees/graphs/DP. This curriculum's 3 problems/week × 20 weeks = 60
   problems is consistent with consensus minimum.

9. **Minimum problems-per-pattern for Medium-without-hints competency** — `[VERIFIED — S12, S13]`
   Cross-source minimum is **5–8 problems per pattern**; trees /
   graphs / DP need 10–20. NeetCode 150's per-topic counts are the
   most cited evidence-based baseline.

10. **DP pacing for beginners** — `[VERIFIED — S12, S13]`
    Confirmed: **recursion mastery is a stated prerequisite** for DP;
    **1-D DP is taught before 2-D DP** in every major curriculum.
    Beginner with no prior recursion: expect **3–5 weeks** dedicated
    to DP. This curriculum's W13–W15 (3 weeks DP, 1D → 2D →
    subsequences) sits on the lower end of that range — defensible
    given the recursion exposure already built in W7 (linked lists)
    and W8/W9 (trees).

11. **C++ vs. Python for LeetCode interviews** — `[VERIFIED — S14, S15]`
    **No** prominent LeetCode-interview prep guide recommends C++ over
    Python. C++-recommending sources are *competitive programming*
    (USACO/Codeforces). LeetCode community consensus prefers Python
    for terser syntax. **D-001 cross-referenced** with this finding;
    decision stands on curriculum-compounding grounds — see updated
    `DECISIONS.md` D-001 entry.

12. **Spaced retrieval / re-implementation interval evidence** — `[VERIFIED — S16]`
    Most-cited LeetCode-specific schedule is **doubling intervals
    (1d → 2d → 4d → 8d → 16d → 32d → 64d → 128d → 256d)** per
    Red-Green-Code, also embedded in tools like LeetRecur and
    SuperMemo-2-based grinders. This curriculum's week+5 interval is
    a compressed variant calibrated to the 20-week timeline.

---

## Still open

### LeetCode problem-number verification

13. **All 60+ LC problem references in `curriculum.md`** — `[UNVERIFIED PLACEHOLDER]`
    Bulk task: confirm every LC# in the curriculum table maps to the
    name written. The most likely drift candidates are: "Encode/Decode"
    series and any problem in the LC#1–100 range that has been
    renamed.

    **Resolved (step-3 audit, 2026-05-08):**
    - **LC#933 Number of Recent Calls** — `[VERIFIED]` at
      https://leetcode.com/problems/number-of-recent-calls/. Caveat:
      LeetCode rates this **Easy**, not Medium. W6 row updated.
    - **LC#252 Meeting Rooms** — `[VERIFIED]` at
      https://leetcode.com/problems/meeting-rooms/. Confirmed
      Premium-gated. W16 row annotated with free-tier alternatives.

### Pedagogy framing references

14. **Spaced retrieval / deliberate practice / interleaving citations**
    — partially `[VERIFIED — S16]` for spaced retrieval (curriculum.md
    W6/W11/W16 challenges + retrieval prompts already cite S16).
    `[UNVERIFIED PLACEHOLDER]` still for deliberate practice (Ericsson)
    and interleaving (Bjork) — copy from C++ project once those are
    located.

### New gaps surfaced by 2026-05-08 research

15. **Citadel Securities QD vs. SWE interview content** — `[TO RESEARCH]`
    (see resolved item 5 caveat).

16. **DRW interview content** — `[TO RESEARCH]`
    No DRW-specific sources surfaced. If the user targets DRW
    specifically, do a focused pass on Glassdoor + Blind for DRW.

17. **Segment trees at quant firms** — `[TO RESEARCH]`
    Frequently rumored for order-book/range-query problems but no
    firm-specific source confirmed in the surveyed pass. Worth a
    targeted search before W16.

18. **Trade-reconciliation framing of LCS / LIS** — `[TO RESEARCH]`
    The W15 row described LCS/LIS as appearing in "trade-reconciliation
    problems." Plausible but not corroborated. The patterns themselves
    are confirmed standard DP via S12; the *application* framing is
    interpretive.
