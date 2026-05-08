# notes/

Session notes. One file per study session, named `wX_dY.md` where:
- `X` = week number (1–20), zero-padded only in the directory name
  (`solutions/week01/`), not here — `w1_d1.md`, not `w01_d1.md`.
- `Y` = day number within the week (1–5), per the weekly rhythm in
  [curriculum.md](../curriculum.md):
  - **d1** — Pattern intro (1h, paper, no keyboard)
  - **d2** — Solo attempt (1.5h, 2 problems, hints only after 30 min)
  - **d3** — Retrieval practice (0.5h, 3 prompts, written closed-book)
  - **d4** — Solution review with Claude as Code Reviewer (1h)
  - **d5** — Acceptance test, retrospective, PROGRESS.md update,
            `/sync` (0.5h)

Examples: `w1_d1.md`, `w4_d3.md`, `w12_d5.md`.

## Minimum content per note
A note can be three lines if the session was three lines of insight. The
minimum:
1. **What we covered** — pattern, problems, key concept.
2. **What I retrieved cleanly vs. needed scaffolding** — honest.
3. **Open questions** — to revisit Day 4 or next week.

## Day 5 notes specifically
Day 5 notes follow the [retrospective-template.md](../templates/retrospective-template.md).
Copy it in full at the top of `wX_d5.md` and fill it out before running
`/sync`.

## What NOT to put here
- Full solution code — that goes in `solutions/weekXX/LC###_name.cpp`.
- Daily logs unrelated to this curriculum — keep notes focused on DSA
  learning.
- Reference material that's evergreen — that goes in
  [REFERENCES.md](../REFERENCES.md).

## Tagging conventions
- `[FIRST TIME]` — concept retrieved cleanly without scaffolding for the
  first time. Mirror the tag into `PROGRESS.md` Wins.
- `[BLOCKER]` — something that stopped progress; surface to `TASKS.md`
  Blocked.
- `[OVERLAP: cpp-W#]` — overlap with the C++ curriculum noted; reference
  the C++ artifact name.
