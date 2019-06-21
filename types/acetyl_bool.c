#include "acetyl_types.h"

void acetyl_bool_init(acetyl_obj_t* obj, int state)
{
	obj->type = ACETYL_OBJ_TYPE_BOOL;
	obj->value._bool = state;
}
