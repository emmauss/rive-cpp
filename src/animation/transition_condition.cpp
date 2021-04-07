#include "animation/transition_bool_condition.hpp"
#include "animation/state_transition.hpp"
#include "importers/state_transition_importer.hpp"

using namespace rive;

StatusCode TransitionCondition::onAddedDirty(CoreContext* context)
{
	return StatusCode::Ok;
}

StatusCode TransitionCondition::onAddedClean(CoreContext* context)
{
	return StatusCode::Ok;
}

StatusCode TransitionCondition::import(ImportStack& importStack)
{
	auto transitionImporter =
	    importStack.latest<StateTransitionImporter>(StateTransition::typeKey);
	if (transitionImporter == nullptr)
	{
		return StatusCode::MissingObject;
	}
	transitionImporter->addCondition(this);
	return Super::import(importStack);
}