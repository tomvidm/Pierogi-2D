include_directories(
    ${PROJECT_SOURCE_DIR}/src/
    )

add_subdirectory(engine)

set(SOURCES
    main.cpp
    )

set(LIBRARIES
    logger
    )

add_executable(main ${SOURCES})

target_link_libraries(
    main
    ${LIBRARIES}
    )

target_compile_definitions(
    main PUBLIC
    -std=c++11
    -Wall
    )