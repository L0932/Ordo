# Reference Scenario: The False Accusation

## Purpose

Provide a small, repeatable encounter for exploring how a character's
beliefs, passions, intentions, choices, and acquired dispositions interact.

## World facts

- A purse has gone missing from a shared room.
- An accuser publicly claims that the character's companion stole it.
- The companion did not steal the purse.
- The character was with the companion elsewhere during the alleged theft.
- The accuser is influential within the group.
- Challenging the accuser could cost the character social standing.

## Character knowledge and beliefs

- The character remembers being with the companion during the relevant time.
- The character therefore believes the accusation is false.
- The character does not know who took the purse.
- The character expects social pressure if they challenge the accuser.
- The character does not know how the group will actually respond.

## Available actions

| Action | Concrete behavior |
|---|---|
| Defend the companion | State that the companion was elsewhere with the character during the alleged theft. |
| Remain silent | Withhold the relevant information and let the accusation proceed. |
| Join the accusation | Claim to have witnessed the theft, despite knowing that claim is false. |

## Outcome boundaries

The host application determines how the accuser, companion, and group
respond. Anticipated consequences are distinct from actual consequences.

A successful defense does not by itself establish a virtuous intention.
Social punishment does not by itself establish that defending the companion
was wrong.

## Intentions in the reference encounter

The host supplies the character's intention for the chosen act.
An action identifier alone does not establish why the character acts.

For the initial demonstration, use these intentions:

| Action | Supplied intention |
|---|---|
| Defend the companion | Protect the innocent companion by reporting what the character knows. |
| Remain silent | Avoid personal social consequences by withholding relevant testimony. |
| Join the accusation | Gain the accuser's approval by knowingly giving false testimony. |

These pairings define this example. They are not universal assumptions
about defending someone, remaining silent, or agreeing with an accusation.

## Relevant circumstances

- The character has a clear opportunity to speak.
- The character can communicate the relevant information.
- The companion faces a credible risk of unjust punishment.
- Speaking carries a perceived risk of rejection or loss of standing.
- No immediate physical threat or coercion prevents the character from speaking.
- The character understands that their testimony could affect the accusation.

## Separate aspects of an act

Keep the following information distinct:

- Chosen behavior: what the character deliberately does or omits.
- Intention: the end the character seeks through that behavior.
- Circumstances: relevant conditions surrounding the choice.
- External outcome: what actually happens afterward.
- Dispositional effect: how the chosen act affects an acquired disposition.

A good intention does not automatically make the chosen behavior good.
An unfavorable outcome does not automatically make it bad.

The prototype records supplied information and applies explicit scenario
rules. It does not infer intentions from dialogue or provide a general
judgment of a person's culpability.

## Temporary responses

These responses arise during an encounter. They are distinct from enduring
dispositions and do not determine the character's choice.

| Response | Meaning in this scenario |
|---|---|
| Fear of rejection | Uneasiness about anticipated loss of social standing. |
| Desire for approval | Attraction toward acceptance by the accuser and group. |
| Concern for the companion | Motivation to protect the companion from unjust harm. |

These are gameplay categories, not a complete classification of Thomistic
passions. Concern for another can involve judgment and will as well as emotion.

Experiencing fear does not by itself constitute cowardice.
Experiencing concern does not by itself establish a virtuous choice.

## Acquired dispositions

The prototype uses three narrow tendencies:

| Disposition | Meaning in this scenario |
|---|---|
| Truthfulness | A settled tendency to communicate what one believes to be true and avoid deliberate falsehood. |
| Constancy | A tendency to persist in a recognized good despite anticipated rejection. |
| Approval seeking | A tendency to give social acceptance excessive priority when choosing. |

These tendencies approximate selected aspects of character. They do not
represent complete virtues, vices, or a person's overall moral worth.

A low value does not automatically establish the presence of an opposing vice.

## Relationship between dispositions and choice

Dispositions influence motivational responses and the relative difficulty
of available actions. They do not force a choice.

The host may submit any available action regardless of its motivational
ranking.

Repeated voluntary choices may gradually reinforce or weaken relevant
acquired dispositions under explicit, provisional habit formation rules.

## Acquired and infused virtues

This milestone models only acquired dispositions.

Its numerical updates do not represent infused virtues, charity, sanctifying
grace, or sacramental effects. These remain outside the prototype's scope.

## Reference character profiles

Both characters encounter the same accusation, possess the same information,
and anticipate the same social consequences. Their acquired dispositions differ.

The qualitative levels below are design inputs. Numerical ranges and tuning
will be defined during implementation.

| Disposition | Profile A | Profile B |
|---|---|---|
| Truthfulness | Strong | Weak |
| Constancy | Strong | Weak |
| Approval seeking | Weak | Strong |

### Profile A: Practiced truthful witness

This character has practiced telling the truth and maintaining a recognized
good under social pressure.

Expected evaluation:
- Anticipated rejection can still produce fear.
- Truthfulness supports reporting the alibi and resisting false testimony.
- Constancy helps sustain the motivation to defend the companion despite fear.
- Social approval has relatively little influence on the available actions.

The host can still choose silence or false testimony.

### Profile B: Approval-dependent witness

This character has frequently prioritized acceptance over truthful testimony
and has little practice resisting social pressure.

Expected evaluation:
- Anticipated rejection produces fear.
- Approval seeking gives greater motivational weight to pleasing the group.
- Remaining silent or joining the accusation receives stronger support from
  approval-related influences than it does for Profile A.
- The motivation to report the alibi encounters greater competing pressure.

The host can still choose to defend the companion.

## Comparison criteria

- Different dispositions produce different motivational influences.
- Constancy need not mean an absence of fear.
- Truthfulness does not automatically imply concern for the companion.
- Concern for the companion is held equal between these profiles to isolate
  the effects of the three modeled dispositions.
- Neither profile determines the chosen action.
- Neither profile represents a complete moral assessment of a person.

## Host responsibilities

The host application supplies:
- Encounter and character identifiers.
- Relevant world facts and the character's beliefs.
- Available actions and perceived stakes.
- The chosen action, intention, and relevant circumstances.
- External outcomes, when known.

Ordo evaluates structured inputs, resolves submitted choices, and returns
inspectable results and disposition changes.

The host controls player input, dialogue, world reactions, presentation,
and when each encounter occurs.

## Prototype simplifications

- Beliefs and intentions are supplied explicitly.
- The character's memory of the alibi is reliable in this reference case.
- The three available actions are a limited demonstration set.
- The host supplies choices; autonomous decision making is deferred.
- Dispositions use a simplified numerical representation.
- Habit updates are provisional design rules, not measurements of virtue.
- Repeated encounters are separate events with unique identifiers.
- Scripted comparisons hold relevant conditions constant.
- Grace, infused virtues, and comprehensive culpability judgments are
  outside this milestone.

## Unresolved questions

- How should uncertainty about testimony affect evaluation?
- How should mixed intentions be represented?
- When does silence constitute a morally significant omission?
- How should freedom, coercion, and deliberation affect habit formation?
- How should the strength and consistency of repeated acts affect change?
- How should practical judgment and concern for others develop?
- How should dispositions interact without collapsing into one moral score?

These questions remain explicit limitations. Later work may revise the
reference model rather than assume its initial rules apply universally.