# Decision log entry template

Copy the block below into `DECISIONS.md`, give it the next D-### number,
fill in every field. If you can't fill a field honestly, the decision
isn't ready to log — go back and clarify it first.

A decision log entry is durable. It's read by future-you and future-Claude
months from now. Write for that audience.

---

## D-### — [one-line title in the form: "Subject: choice"]

**Decided:** YYYY-MM-DD

**What:** [the choice itself, in 1–3 sentences. Be specific — "use heap"
is too vague; "use `std::priority_queue<long long>` as a min-heap (negate
on push) for the streaming-median problem class" is specific.]

**Rationale:** [why this and not the alternatives. Name the alternatives
considered. Numbers, evidence, prior incidents — not vibes.]

**Flip-condition:** [the *observable* state under which we'd revisit this.
"If X happens, we change to Y." If you can't write a flip condition, the
decision isn't really a decision — it's an assumption. Move it to
`ASSUMPTIONS.md` instead.]
