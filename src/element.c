#include "element.h"
#include <assert.h>

extern acetyl_elem_t* acetyl_elem_new(size_t amount)
{
	return calloc(0, sizeof(acetyl_elem_t) * amount);
}

extern void acetyl_elem_set_key(acetyl_elem_t* elem, const char* key)
{
	strncpy(elem->key, key, ACETYL_ELEMENT_KEY_SIZE);
}

extern void acetyl_elem_write_key(acetyl_elem_t* elem, const char* key, unsigned len)
{
	assert(len <= ACETYL_ELEMENT_KEY_SIZE);
	strncpy(elem->key, key, len);
	while(len <= ACETYL_ELEMENT_KEY_SIZE) {
		elem->key[len++] = '\0';
	}
}

extern int acetyl_elem_is_key(acetyl_elem_t* elem, const char* key)
{
	return strncmp(elem->key, key, ACETYL_ELEMENT_KEY_SIZE) == 0;
}


/*extern void acetyl_set_value(acetyl_elem_t* elem, acetyl_elem_vtype_t type, void* data)
{
	switch(type) {
		case ACETYL_ELEM_V_NONE:
		     elem->type = type;
		     return;
	}
}*/
