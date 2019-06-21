# cmake for the types lib
# This lib contains the fundamental and primitive type objects
# used in acetyl

set(ACETYL_TYPES_DIR ${PROJECT_SOURCE_DIR}/types)
set(ACETYL_TYPES_DIR ${ACETYL_TYPES_DIR} PARENT_SCOPE)

set(ACETYL_TYPES_HEADER acetyl_types.h.in)

file(READ ${ACETYL_TYPES_DIR}/acetyl_base_types.h ACETYL_TYPES_BASE)

file(READ ${ACETYL_TYPES_DIR}/acetyl_bool.h ACETYL_TYPES_BOOL)

# This builds a single header to access all the types headers in one
configure_file(${ACETYL_TYPES_HEADER} acetyl_types.h @ONLY)
