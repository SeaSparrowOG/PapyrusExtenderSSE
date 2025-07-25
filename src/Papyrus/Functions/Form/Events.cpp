#include "Papyrus/Functions/Form/Events.h"

#include "Serialization/EventHolder.h"

namespace Papyrus::Form::Events
{
	void RegisterForActorFallLongDistance(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->actorFallLongDistance;
		regs.Register(a_form);
	}

	void RegisterForActorKilled(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->actorKill;
		regs.Register(a_form);
	}

	void RegisterForActorReanimateStart(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->actorReanimateStart;
		regs.Register(a_form);
	}

	void RegisterForActorReanimateStop(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->actorReanimateStop;
		regs.Register(a_form);
	}

	void RegisterForActorResurrected(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->actorResurrect;
		regs.Register(a_form);
	}

	void RegisterForBookRead(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->booksRead;
		regs.Register(a_form);
	}

	void RegisterForCellFullyLoaded(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::ScriptEventHolder::GetSingleton()->cellFullyLoaded;
		regs.Register(a_form);
	}

	void RegisterForCriticalHit(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->criticalHit;
		regs.Register(a_form);
	}

	void RegisterForDisarmed(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->disarmed;
		regs.Register(a_form);
	}

	void RegisterForDragonSoulGained(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->dragonSoulsGained;
		regs.Register(a_form);
	}

	void RegisterForOnPlayerFastTravelEnd(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}
#ifdef SKYRIMVR
		auto& regs = Event::GameEventHolder::GetSingleton()->fastTravelEnd;
		regs.Register(a_form);
#else  // dummy function to avoid papyrus error Unbound native function
#endif
	}

	void RegisterForFastTravelConfirmed(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->fastTravelConfirmed;
		regs.Register(a_form);
	}

	void RegisterForFastTravelPrompt(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->fastTravelPrompt;
		regs.Register(a_form);
	}

	void RegisterForFurnitureEvent(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& furnitureEnter = Event::ScriptEventHolder::GetSingleton()->furnitureEnter;
		furnitureEnter.Register(a_form);

		auto& furnitureExit = Event::ScriptEventHolder::GetSingleton()->furnitureExit;
		furnitureExit.Register(a_form);
	}

	void RegisterForHitEventEx(STATIC_ARGS, RE::TESForm* a_form, RE::TESForm* a_aggressorFilter, RE::TESForm* a_sourceFilter, RE::TESForm* a_projectileFilter, std::int32_t a_powerFilter, std::int32_t a_sneakFilter, std::int32_t a_bashFilter, std::int32_t a_blockFilter, bool a_match)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->onHit;
		regs.Register(a_form, { a_aggressorFilter, a_sourceFilter, a_projectileFilter, a_powerFilter, a_sneakFilter, a_bashFilter, a_blockFilter }, a_match);
	}

	void RegisterForItemCrafted(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->itemCrafted;
		regs.Register(a_form);
	}

	void RegisterForItemHarvested(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->itemHarvested;
		regs.Register(a_form);
	}

	void RegisterForLevelIncrease(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->levelIncrease;
		regs.Register(a_form);
	}

	void RegisterForLocationDiscovery(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->locationDiscovery;
		regs.Register(a_form);
	}

	void RegisterForMagicEffectApplyEx(STATIC_ARGS, RE::TESForm* a_form, RE::TESForm* a_effectFilter, bool a_match)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->magicApply;
		regs.Register(a_form, a_effectFilter, a_match);
	}

	void RegisterForMagicHit(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->magicHit;
		regs.Register(a_form);
	}

	void RegisterForObjectGrab(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& grab = Event::ScriptEventHolder::GetSingleton()->objectGrab;
		grab.Register(a_form);

		auto& release = Event::ScriptEventHolder::GetSingleton()->objectRelease;
		release.Register(a_form);
	}

	void RegisterForObjectLoaded(STATIC_ARGS, const RE::TESForm* a_form, std::uint32_t a_formType)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		const auto formType = static_cast<RE::FormType>(a_formType);

		auto& load = Event::ScriptEventHolder::GetSingleton()->objectLoaded;
		load.Register(a_form, formType);

		auto& unload = Event::ScriptEventHolder::GetSingleton()->objectUnloaded;
		unload.Register(a_form, formType);
	}

	void RegisterForObjectPoisoned(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->objectPoisoned;
		regs.Register(a_form);
	}

	void RegisterForProjectileHit(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->projectileHit;
		regs.Register(a_form);
	}

	void RegisterForQuest(STATIC_ARGS, const RE::TESForm* a_form, RE::TESQuest* a_quest)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}
		if (!a_quest) {
			a_vm->TraceStack("Quest is None", a_stackID);
			return;
		}

		auto& start = Event::ScriptEventHolder::GetSingleton()->questStart;
		start.Register(a_form, a_quest->GetFormID());

		auto& stop = Event::ScriptEventHolder::GetSingleton()->questStop;
		stop.Register(a_form, a_quest->GetFormID());
	}

	void RegisterForQuestStage(STATIC_ARGS, const RE::TESForm* a_form, const RE::TESQuest* a_quest)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}
		if (!a_quest) {
			a_vm->TraceStack("Quest is None", a_stackID);
			return;
		}

		auto& regs = Event::ScriptEventHolder::GetSingleton()->questStage;
		regs.Register(a_form, a_quest->GetFormID());
	}

	void RegisterForShoutAttack(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->shoutAttack;
		regs.Register(a_form);
	}

	void RegisterForSkillIncrease(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->skillIncrease;
		regs.Register(a_form);
	}

	void RegisterForSoulTrapped(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->soulsTrapped;
		regs.Register(a_form);
	}

	void RegisterForSpellLearned(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->spellsLearned;
		regs.Register(a_form);
	}

	void RegisterForWeatherChange(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->weatherChange;
		regs.Register(a_form);
	}

	void RegisterForWeaponHit(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->weaponHit;
		regs.Register(a_form);
	}

	void UnregisterForActorFallLongDistance(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->actorFallLongDistance;
		regs.Unregister(a_form);
	}

	void UnregisterForActorKilled(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->actorKill;
		regs.Unregister(a_form);
	}

	void UnregisterForActorReanimateStart(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->actorReanimateStart;
		regs.Unregister(a_form);
	}

	void UnregisterForActorReanimateStop(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->actorReanimateStop;
		regs.Unregister(a_form);
	}

	void UnregisterForActorResurrected(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->actorResurrect;
		regs.Unregister(a_form);
	}

	void UnregisterForBookRead(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->booksRead;
		regs.Unregister(a_form);
	}

	void UnregisterForCellFullyLoaded(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::ScriptEventHolder::GetSingleton()->cellFullyLoaded;
		regs.Unregister(a_form);
	}

	void UnregisterForCriticalHit(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->criticalHit;
		regs.Unregister(a_form);
	}

	void UnregisterForDisarmed(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->disarmed;
		regs.Unregister(a_form);
	}

	void UnregisterForDragonSoulGained(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->dragonSoulsGained;
		regs.Unregister(a_form);
	}

	void UnregisterForOnPlayerFastTravelEnd(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}
