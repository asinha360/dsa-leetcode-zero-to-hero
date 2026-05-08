# WORKFLOW

The 10-phase lifecycle for any non-trivial task in this workspace. Skip a
phase only if it's truly inapplicable, and say *which* phase you're
skipping and *why*. The phases are not bureaucracy — they are the
debugging that prevents future debugging.

For DSA problems specifically, phases 1–4 happen *before* writing any
code. The user's discipline of pattern-first, complexity-first, code-last
is what these phases enforce.

---

## Phase 1 — Frame
Restate what we're doing in your own words. What's the input, what's the
output, what counts as "done"? For a LeetCode problem: read the constraints,
note input shape, output shape, and the smallest and largest cases.

**Output:** one-paragraph framing, plus the explicit success criterion.

## Phase 2 — Context
What does the surrounding code / project / curriculum already know? What
patterns have we used before that might apply here? What does the
sister-curriculum (C++) say about the relevant data structure? Read
before writing.

**Output:** named precedents (prior problems, prior C++ artifacts).

## Phase 3 — Plan
Sketch the approach in plain English **before** code. For a DSA problem:
state the pattern, the brute force, the optimization insight, target
complexity. For an engineering task: list steps in order, with risks.

**Output:** a 3–7 step plan or a pattern-and-complexity declaration.

## Phase 4 — Confirm
Get a thumbs-up from the user before executing. For DSA problems, this is
where the user states their intended pattern and complexity *aloud*. The
Coach role refuses to proceed past Phase 4 until the user has done this.

**Output:** explicit user agreement to proceed.

## Phase 5 — Build
Write the code. Smallest diff that solves the problem. Idiomatic STL.
Keep the function signature minimal — LeetCode harnesses do the I/O.

**Output:** a compiling C++ solution.

## Phase 6 — Verify
Run the code mentally on the edge cases listed in
`templates/problem-attempt-template.md`. Then submit to LeetCode. If WA,
go to Phase 7. If Accepted, continue.

**Output:** Accepted verdict + edge cases hand-tested.

## Phase 7 — Diagnose (if anything failed)
Wrong Answer: read the failing test, hypothesize, trace by hand, fix.
TLE: complexity is wrong; redo Phase 3.
MLE: data structure is wrong; redo Phase 3.
Runtime Error: undefined behavior; check bounds, null, integer overflow
(`int` overflow at ~2.1e9 is the most common LeetCode pitfall).

**Output:** root-cause hypothesis + fix.

## Phase 8 — Review
Senior-engineer review of the working solution. Complexity derivation
(time + space), pattern critique, STL idiom check, edge cases. The user
derives complexity *first*; Claude confirms or corrects.

**Output:** complexity proof + at least one named improvement (or
"nothing to improve, here's why").

## Phase 9 — Retrieve
Within 48 hours of solving: re-derive the pattern intuition closed-book.
Three retrieval prompts in `notes/wX_dY.md`. Score 0/1/2.

**Output:** retrieval scores in `PROGRESS.md`.

## Phase 10 — Log
- Update `TASKS.md` (Now → Done).
- Append to `PROGRESS.md` (problems solved, milestones, `[FIRST TIME]`
  tags).
- If a non-trivial choice was made (data structure, approach), log to
  `DECISIONS.md`.
- Append to `notes/wX_dY.md` if the session diverged from plan.
- Run `/sync`.

**Output:** clean working tree, pushed to remote, consistent state across
TASKS / PROGRESS / DECISIONS.
