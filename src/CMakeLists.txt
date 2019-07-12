# cmake for src dir #

set(ACETYL_SRC_DIR ${PROJECT_SOURCE_DIR}/src)
set(ACETYL_SRC_DIR ${ACETYL_SRC_DIR} PARENT_SCOPE)

include_directories(${ACETYL_UTIL_DIR})

set(ACETYL_SRC_SOURCES 
    AcetylElement.cpp
    AcetylCompound.cpp
    AcetylRule.cpp
)

add_library(acetylcore STATIC "${ACETYL_SRC_SOURCES}")
