cmake_minimum_required(VERSION 3.0)
project(robo_rally)
find_package(SFML 2 REQUIRED audio graphics network system window)
include_directories(${SFML_INCLUDE_DIR})

include_directories(${PROJECT_SOURCE_DIR})
file(GLOB SOURCE_FILES ${PROJECT_SOURCE_DIR} *.cpp *.h)
# set(SOURCE_FILES main.cpp App.h App.cpp Game.h Game.cpp Network.h Network.cpp Module.h)
add_executable(game ${SOURCE_FILES})
target_link_libraries(game ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})

# install(TARGETS client DESTINATION bin)

# include(InstallRequiredSystemLibraries)
# include(CPack)
