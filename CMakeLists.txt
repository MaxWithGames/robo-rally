cmake_minimum_required(VERSION 3.0)
project(robo_rally)
find_package(SFML 2 REQUIRED audio graphics network system window)
include_directories(${SFML_INCLUDE_DIR})

set(${SOURCE_FILES} main.cpp)
add_executable(game main.cpp)
target_link_libraries(game ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})

# install(TARGETS client DESTINATION bin)

# include(InstallRequiredSystemLibraries)
# include(CPack)
