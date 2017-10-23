cmake_minimum_required(VERSION 3.0)
project(Pierogi2D)

set(SFML_ROOT "SFML-2.4.2")

set(CMAKE_MODULE_PATH 
    "${CMAKE_SOURCE_DIR}/cmake_modules" 
    ${CMAKE_MODULE_PATH}
    )

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY
    ${CMAKE_BINARY_DIR}/bin
    )

find_package(SFML 2 REQUIRED 
    main 
    network 
    audio 
    graphics 
    window 
    system
    )

set(
    COMMON_LIBRARIES
    ${SFML_LIBRARIES}
    )

add_subdirectory(src)


