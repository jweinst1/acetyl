#ifndef ACETYL_TYPES_BASE_TYPES_H
#define ACETYL_TYPES_BASE_TYPES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef union __acetyl_data_value {
	float _number;
} acetyl_data_value_t;

typedef enum __acetyl_data_type {
	ACETYL_DATA_TYPE_NONE
} acetyl_data_type_t;

typedef struct __acetyl_data {
	acetyl_data_type_t type;
	acetyl_data_value_t value;
} acetyl_data_t;

#ifdef __cplusplus
}
#endif

#endif // ACETYL_TYPES_BASE_TYPES_H
