cmake_minimum_required(VERSION 3.19)
project(ActivityTracker)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(test)

set(wxWidgets_ROOT_DIR </usr/local/include/wx>)
set(wxWidgets_CONFIGURATION mswu)
find_package(wxWidgets COMPONENTS core base REQUIRED)
include(${wxWidgets_USE_FILE})

set(SOURCE_FILES Activity.cpp Activity.h Register.cpp Register.h Date.cpp Date.h Time.cpp Time.h RegisterCollection.cpp RegisterCollection.h Version.h ViewFrame.cpp ViewFrame.h)
add_executable(ActivityTracker App.cpp App.h)
add_library(core ${SOURCE_FILES})
target_link_libraries(ActivityTracker ${wxWidgets_LIBRARIES} core)