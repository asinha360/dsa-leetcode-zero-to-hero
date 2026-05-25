Session is ending. Execute the closing sequence in order, confirming each
step before moving to the next.

Step 1 — Audit what happened.
Read TASKS.md and the session's notes file (notes/wX_dY.md if it exists).
List in one sentence each: what was attempted, what was completed, what
was left unfinished. Do not assume — read the files.

Step 2 — Update TASKS.md.
Move completed items from Now → Done (with today's date).
Move the next queued item into Now only if the user confirms they want
to start it next session.
Do not delete anything from Done — it is the audit trail.

Step 3 — Update PROGRESS.md.
For every problem that received an Accepted verdict this session:
- Add the LC# to the week's row in the ledger.
- Record retrieval scores (0/1/2) for any prompts tested.
- Tag any concept retrieved cleanly without scaffolding as `[FIRST TIME]`.
If no problems were solved, write one line stating that and why.

Step 4 — Write the session notes file.
File: notes/wX_dY.md (X = active week number, Y = day number).
If the file already exists, append under a dated header; do not overwrite.

The notes file is the durable record of this session. Write it as if
future-Claude has zero memory of what happened — because it doesn't.
Every section below is required. Do not abbreviate or skip.

  4a. Session header.
      Date, week, day, role(s) active, total time spent (estimate if
      unknown), number of problems attempted vs. solved.

  4b. Problems attempted — one block per problem.
      For each problem:
      - LC# and title.
      - Pattern identified (what the user said before writing code).
      - Target complexity stated before coding (what the user said).
      - Approach taken: brute force attempted? What was the optimization
        insight? Was the insight self-discovered or hinted?
      - Hints given: list each hint verbatim, in order, with which ladder
        rung it was (1/2/3) and how many minutes in it was given.
      - LeetCode verdict: Accepted / Wrong Answer / TLE / MLE / Runtime
        Error. If WA/TLE/MLE/RE, state the failing test case and the
        root-cause hypothesis that was confirmed.
      - Final complexity: time and space, with the derivation (operation
        count, dominant term). State whether the derivation was
        user-derived, user-derived-with-correction, or Claude-given.
      - Code quality notes: any STL idiom issues, off-by-ones, variable
        naming, or correctness issues flagged in review.

  4c. Conceptual wins.
      List every concept or pattern the user articulated correctly and
      unprompted this session. These are the things they own now.
      Format: "Concept — what they said that proved they got it."
      Tag with `[FIRST TIME]` if this is the first clean retrieval
      without scaffolding.

  4d. Scaffolding log.
      List every place where the user needed help beyond what the hint
      ladder provides — a concept explained outright, an answer given,
      a misconception corrected. For each:
      - What the user believed or tried.
      - What was wrong about it.
      - What was said to correct it.
      - Whether the correction landed (did they paraphrase it back
        correctly?).
      This log is the primary input for next session's spaced retrieval
      questions. If nothing needed scaffolding, write "none" — do not
      omit the section.

  4e. Retrieval scores.
      List each retrieval prompt asked this session with the score
      (0/1/2) and one sentence on what the user got right or wrong.
      Include both the opening question and the closing check (Step 6).

  4f. Momentum and blockers.
      One paragraph. What is the user's current confidence level with
      this week's pattern — are they ahead of pace, on pace, or behind?
      What specific thing is most likely to block them next session?
      What is the one concept to re-test at the start of next session?

  4g. Next session's contract.
      - First action (one sentence — specific enough to execute without
        re-reading anything).
      - The single retrieval question to open with next session.
      - Any carry-forward items (unfinished problems, unresolved WA,
        complexity analysis that was dodged).

      After writing 4g in the notes file, write the same information
      into the two authoritative state files so the session-start prompt
      picks it up automatically without reading notes/:

      → TASKS.md: replace the contents of the `## Now` section with the
        first action from 4g, formatted as a single task item. If there
        are carry-forward items, append them as additional items under Now.
        Do not touch Next or Done.

      → PROGRESS.md: overwrite the `## Next session` block (create it
        if it doesn't exist, directly below `## Current state`) with
        exactly three lines:
          **First action:** [first action from 4g]
          **Retrieval question:** [the question, verbatim]
          **Carry-forwards:** [comma-separated list, or "none"]
        Overwrite the entire block each session — it always reflects the
        single most recent contract, not a history.

Step 5 — Log decisions if any were made.
If a non-trivial choice was made (data structure, approach, scope change,
curriculum adjustment), add an entry to DECISIONS.md using the template
in templates/decision-log-template.md: what, rationale, flip-condition.
If no non-trivial decisions were made, skip this step and say so.

Step 6 — Closing retrieval check.
Ask me the same retrieval question from the start of the session.
Score my answer 0/1/2 and record it in PROGRESS.md.
If I score lower than 2, flag it — we need to re-test it next session.

Step 7 — Run /sync.
Commit and push all changed files. Do not skip this step. Do not ask
whether to run it — just run it.

Constraints:
- Do not invent content. Read the files; summarize what actually happened.
- Do not mark a problem Done if it lacks an Accepted verdict or a
  complexity derivation.
- Do not skip Step 7 even if it feels like nothing changed. The working
  tree should be clean and pushed at the end of every session.

Verification:
- After Step 7, confirm: working tree is clean, all files updated, commit
  hash visible. That is "done."
