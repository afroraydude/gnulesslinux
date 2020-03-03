project(uspm)

cmake_minimum_required(VERSION 3.10)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include) # if you are building with custom includes
include_directories(/usr/local/include) # if you are building with system includes
include_directories(/usr/include) # if you are building with system includes
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR}/src source)

add_executable(wombatinstall wombatinstall/internalinstall.c)
add_executable(adduser wombatextra/adduser.c)
add_executable(updatekernel wombatextra/kernelupdate.c)
add_executable(createdisk wombatextra/createdisk.c)

install (TARGETS wombatinstall adduser updatekernel createdisk
    RUNTIME DESTINATION /usr/bin)