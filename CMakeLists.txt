cmake_minimum_required(VERSION 3.0)
project(RoboRally_Client)
find_package(SFML 2 REQUIRED audio graphics network system window)
include_directories(${SFML_INCLUDE_DIR})

set(${SOURCE_FILES} main.cpp)
add_executable(client main.cpp)
target_link_libraries(client ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})

install(TARGETS client DESTINATION bin)

include(InstallRequiredSystemLibraries)
include(CPack)
