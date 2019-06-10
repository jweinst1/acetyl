# Main cmake for src

set(ACETYL_SOURCE_DIR ${PROJECT_SOURCE_DIR}/src PARENT_SCOPE)

set(ACETYL_CORE_SOURCES 
   element.c
)

add_library(acetyl_core STATIC ${ACETYL_CORE_SOURCES})
