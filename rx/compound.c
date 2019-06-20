#include "compound.h"

extern acetyl_compound_t* acetyl_compound_new_empty(size_t cap)
{
	acetyl_compound_t* new_comp = malloc(sizeof(acetyl_compound_t));
	new_comp->elements = acetyl_elem_new(cap);
	new_comp->elem_cap = cap;
	new_comp->elem_len = 0;
	return new_comp;
}

extern void acetyl_compound_del(acetyl_compound_t* comp)
{
	free(comp->elements);
	free(comp);
}

extern int acetyl_compound_has_key(acetyl_compound_t* comp, const char* key, unsigned len)
{
	size_t i;
	if(len > ACETYL_ELEMENT_KEY_SIZE) // This should be handled by an error in the future
		return 0;
	for(i = 0; i < comp->elem_len; i++) {
		if(acetyl_ELEM_IS_KEY_N(acetyl_COMPOUND_AT(comp, i), key, len))
			return 1;
	}
	return 0;
}
