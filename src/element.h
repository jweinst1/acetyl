#ifndef ACETYL_ELEMENT_H
#define ACETYL_ELEMENT_H

#include <stdlib.h>
#include <string.h>

#define ACETYL_ELEMENT_KEY_SIZE 25

typedef union __acetyl_value {
   float _number;
} acetyl_elem_value_t;

typedef enum __acetyl_elem_type {
    ACETYL_ELEM_V_NONE
} acetyl_elem_vtype_t;

typedef struct __acetyl_element {
    char key[ACETYL_ELEMENT_KEY_SIZE + 1];
    acetyl_elem_value_t value;
    acetyl_elem_vtype_t type;
} acetyl_elem_t;

extern acetyl_elem_t* acetyl_elem_new(size_t amount);

#define acetyl_ELEM_SET_KEY(elem, e_key) (strncpy(elem->key, e_key, ACETYL_ELEMENT_KEY_SIZE))
extern void acetyl_elem_set_key(acetyl_elem_t* elem, const char* key);
/**
 * @brief Writes a string to the key of an elem with a given len.
 * @warning Calling this function with a size higher than \c ACETYL_ELEMENT_KEY_SIZE will result
 *          in an assert error.
 */
extern void acetyl_elem_write_key(acetyl_elem_t* elem, const char* key, unsigned len);

#define acetyl_ELEM_IS_KEY(elem, e_key) (strncmp(elem->key, e_key, ACETYL_ELEMENT_KEY_SIZE))
extern int acetyl_elem_is_key(acetyl_elem_t* elem, const char* key);

#endif // ACETYL_ELEMENT_H
