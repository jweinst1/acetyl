#include "element.h"
#include "test-tools.h"

static void test_acetyl_elem_write_key(void)
{
	acetyl_elem_t elem;
	const char* text = "faring";
	acetyl_elem_write_key(&elem, text, 6);
	TEST_TOOLS_CHECK(strcmp(elem.key, text) == 0);
	TEST_TOOLS_CHECK(elem.key[7] == '\0');
}

int main(int argc, char const *argv[])
{
	test_acetyl_elem_write_key();
	return 0;
}
