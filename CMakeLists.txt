cmake_minimum_required(VERSION 3.9)

project(creditCardValidator VERSION 1.0.0 DESCRIPTION "mylib description")

include(GNUInstallDirs)

SET(NAME "creditCardValidator")
set(CMAKE_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/install)

SET(SRC
    src/CreditCardValidator.cpp
    )

SET(HEADER
    include/CreditCardValidator.hpp
    )

add_library(${NAME} SHARED ${SRC})

set_target_properties(${NAME} PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
    PUBLIC_HEADER ${HEADER})

target_include_directories(${NAME} PUBLIC include/)

install(TARGETS ${NAME}
    LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_INCLUDEDIR})

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)

add_executable(test_creditCardValidator tests/CreditCardValidatorTest.cpp)
target_link_libraries(test_creditCardValidator PRIVATE gtest_main ${NAME})
    
include(CTest)
include(GoogleTest)
gtest_discover_tests(test_creditCardValidator)
