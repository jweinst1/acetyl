# cmake for src/tests

include_directories(${ACETYL_SOURCE_DIR})

add_executable(test_element test_element.c)
target_link_libraries(test_element PUBLIC acetyl_core)
add_test(test_element test_element)
