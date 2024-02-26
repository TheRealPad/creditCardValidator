cmake_minimum_required(VERSION 3.17)

cmake_policy(VERSION 3.17)

project(CREDIT_CARD_VALIDATOR_EXAMPLE VERSION 1.0
        DESCRIPTION "I love C++"
        LANGUAGES CXX)

SET(NAME "creditCardValidatorExample")
# Absolute path to the directory containing the lib
SET(LIB_PATH "/Users/pad/delivery/creditCardValidator/build/install/lib")

set(CMAKE_CXX_STANDARD 17)

set(SRC
        main.cpp
    )

add_executable(${NAME} ${SRC})

target_link_libraries(${NAME} PRIVATE ${LIB_PATH}/libcreditCardValidator.dylib)

include_directories(../include)

set_target_properties(${NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})

add_compile_options(-fPIC)
