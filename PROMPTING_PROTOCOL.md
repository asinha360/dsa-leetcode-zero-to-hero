# PROMPTING PROTOCOL

A 5-part framework for any prompt that isn't a one-liner. Apply to research
tasks, coaching sessions, code reviews, and any time the conversation feels
underspecified. The framework is not a script — it's a checklist for the
*author of the prompt* (the user, or Claude prompting a sub-agent).

---

## 1. Frame — what is the goal?
State the goal in one sentence. What does success look like? What is the
user actually trying to learn or accomplish? If you can't compress it to
one sentence, the goal isn't clear yet.

**Bad:** "Help me with sliding window."
**Good:** "I need to be able to recognize when sliding window applies on
an unseen problem within 30 seconds of reading the prompt — coach me
toward that, not toward solving any specific problem."

## 2. Context — what does the recipient need to know?
What's already happened? What has the user already tried? What constraints
matter? Don't make Claude guess. For a research sub-agent: include the
constraint that web tools may be denied — propose a fallback plan upfront.

**Anti-pattern:** "Write me a solution." (No context. Claude has to ask.)
**Better:** "I tried two-pointer for 25 minutes and got stuck — here's
what I have. Don't give me the solution. Hint me toward what I missed."

## 3. Constraints — what's off-limits?
List what *not* to do. For DSA: *"don't reveal the optimal complexity yet"*
or *"don't write the code for me, just the pattern."* For research:
*"don't fabricate sources"* or *"if you can't verify, label `[TO RESEARCH]`
and move on."*

Constraints are how you encode the pedagogy. Without them, Claude defaults
to "be helpful," which for a learner means "give the answer."

## 4. Form — what shape should the output take?
Specify length, structure, and register.

- "Three sentences, no bullets."
- "A check question at the end."
- "A markdown table with columns X / Y / Z."
- "Code only, no commentary."

If you don't specify, you'll get prose. Sometimes prose is right; usually
something tighter is.

## 5. Verification — how will the user know it's right?
What's the test that the output is correct? For a coaching turn: a check
question whose answer reveals understanding. For code: tests pass *and*
complexity matches. For research: every claim has a label.

**The verification step is the most-skipped one.** It's also the one that
catches Claude's confident-but-wrong outputs before they propagate.

---

## Worked example — DSA problem prompt

> **Frame:** I want to solve LC#3 Longest Substring Without Repeating
> Characters using a sliding-window pattern.
>
> **Context:** I learned hash maps in W2 and sliding window in W3 Day 1.
> I haven't tried the problem yet.
>
> **Constraints:** Don't give me the answer. I want to attempt 30 minutes
> first. If I'm stuck, give me hint 1 (why this direction), then wait.
>
> **Form:** When I'm done, review my code as a senior engineer. Ask me
> for complexity first; correct me if I'm wrong.
>
> **Verification:** I should be able to re-derive the same solution cold
> 48 hours later in `notes/w3_d3.md`.
