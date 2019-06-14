#ifndef ACETYL_RULE_H
#define ACETYL_RULE_H

typedef enum __acetyl_action_type {
	ACETYL_ACTION_TYPE_DO,
	ACETYL_ACTION_TYPE_CHECK
} acetyl_action_type_t;

typedef enum __acetyl_action_op {
	ACETYL_ACTION_OP_PLUS
} acetyl_action_op_t;

typedef struct __acetyl_rule_action {
	acetyl_action_type_t type;
	acetyl_action_op_t op;
} acetyl_rule_act_t;

typedef struct __acetyl_rule {
	// actions union/enum
} acetyl_rule_t;

#endif // ACETYL_RULE_H
