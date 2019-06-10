#include "element.h"

extern acetyl_elem_t* acetyl_elem_new(size_t amount)
{
	return calloc(0, sizeof(acetyl_elem_t) * amount);
}

extern void acetyl_elem_set_key(acetyl_elem_t* elem, const char* key)
{
	strncpy(elem->key, key, ACETYL_ELEMENT_KEY_SIZE);
}
