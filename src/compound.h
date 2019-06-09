#ifndef ACETYL_COMPOUND_H
#define ACETYL_COMPOUND_H

#include <stdlib.h>
#include <string.h>

#define ACETYL_ELEMENT_KEY_SIZE 25

typedef struct __acetyl_element {
    char key[ACETYL_ELEMENT_KEY_SIZE];
} acetyl_elem_t;

#endif // ACETYL_COMPOUND_H
