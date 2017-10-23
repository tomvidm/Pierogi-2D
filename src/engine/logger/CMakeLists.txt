include_directories(
    ${PROJECT_SOURCE_DIR}/src
    )

set(LOGGER_SOURCES
    ValueField.cpp
    Logger.cpp
)

add_library(
    logger
    ${LOGGER_SOURCES}
    )