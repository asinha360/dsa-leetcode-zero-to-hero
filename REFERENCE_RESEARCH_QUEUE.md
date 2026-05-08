# REFERENCE_RESEARCH_QUEUE

Items to research / verify when web access (`WebSearch` / `WebFetch`) is
restored. Each item is one *specific* claim to verify with a *specific*
source. Do not generalize ("research quant interviews"); be concrete
("verify Citadel SWE first-round screen frequency of two-pointer
problems on LeetCode Discuss `citadel-securities` tag").

When verified: move the item to `REFERENCES.md` with a `[VERIFIED]` label
and the source URL. When the verification turns up a different answer
than the placeholder, update `curriculum.md` accordingly and log the
correction in `DECISIONS.md` if it changed any structural choice.

---

## Why this file exists
Both research sub-agents at workspace-init (2026-05-08) hit
permission-denied on `WebSearch` and `WebFetch`. Curriculum.md was
synthesized from training memory rather than live sources. **Every
labeled `[UNVERIFIED PLACEHOLDER]` claim in `curriculum.md` and
`REFERENCES.md` should be re-verified once web access is available.**
This file is the consolidated worklist.

### Re-attempt log
- **2026-05-08 (post-init)** — Sub-agents re-spawned with the same two
  prompts after the project's `permissions.allow` was updated to include
  `WebSearch` / `WebFetch`. Both sub-agents again hit permission-denied
  on every WebSearch / WebFetch call (the project-level allowlist does
  not propagate to sub-agent contexts in this harness build). Main-agent
  WebSearch *does* work — see step-3 verifications below — but sub-agent
  re-research requires either a different harness or main-agent
  hand-execution of the sub-agent prompts. Labels in curriculum.md left
  unchanged for items 1–12 below.

---

## Quant firm interview content — to verify

1. **Pattern frequency by firm** — `[TO RESEARCH]`
   For each of: Jane Street, Citadel Securities, Two Sigma, HRT, DE
   Shaw, Optiver, IMC — what are the top 5 DSA patterns that appear in
   first-round SWE/QD coding screens?
   Sources: LeetCode Discuss firm tags, Glassdoor interview pages,
   r/quant, Blind. Multiple sources required for `[VERIFIED]`.

2. **First-round vs. second-round difficulty distribution** — `[TO RESEARCH]`
   Is there a consensus difficulty mix per round at quant firms (e.g.,
   "first round = 1 Easy + 1 Medium; second round = 2 Mediums + 1 Hard")?

3. **Quant-specific patterns under-covered in standard SWE prep** — `[TO RESEARCH]`
   The spec hypothesizes: binary-search-on-answer-space, monotonic-queue
   for streaming statistics, expected-value problems, simulation
   problems, segment-tree-style range queries. Which of these *actually*
   appear at top quant firms vs. being lore?

4. **Numerical / probability problems vs. pure DSA** — `[TO RESEARCH]`
   What fraction of quant first-round screens are pure DSA vs.
   probability puzzles ("green book" style) vs. mental math vs.
   numerical methods?

5. **Citadel Securities QD interview content specifically** — `[TO RESEARCH]`
   Verify whether QD (Quant Developer) screens at Citadel Securities
   weight DSA more or less than Citadel's central SWE pipeline.

6. **Optiver / IMC / DRW market-making firm difference** — `[TO RESEARCH]`
   Lore says these firms emphasize mental math + low-latency C++ over
   DSA breadth. Verify against current candidate reports.

---

## Curriculum sequencing — to verify

7. **NeetCode 150 roadmap pattern order** — `[UNVERIFIED PLACEHOLDER]`
   Memory says the order is roughly: Arrays/Hashing → Two Pointers →
   Sliding Window → Stack → Binary Search → Linked List → Trees →
   Tries → Heap → Backtracking → Graphs → DP. Confirm at
   `https://neetcode.io/roadmap`. If the actual order conflicts with
   `curriculum.md`'s W1–W17 sequence, log a `DECISIONS.md` entry
   explaining why we deviated.

8. **Grind 75 / 169 problem density** — `[UNVERIFIED PLACEHOLDER]`
   How many problems per week does the official Grind 75 / 169 schedule
   recommend at the 12-week and 26-week pace? Verify at
   `https://www.techinterviewhandbook.org/grind75`. We've targeted 3
   per week (1E + 1M + 1H/variant). Is that consistent with consensus?

9. **Minimum problems-per-pattern for Medium-without-hints competency**
   — `[TO RESEARCH]`
   Is there an evidence-based number? Anecdotal claims range from 5–15
   per pattern, but I have no source.

10. **DP pacing for beginners** — `[UNVERIFIED PLACEHOLDER]`
    Memory says 1D DP is universally introduced before 2D DP, and most
    beginner guides allocate 3–4 weeks to DP. Confirm against multiple
    sources.

11. **C++ vs. Python for LeetCode interviews** — `[TO RESEARCH]`
    Does any prominent prep resource explicitly recommend C++ over
    Python for top-tier quant interviews? The user's choice is justified
    on curriculum-compounding grounds (D-001) regardless, but it would
    strengthen the case if a credible source agrees.

12. **Spaced retrieval / re-implementation interval evidence** — `[TO RESEARCH]`
    The week+5 interval in this curriculum is a guess derived from the
    20-week timeline. Look for actual evidence on optimal spacing for
    procedural-skill retention (algorithms specifically — not vocabulary
    flashcards).

---

## LeetCode problem-number verification

Every `[TO VERIFY]` problem reference in `curriculum.md` should be
confirmed at `leetcode.com/problems/[slug]` to ensure the number and
canonical name still match. LeetCode renumbers occasionally and renames
rarely; verifying once at workspace start avoids drift.

13. **All 60+ LC problem references in `curriculum.md`** — `[UNVERIFIED PLACEHOLDER]`
    Bulk task: confirm every LC# in the curriculum table maps to the
    name written. The most likely drift candidates are: "Meeting Rooms"
    series (252/253 vs. premium gating), "Encode/Decode" series, and
    any problem in the LC#1–100 range that has been renamed.

    **Step-3 audit (2026-05-08) — items resolved:**
    - **LC#933 Number of Recent Calls** — `[VERIFIED]` at
      https://leetcode.com/problems/number-of-recent-calls/. Caveat:
      LeetCode rates this **Easy**, not Medium. Curriculum row W6 updated
      to `[E]`. The W6 row therefore reads 2E + 1H rather than 1E + 1M +
      1H — flagged a swap-in candidate (LC#622 Design Circular Queue) in
      the curriculum entry.
    - **LC#252 Meeting Rooms** — `[VERIFIED]` at
      https://leetcode.com/problems/meeting-rooms/. Confirmed
      **Premium-gated**. Curriculum row W16 annotated with free-tier
      alternatives (LC#1854 Maximum Population Year, or hand-roll the
      "can attend all meetings" check on LC#56's input shape).

---

## Pedagogy framing references

14. **Spaced retrieval / deliberate practice / interleaving citations**
    — `[UNVERIFIED PLACEHOLDER]`
    `CLAUDE.md` and `curriculum.md` reference these frameworks (Bjork on
    desirable difficulties, Ericsson on deliberate practice, etc.) as
    part of the C++ curriculum's pedagogy. The C++ project should
    already have verified citations — copy them over once located. Do
    not re-research from scratch.
