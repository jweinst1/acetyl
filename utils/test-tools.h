#ifndef ACETYL_UTIL_TEST_TOOLS_H
#define ACETYL_UTIL_TEST_TOOLS_H

#include <stdio.h>
#include <stdlib.h>

#define TEST_TOOLS_CHECK_EXIT_CODE 3

#define TEST_TOOLS_CHECK(cond) if(!(cond)) { \
	fprintf(stderr, "Test FAILED, for exp '%s', at line:%u, in file:%s\n", #cond, __LINE__, __FILE__); \
	exit(TEST_TOOLS_CHECK_EXIT_CODE); \
}


#endif // ACETYL_UTIL_TEST_TOOLS_H
