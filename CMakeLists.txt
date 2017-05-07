cmake_minimum_required(VERSION 2.8)
project(googleapis)

set(GOOGLE_API_SRC ./gens)

# Find source files
file(GLOB_RECURSE GOOGLE_API_SRC_ALL ${GOOGLE_API_SRC}/*.pb.cc)

# Include header files

${GOOGLE_API_SRC}
include_directories(${GOOGLE_API_SRC})

# Create shared library
add_library(${PROJECT_NAME} SHARED ${GOOGLE_API_SRC_ALL})

# Install library
install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})

# Install library headers
file(GLOB HEADERS include/*.h)
install(FILES ${HEADERS} DESTINATION include/${PROJECT_NAME})
