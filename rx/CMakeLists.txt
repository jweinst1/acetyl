# Main cmake for rx dir
# This directory contains the reactive functionality in 
# acetyl.

set(ACETYL_SOURCE_DIR ${PROJECT_SOURCE_DIR}/rx)
set(ACETYL_SOURCE_DIR ${ACETYL_SOURCE_DIR} PARENT_SCOPE)


set(ACETYL_CORE_SOURCES 
   element.c
   compound.c
)

add_library(acetyl_core STATIC ${ACETYL_CORE_SOURCES})

add_subdirectory(tests)
