#ifndef ACETYL_COMPOUND_H
#define ACETYL_COMPOUND_H

#include "element.h"

typedef struct __acetyl_compound {
	acetyl_elem_t* elements;
	size_t elem_len;
	size_t elem_cap;
} acetyl_compound_t;

#define acetyl_COMPOUND_AT(comp, index) (comp->elements + index)

extern acetyl_compound_t* acetyl_compound_new_empty(size_t cap);

extern void acetyl_compound_del(acetyl_compound_t* comp);

extern int acetyl_compound_has_key(acetyl_compound_t* comp, const char* key, unsigned len);

#endif // ACETYL_COMPOUND_H
