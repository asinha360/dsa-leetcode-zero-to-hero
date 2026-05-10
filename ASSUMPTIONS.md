# ASSUMPTIONS

Assumptions made during workspace initialization (2026-05-08) and any
session thereafter. Each assumption has a verification path — what would
falsify it. If falsified, update or move to `DECISIONS.md`.

---

## A-001 — User platform: macOS
**Assumed:** Same environment as the C++ curriculum (Darwin 25.4.0).
**Verify by:** any cross-platform issue (path separators, Homebrew vs.
apt). Falsified if the user's commands assume a different OS.

## A-002 — GitHub account exists
**Assumed:** The user already has a GitHub account, used for the C++
curriculum portfolio. The DSA repo will live under the same account.
**Verify by:** the first `/sync` push. If push fails on auth, ask.

## A-003 — Git is installed and configured
**Assumed:** Homebrew git ≥ 2.45.2 (per C++ curriculum setup), with
`user.name` and `user.email` already set globally.
**Verify by:** `git --version` and `git config --global user.email` —
both should return values without prompting.

## A-004 — Time budget: 3–5 hrs/week is the *ceiling*, not the floor
**Assumed:** 5 hrs/week is sustainable; 3 hrs is the realistic floor;
2 hrs happens occasionally without derailing.
**Compression rule:** if a week has only 2 hrs, preserve **Day 2**
(the longest solo-attempt block) above all others. Days 3 and 5 can
compress to 15 minutes each. Day 1 can defer if and only if the
pattern has been seen before.

## A-005 — Zero LeetCode history
**Assumed:** User has not solved any LeetCode problems prior to W1.
**Verify by:** ask at the start of W1 Day 1: "have you done any of
these before?" If yes, adjust starting difficulty for that week
upward and note it in `notes/w1_d1.md`.

## A-006 — User has a LeetCode account
**Assumed:** Free tier is sufficient through W12. Premium becomes useful
at W13+ for company-tagged problems and timing.
**Verify by:** at W12 retrospective, ask if the user wants to upgrade.

## A-007 — Mathematical fluency through undergrad calculus + probability
**Assumed:** User can reason about integrals, derivatives, expected value,
variance, and basic combinatorics without scaffolding. Calculus and
probability analogies are safe. **Linear algebra fluency is not assumed**
— eigenvector / matrix-power framings need brief setup.
**Verify by:** if a calculus analogy lands without follow-up, the
assumption holds. If it consistently doesn't, swap analogy domain.

## A-009 — Zero DSA / algorithms knowledge at session start
**Assumed:** User has no prior exposure to data structures or algorithms.
Arrays, pointers, stacks, trees, graphs — all must be built from first
principles. No assumed vocabulary. Every pattern intro begins with: what
is the underlying data structure, why does it exist, and only then how
is it used.
**Verify by:** if the user demonstrates prior familiarity with a concept
(names it correctly without scaffolding), note it in the session's
`notes/wX_d1.md` and skip the first-principles intro for that concept.
**Added:** 2026-05-10 (W1 Day 1, stated by user).

## A-008 — User cannot judge between QD / QR / SWE tracks yet
**Assumed:** Track choice resolves around W12 (after Graphs II), based on
which patterns clicked and which didn't. Until then, curriculum stays
track-agnostic.
**Verify by:** at W12 retrospective, ask. If user has converged sooner,
adapt W17–W20 polish accordingly.
