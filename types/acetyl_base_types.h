#ifndef ACETYL_TYPES_BASE_TYPES_H
#define ACETYL_TYPES_BASE_TYPES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef union __acetyl_obj_value {
	int _bool;
} acetyl_obj_value_t;

typedef enum __acetyl_obj_type {
	ACETYL_OBJ_TYPE_NONE,
	ACETYL_OBJ_TYPE_BOOL
} acetyl_obj_type_t;

typedef struct __acetyl_obj {
	acetyl_obj_type_t type;
	acetyl_obj_value_t value;
} acetyl_obj_t;

#ifdef __cplusplus
}
#endif

#endif // ACETYL_TYPES_BASE_TYPES_H
