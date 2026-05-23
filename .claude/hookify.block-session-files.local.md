---
name: block-session-files
enabled: false
event: file
conditions:
  - field: file_path
    operator: regex_match
    pattern: (PROGRESS|TASKS|DECISIONS)\.md$|notes/w\d+_d\d+\.md$
action: block
---

**BLOCKED: session file write outside of /end**

You attempted to write to a session-closing file (PROGRESS.md, TASKS.md, DECISIONS.md, or notes/wX_dY.md) during an active session. This violates CLAUDE.md section 12.

Session files are written ONLY when /end is explicitly invoked. Do not write these files now.

Tell the user: "I can't write session files until /end is invoked. I'll track what happened in conversation context and log it properly at session close."
