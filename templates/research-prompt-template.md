# Research-prompt template

For research sub-agents (via the `Agent` tool with
`subagent_type="general-purpose"`) or for any structured search task
where the goal is verified facts, not synthesis from memory.

The protocol below assumes web access. If `WebSearch` / `WebFetch` are
denied in the environment, the sub-agent should stop, report the blocker,
and wait — *not* fabricate sources from training memory. See item 6 below.

---

## Frame
*One sentence: what factual question is this research answering?*

> Example: "Which of the 15 standard LeetCode patterns appear most
> frequently in Citadel Securities first-round software-engineer screens
> as of 2025?"

## Sources to investigate
*Name them. Don't say "search the web" — name the specific sites/sources
where evidence would live.*

> Example: "Glassdoor `/Interview/Citadel-Securities-Software-Engineer-RVW`
> threads, LeetCode Discuss tagged `citadel-securities`, r/quant Reddit,
> Blind posts tagged `Citadel`, Citadel's careers blog."

## Constraints
- Label every claim `[VERIFIED]` (multiple independent sources agree),
  `[UNVERIFIED PLACEHOLDER]` (single source or anecdotal), or
  `[TO RESEARCH]` (could not confirm).
- Prefer `[TO RESEARCH]` over a confident unverified claim.
- Include source URLs for every `[VERIFIED]` and `[UNVERIFIED PLACEHOLDER]`
  claim.
- Do not synthesize from training memory and present as research.

## Form
*Output structure expected from the sub-agent — be concrete:*

> Example: "Markdown headers per question. Bullet list per finding. Total
> length under 1500 words. End with a 'Sources consulted' section."

## Verification
*How will the user know the research is good?*

- Every claim has a label.
- Sources are real (clickable URLs).
- Conflicting sources are flagged as conflicts, not silently averaged.

## Fallback if web tools are denied
1. Sub-agent reports the blocker explicitly.
2. Sub-agent does NOT fabricate sources from training memory.
3. The parent (Claude) decides one of:
   - **(a)** retry with permissions granted,
   - **(b)** authorize a memory-only synthesis with everything labeled
     `[UNVERIFIED PLACEHOLDER]` and queued in `REFERENCE_RESEARCH_QUEUE.md`,
   - **(c)** ask the user for local source files to extract from.

## Output destination
Where do unverified items go after the research?

- `REFERENCE_RESEARCH_QUEUE.md` — every unverified item that should be
  re-researched when web access is available.
- `REFERENCES.md` — every verified source that becomes a curriculum
  reference.
