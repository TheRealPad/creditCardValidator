cmake_minimum_required(VERSION 3.17)

cmake_policy(VERSION 3.17)

project(CREEDIT_CARD_VALIDATOR_EXAMPLE VERSION 1.0
        DESCRIPTION "I love C++"
        LANGUAGES CXX)

SET(NAME "creditCardValidatorExample")

set(CMAKE_CXX_STANDARD 17)

set(SRC
        main.cpp
    )

add_executable(${NAME} ${SRC})

set(creditCardValidator_DIR "../build/")

find_package(creditCardValidator REQUIRED)

target_link_libraries(${NAME} PRIVATE creditCardValidator)

set_target_properties(${NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})

add_compile_options(-fPIC)