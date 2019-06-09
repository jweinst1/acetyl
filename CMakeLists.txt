# Main cmake file for acetyl

cmake_minimum_required(VERSION 3.2)

project(acetyl)

# Sets the prefix for installations
# Change this if you want a different
# installation path
set(CMAKE_INSTALL_PREFIX /usr/local)

add_subdirectory(build)
message("Building with version: ${ACETYL_NAMED_VERSION}")
