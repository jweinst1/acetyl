#ifndef SRC_ACETYL_RULE_H
#define SRC_ACETYL_RULE_H

#include <algorithm>

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
};

#endif
