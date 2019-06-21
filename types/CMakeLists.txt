# cmake for the types lib
# This lib contains the fundamental and primitive type objects
# used in acetyl

set(ACETYL_TYPES_DIR ${PROJECT_SOURCE_DIR}/types)
set(ACETYL_TYPES_DIR ${ACETYL_TYPES_DIR} PARENT_SCOPE)
# This header is generated during build time
# to be composed of the headers in this dir. The
# idea here is for the entire type system to be used
# with one header.
set(ACETYL_TYPES_HEADER acetyl_types.h.in)

file(READ ${ACETYL_TYPES_DIR}/acetyl_base_types.h ACETYL_TYPES_BASE)

file(READ ${ACETYL_TYPES_DIR}/acetyl_bool.h ACETYL_TYPES_BOOL)

# This builds a single header to access all the types headers in one
configure_file(${ACETYL_TYPES_HEADER} acetyl_types.h @ONLY)

set(ACETYL_TYPES_LIB_SOURCES
     acetyl_bool.c
)
# This allows c files here to see acetyl_types.h, the 
# main header
include_directories(${CMAKE_CURRENT_BINARY_DIR})

add_library(acetyl_types STATIC "${ACETYL_TYPES_LIB_SOURCES}")
