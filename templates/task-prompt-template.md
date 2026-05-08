# Task-prompt template

For non-trivial tasks given to Claude (or to a sub-agent) — implementation,
refactor, debugging, multi-step research, anything that touches more than
one file or one concept.

Use this template *as the user* when handing Claude work that's bigger than
a one-liner. The structure mirrors `PROMPTING_PROTOCOL.md` (5-part FCCFV)
but specialized for *executing* a task rather than *researching* one.

---

## 1. Frame — what's the task?
*One paragraph. State the goal, the deliverable, and the success criterion.*

> Example: "Implement LC#239 Sliding Window Maximum in C++. The
> deliverable is a passing LeetCode submission at the optimal time
> complexity, plus a derivation written in `solutions/week06/LC239.cpp`
> as a comment block."

## 2. Context — what does Claude need to know?
*Prior work, constraints, what's already been tried, what's off-limits.*

> Example: "We covered monotonic deques in W6 Day 1. I attempted twice
> with O(n log n) using a multiset; both passed but I want the O(n)
> deque solution. I have NOT tried the deque approach yet — I want to
> attempt it solo first."

## 3. Plan — what's the approach?
*Either: a 3–7 step plan you want Claude to follow, OR: explicitly say
"Claude, propose a plan first."*

> Example: "Propose a plan first. After I confirm, build it step by step
> and stop after each step for me to verify."

## 4. Constraints — what's off-limits?
*What Claude must NOT do. Pedagogy lives here.*

> Example: "Do NOT write the deque solution for me. Coach me through the
> intuition: why is the deque monotonic? What invariant does it maintain?
> Hint ladder per CLAUDE.md §14e."

## 5. Verification — how will we know it's done?
*Concrete, testable success criterion.*

> Example: "Done = LeetCode Accepted + I can re-derive the deque
> invariant in my own words 48 hours later in `notes/w6_d3.md`."

---

## Anti-patterns to avoid

- **"Just figure it out."** — under-specified. Claude defaults to "be
  helpful," which for a learner means hand-holding past the struggle.
- **"Write the solution."** — for any DSA problem the user hasn't yet
  attempted, this violates `CLAUDE.md §6` and `§14a`. Claude refuses.
- **"Explain everything."** — over-specified in the wrong direction. Ask
  for the *insight*, not the lecture.
- **No verification.** — if you don't say how "done" is checked, Claude
  decides, and Claude's bar is usually too low.
