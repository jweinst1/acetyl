# Main cmake for src

set(ACETYL_SOURCE_DIR ${PROJECT_SOURCE_DIR}/src)
set(ACETYL_SOURCE_DIR ${ACETYL_SOURCE_DIR})

set(ACETYL_CORE_SOURCES 
   element.c
   compound.c
)

add_library(acetyl_core STATIC ${ACETYL_CORE_SOURCES})

add_subdirectory(tests)
