#ifndef SRC_ACETYL_RULE_H
#define SRC_ACETYL_RULE_H

#include "AcetylElement.h"
#include "AcetylCompound.h"

enum AcetylRulePartType
{
	ACETYL_RULEPART_TYPE_PASS,
	ACETYL_RULEPART_TYPE_FAIL,
	ACETYL_RULEPART_TYPE_MODIFY
};


enum AcetylRulePartOp
{
	ACETYL_RULEPART_OP_HAS_ID
};


struct AcetylRulePart
{
	AcetylRulePartType type;
	AcetylRulePartOp op;
	AcetylElement value;
};


class AcetylRule : public std::vector<AcetylRulePart>
{
public:
	void addPart(AcetylRulePartType type, AcetylRulePartOp op, const char* id);
	void addPart(AcetylRulePartType type, AcetylRulePartOp op, const char* id, bool boolean);
	void addPart(AcetylRulePartType type, AcetylRulePartOp op, const char* id, double number);
	void addPart(AcetylRulePartType type, AcetylRulePartOp op, const char* id, AcetylElement* joined);
};

#endif
