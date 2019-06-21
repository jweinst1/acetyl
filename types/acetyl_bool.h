#ifndef ACETYL_TYPES_BOOL_H
#define ACETYL_TYPES_BOOL_H

#define acetyl_bool_INIT(obj, state) \
                        (obj)->type = ACETYL_OBJ_TYPE_BOOL; \
                        (obj)->value._bool = state

#ifdef __cplusplus
extern "C" {
#endif

void acetyl_bool_init(acetyl_obj_t* obj, int state);

#ifdef __cplusplus
}
#endif

#endif // ACETYL_TYPES_BOOL_H
