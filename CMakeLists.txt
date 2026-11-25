cmake_minimum_required(VERSION 3.16)
project(gmail-account-abuse CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(gmailaccountabuse
    src/main.cpp
    src/accounts.cpp
    src/limits.cpp
    src/rotate.cpp
    src/cli.cpp
    src/state.cpp
)

target_include_directories(gmailaccountabuse PRIVATE include)

if(WIN32)
    target_link_libraries(gmailaccountabuse PRIVATE userenv)
endif()
