cmake_minimum_required(VERSION 3.13)
project(Project3)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES MainMenu.cpp Map.cpp Players.cpp NPCs.cpp Cars.cpp Leaderboard.cpp)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(MainMenu MainMenu.cpp Map.cpp Players.cpp NPCs.cpp Cars.cpp Leaderboard.cpp)

add_executable(TimeServer ${SOURCE_FILES})