#ifdef SKYRIMVR
		auto& regs = Event::GameEventHolder::GetSingleton()->fastTravelEnd;
		regs.Unregister(a_form);
#else  // dummy function to avoid papyrus error Unbound native function
#endif
	}

	void UnregisterForFastTravelConfirmed(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->fastTravelConfirmed;
		regs.Unregister(a_form);
	}

	void UnregisterForFastTravelPrompt(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->fastTravelPrompt;
		regs.Unregister(a_form);
	}

	void UnregisterForFurnitureEvent(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& furnitureEnter = Event::ScriptEventHolder::GetSingleton()->furnitureEnter;
		furnitureEnter.Unregister(a_form);

		auto& furnitureExit = Event::ScriptEventHolder::GetSingleton()->furnitureExit;
		furnitureExit.Unregister(a_form);
	}

	void UnregisterForHitEventEx(STATIC_ARGS, RE::TESForm* a_form, RE::TESForm* a_aggressorFilter, RE::TESForm* a_sourceFilter, RE::TESForm* a_projectileFilter, std::int32_t a_powerFilter, std::int32_t a_sneakFilter, std::int32_t a_bashFilter, std::int32_t a_blockFilter, bool a_match)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->onHit;
		regs.Unregister(a_form, { a_aggressorFilter, a_sourceFilter, a_projectileFilter, a_powerFilter, a_sneakFilter, a_bashFilter, a_blockFilter }, a_match);
	}

	void UnregisterForAllHitEventsEx(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->onHit;
		regs.UnregisterAll(a_form);
	}

	void UnregisterForItemCrafted(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->itemCrafted;
		regs.Unregister(a_form);
	}

	void UnregisterForItemHarvested(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->itemHarvested;
		regs.Unregister(a_form);
	}

	void UnregisterForLevelIncrease(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->levelIncrease;
		regs.Unregister(a_form);
	}

	void UnregisterForLocationDiscovery(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->locationDiscovery;
		regs.Unregister(a_form);
	}

	void UnregisterForMagicEffectApplyEx(STATIC_ARGS, RE::TESForm* a_form, RE::TESForm* a_effectFilter, bool a_match)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->magicApply;
		regs.Unregister(a_form, a_effectFilter, a_match);
	}

	void UnregisterForAllMagicEffectApplyEx(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->magicApply;
		regs.UnregisterAll(a_form);
	}

	void UnregisterForMagicHit(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->magicHit;
		regs.Unregister(a_form);
	}

	void UnregisterForObjectGrab(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& grab = Event::ScriptEventHolder::GetSingleton()->objectGrab;
		grab.Unregister(a_form);

		auto& release = Event::ScriptEventHolder::GetSingleton()->objectRelease;
		release.Unregister(a_form);
	}

	void UnregisterForObjectLoaded(STATIC_ARGS, const RE::TESForm* a_form, std::uint32_t a_formType)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto formType = static_cast<RE::FormType>(a_formType);

		auto& load = Event::ScriptEventHolder::GetSingleton()->objectLoaded;
		load.Unregister(a_form, formType);

		auto& unload = Event::ScriptEventHolder::GetSingleton()->objectUnloaded;
		unload.Unregister(a_form, formType);
	}

	void UnregisterForAllObjectsLoaded(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& load = Event::ScriptEventHolder::GetSingleton()->objectLoaded;
		load.UnregisterAll(a_form);

		auto& unload = Event::ScriptEventHolder::GetSingleton()->objectUnloaded;
		unload.UnregisterAll(a_form);
	}

	void UnregisterForObjectPoisoned(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->objectPoisoned;
		regs.Unregister(a_form);
	}

	void UnregisterForProjectileHit(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->projectileHit;
		regs.Unregister(a_form);
	}

	void UnregisterForQuest(STATIC_ARGS, const RE::TESForm* a_form, const RE::TESQuest* a_quest)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}
		if (!a_quest) {
			a_vm->TraceStack("Quest is None", a_stackID);
			return;
		}

		auto& start = Event::ScriptEventHolder::GetSingleton()->questStart;
		start.Unregister(a_form, a_quest->GetFormID());

		auto& stop = Event::ScriptEventHolder::GetSingleton()->questStop;
		stop.Unregister(a_form, a_quest->GetFormID());
	}

	void UnregisterForAllQuests(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& start = Event::ScriptEventHolder::GetSingleton()->questStart;
		start.UnregisterAll(a_form);

		auto& stop = Event::ScriptEventHolder::GetSingleton()->questStop;
		stop.UnregisterAll(a_form);
	}

	void UnregisterForQuestStage(STATIC_ARGS, const RE::TESForm* a_form, const RE::TESQuest* a_quest)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}
		if (!a_quest) {
			a_vm->TraceStack("Quest is None", a_stackID);
			return;
		}

		auto& regs = Event::ScriptEventHolder::GetSingleton()->questStage;
		regs.Unregister(a_form, a_quest->GetFormID());
	}

	void UnregisterForAllQuestStages(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::ScriptEventHolder::GetSingleton()->questStage;
		regs.UnregisterAll(a_form);
	}

	void UnregisterForShoutAttack(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->shoutAttack;
		regs.Unregister(a_form);
	}

	void UnregisterForSkillIncrease(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->skillIncrease;
		regs.Unregister(a_form);
	}

	void UnregisterForSoulTrapped(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->soulsTrapped;
		regs.Unregister(a_form);
	}

	void UnregisterForSpellLearned(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::StoryEventHolder::GetSingleton()->spellsLearned;
		regs.Unregister(a_form);
	}

	void UnregisterForWeatherChange(STATIC_ARGS, const RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->weatherChange;
		regs.Unregister(a_form);
	}

	void UnregisterForWeaponHit(STATIC_ARGS, RE::TESForm* a_form)
	{
		if (!a_form) {
			a_vm->TraceStack("Form is None", a_stackID);
			return;
		}

		auto& regs = Event::GameEventHolder::GetSingleton()->weaponHit;
		regs.Unregister(a_form);
	}

	void Bind(VM& a_vm)
	{
		auto constexpr obj = "PO3_Events_Form"sv;

		BIND_EVENT(RegisterForActorFallLongDistance, true);
		BIND_EVENT(RegisterForActorKilled, true);
		BIND_EVENT(RegisterForActorReanimateStart, true);
		BIND_EVENT(RegisterForActorReanimateStop, true);
		BIND_EVENT(RegisterForActorResurrected, true);
		BIND_EVENT(RegisterForBookRead, true);
		BIND_EVENT(RegisterForCellFullyLoaded, true);
		BIND_EVENT(RegisterForCriticalHit, true);
		BIND_EVENT(RegisterForDisarmed, true);
		BIND_EVENT(RegisterForDragonSoulGained, true);
		BIND_EVENT(RegisterForOnPlayerFastTravelEnd, true);
		BIND_EVENT(RegisterForFastTravelConfirmed, true);
		BIND_EVENT(RegisterForFastTravelPrompt, true);
		BIND_EVENT(RegisterForFurnitureEvent, true);
		BIND_EVENT(RegisterForHitEventEx, true);
		BIND_EVENT(RegisterForItemCrafted, true);
		BIND_EVENT(RegisterForItemHarvested, true);
		BIND_EVENT(RegisterForLevelIncrease, true);
		BIND_EVENT(RegisterForLocationDiscovery, true);
		BIND_EVENT(RegisterForMagicEffectApplyEx, true);
		BIND_EVENT(RegisterForMagicHit, true);
		BIND_EVENT(RegisterForObjectGrab, true);
		BIND_EVENT(RegisterForObjectLoaded, true);
		BIND_EVENT(RegisterForObjectPoisoned, true);
		BIND_EVENT(RegisterForQuest, true);
		BIND_EVENT(RegisterForProjectileHit, true);
		BIND_EVENT(RegisterForQuestStage, true);
		BIND_EVENT(RegisterForShoutAttack, true);
		BIND_EVENT(RegisterForSkillIncrease, true);
		BIND_EVENT(RegisterForSoulTrapped, true);
		BIND_EVENT(RegisterForSpellLearned, true);
		BIND_EVENT(RegisterForWeatherChange, true);
		BIND_EVENT(RegisterForWeaponHit, true);

		BIND_EVENT(UnregisterForActorFallLongDistance, true);
		BIND_EVENT(UnregisterForActorKilled, true);
		BIND_EVENT(UnregisterForActorReanimateStart, true);
		BIND_EVENT(UnregisterForActorReanimateStop, true);
		BIND_EVENT(UnregisterForActorResurrected, true);
		BIND_EVENT(UnregisterForBookRead, true);
		BIND_EVENT(UnregisterForCellFullyLoaded, true);
		BIND_EVENT(UnregisterForCriticalHit, true);
		BIND_EVENT(UnregisterForDisarmed, true);
		BIND_EVENT(UnregisterForDragonSoulGained, true);
		BIND_EVENT(UnregisterForOnPlayerFastTravelEnd, true);
		BIND_EVENT(UnregisterForFastTravelConfirmed, true);
		BIND_EVENT(UnregisterForFastTravelPrompt, true);
		BIND_EVENT(UnregisterForFurnitureEvent, true);
		BIND_EVENT(UnregisterForHitEventEx, true);
		BIND_EVENT(UnregisterForAllHitEventsEx, true);
		BIND_EVENT(UnregisterForItemCrafted, true);
		BIND_EVENT(UnregisterForItemHarvested, true);
		BIND_EVENT(UnregisterForLevelIncrease, true);
		BIND_EVENT(UnregisterForLocationDiscovery, true);
		BIND_EVENT(UnregisterForMagicEffectApplyEx, true);
		BIND_EVENT(UnregisterForAllMagicEffectApplyEx, true);
		BIND_EVENT(UnregisterForMagicHit, true);
		BIND_EVENT(UnregisterForObjectGrab, true);
		BIND_EVENT(UnregisterForObjectLoaded, true);
		BIND_EVENT(UnregisterForAllObjectsLoaded, true);
		BIND_EVENT(UnregisterForObjectPoisoned, true);
		BIND_EVENT(UnregisterForProjectileHit, true);
		BIND_EVENT(UnregisterForQuest, true);
		BIND_EVENT(UnregisterForAllQuests, true);
		BIND_EVENT(UnregisterForQuestStage, true);
		BIND_EVENT(UnregisterForAllQuestStages, true);
		BIND_EVENT(UnregisterForShoutAttack, true);
		BIND_EVENT(UnregisterForSkillIncrease, true);
		BIND_EVENT(UnregisterForSoulTrapped, true);
		BIND_EVENT(UnregisterForSpellLearned, true);
		BIND_EVENT(UnregisterForWeatherChange, true);
		BIND_EVENT(UnregisterForWeaponHit, true);

		logger::info("Registered form events"sv);
	}
}
