cmake_minimum_required(VERSION 3.10)

# set the project name
project(Cargs)

install(TARGETS Cargs
        PUBLIC_HEADER
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/Cargs
)

# add the executable
add_executable(Cargs src/main.c ci/cli.c)
