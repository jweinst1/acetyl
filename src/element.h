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

#define acetyl_ELEM_IS_KEY(elem, e_key) (strncmp(elem->key, e_key, ACETYL_ELEMENT_KEY_SIZE) == 0)
/**
 * @brief Similar to the is_key macro but compares up to a smaller number of chars
 *        than the max key size.
 */
#define acetyl_ELEM_IS_KEY_N(elem, e_key, len) (strncmp(elem->key, e_key, len) == 0)
extern int acetyl_elem_is_key(acetyl_elem_t* elem, const char* key);
/**
 * @brief Checks if the type of an element is equal to \c e_type.
 */
#define ACETYL_ELEMENT_IS_TYPE(elem, e_type) ((elem)->type == e_type)
/**
 * @brief This function sets the value of an element.
 * @details This function will set the value type and value data of an element.
 *          if a type has no associated data, the \c data param should be \c NULL.
 */
//extern void acetyl_elem_set_value(acetyl_elem_t* elem, acetyl_elem_vtype_t type, void* data);

#endif // ACETYL_ELEMENT_H
