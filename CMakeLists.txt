cmake_minimum_required(VERSION 2.8)
project(googleapis)

set(CMAKE_CXX_FLAGS "-Wall -g -std=c++11")

set(GOOGLE_API_SRC ${CMAKE_CURRENT_SOURCE_DIR}/gens)

# Find source files
file(GLOB_RECURSE GOOGLE_API_SRC_ALL ${GOOGLE_API_SRC}/*.pb.cc)

# Include header files
include_directories(${GOOGLE_API_SRC})

# Create shared library
add_library(${PROJECT_NAME} SHARED ${GOOGLE_API_SRC_ALL})

# Install library
install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})

# Install library headers
file(GLOB_RECURSE GOOGLE_API_ALL_HEADERS ${GOOGLE_API_SRC}/*.h)
#install(FILES ${GOOGLE_API_ALL_HEADERS} DESTINATION include/${PROJECT_NAME})

# new stuff
set(BASE "${CMAKE_CURRENT_SOURCE_DIR}/gens")
foreach(ITEM ${GOOGLE_API_ALL_HEADERS})
  get_filename_component(ITEM_PATH ${ITEM} PATH)
  string(REPLACE ${BASE} "" ITEM_PATH ${ITEM_PATH})
  install(FILES ${ITEM} DESTINATION "include/${PROJECT_NAME}/${ITEM_PATH}")
endforeach()
