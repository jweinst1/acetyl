#include "compound.h"
#include "test-tools.h"

static void test_acetyl_compound_new_empty()
{
	acetyl_compound_t* comp;
	comp = acetyl_compound_new_empty(20);
	TEST_TOOLS_CHECK(comp->elem_cap == 20);
	TEST_TOOLS_CHECK(comp->elements != NULL);
}

int main(int argc, char const *argv[])
{
	test_acetyl_compound_new_empty();
	return 0;
}
