cmake_minimum_required(VERSION 3.0.0)
project(factory_method VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 11)

include(CTest)
enable_testing()

add_library(creators
            creator.cpp
            creatorA.cpp
            creatorB.cpp)

add_library(products
            product.cpp
            product1.cpp
            product2.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

find_package(GTest REQUIRED)

add_executable(test_factory_method 
               test_factory_method.cpp)

# Tester includes
target_include_directories(
    test_factory_method
    PUBLIC ${GTEST_INCLUDE_DIRS}
)

# Tester libraries
target_link_libraries(
    test_factory_method
    creators
    products
    ${GTEST_LIBRARIES}
)

add_test(NAME test_factory_method
         COMMAND test_factory_method)
