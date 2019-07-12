#include "AcetylRule.h"
#include "cpp-futures.h"

void AcetylRule::addPart(AcetylRulePartType type, AcetylRulePartOp op, const char* id)
{
	AcetylRulePart part;
	part.type = type;
	part.op = op;
	part.value.setId(id);
	push_back(MOVE(part));
}

void AcetylRule::addPart(AcetylRulePartType type, AcetylRulePartOp op, const char* id, bool boolean)
{
	AcetylRulePart part;
	part.type = type;
	part.op = op;
	part.value.setId(id);
	part.value.toBoolean(boolean);
	push_back(MOVE(part));	
}
