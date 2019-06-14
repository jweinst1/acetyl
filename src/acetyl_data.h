#ifndef ACETYL_DATA_H
#define ACETYL_DATA_H

#include <stdlib.h>

/**
 * @file This file contains functionality to deal with acetyl data types
 */

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

#endif // ACETYL_DATA_H
