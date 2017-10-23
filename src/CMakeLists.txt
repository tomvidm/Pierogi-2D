include_directories(
    ${PROJECT_SOURCE_DIR}/src/
    ${SFML_INCLUDE_DIR}
    )

add_subdirectory(engine)

set(SOURCES
    main.cpp
    engine/Application.cpp
    )

set(LIBRARIES
    logger
    )

add_executable(main ${SOURCES})

target_link_libraries(
    main
    ${LIBRARIES}
    ${COMMON_LIBRARIES}
    )

target_compile_definitions(
    main PUBLIC
    -std=c++11
    -Wall
    )