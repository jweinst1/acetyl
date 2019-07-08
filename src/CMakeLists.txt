# cmake for src dir #

set(ACETYL_SRC_DIR ${PROJECT_SOURCE_DIR}/src)
set(ACETYL_SRC_DIR ${ACETYL_SRC_DIR} PARENT_SCOPE)

set(ACETYL_SRC_SOURCES 
    AcetylElement.cpp
)

add_library(acetylcore STATIC "${ACETYL_SRC_SOURCES}")
