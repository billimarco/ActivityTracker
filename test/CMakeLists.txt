cmake_minimum_required(VERSION 3.19)

add_subdirectory(./lib/googletest)
set(gtest_SOURCE_DIR, ./lib/googletest/)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTests.cpp dateTest.cpp timeTest.cpp activityTest.cpp registerTest.cpp registerCollectionTest.cpp)
add_executable(TestsActivityTracker ${TEST_SOURCE_FILES})
target_link_libraries(TestsActivityTracker gtest gtest_main ${wxWidgets_LIBRARIES} core)