Run a spaced-retrieval review session.

Steps (execute in order, do not skip):

1. Read `PROGRESS.md`. Extract every line containing `[FIRST TIME]` from the last 7 days (use the dates logged alongside each entry).

2. From those entries, select up to 3 concepts. Prefer concepts not yet appearing in any retrieval-score row in PROGRESS.md, or those with the lowest recent score.

3. For each selected concept, generate ONE Socratic retrieval question. The question must:
   - Require recall, not recognition (no multiple choice, no definitions given)
   - Be answerable in 1–3 sentences
   - Test the *why* behind the concept, not just its name
   
   Example format:
   > Q1 [concept name]: <question text>

4. Present all questions at once. Wait for the user to answer each one before evaluating.

5. Grade each answer on this scale:
   - **Clean** — recalled correctly without scaffolding
   - **Prompted** — recalled with a follow-up hint
   - **Blank** — could not recall; needs re-study

6. Append a retrieval-score row to `PROGRESS.md` in this format:
   `| [today's date] | [concept] | [score] |`

7. If any concept scored Blank: flag it explicitly. Say which section of the curriculum covers it and suggest re-reading that section before the next session.

End the session with: "Review complete. [N/3] clean recalls." If all 3 are clean, add "Strong retention — ready to advance."
