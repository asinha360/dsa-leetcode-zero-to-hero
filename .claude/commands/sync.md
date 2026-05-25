---
description: End-of-session commit and push for the DSA workspace
---

# /sync — End-of-session commit and push

When this command is invoked:

## 1. Read PROGRESS.md for the commit summary

Read `PROGRESS.md`. Extract the most recent **"Today's artifact"** line, or
the most recent **"Wins"** entry, to use as the commit summary. If neither
is found, ask the user: *"One-line summary for the commit message?"* and
wait for the answer before continuing.

## 2. Stage, commit, and push

Run:

```bash
git add solutions/ notes/ PROGRESS.md TASKS.md DECISIONS.md README.md
git status --short
```

If `git status --short` returns nothing, report **"Nothing to commit. Working tree clean."** and exit cleanly.

Otherwise, commit and push immediately — no confirmation prompt:

```bash
git commit -m "Session [today's date]: [week and day] — [summary]"
git push origin main
```

Use the actual date (YYYY-MM-DD), the active week and day from `TASKS.md`
(e.g., `W3 D2`), and the summary from step 1.

Report: **"Committed and pushed. [N] files. Message: [commit message]"**

## 3. If `git push` fails (no remote set)

Report the error. Then show the user the exact commands to add a remote:

```bash
git remote add origin https://github.com/[USERNAME]/dsa-leetcode-zero-to-hero
git push -u origin main
```

Replace `[USERNAME]` with their GitHub username (ask if you don't know
it). The commit *has* succeeded locally — only the push failed. Make this
clear so the user doesn't think they need to redo the work.

---

**Idempotency:** This command is safe to re-run. If nothing is staged on
re-run, step 2 exits cleanly with **"Nothing to commit."**
