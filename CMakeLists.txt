cmake_minimum_required(VERSION 3.10)
project(FileBackupApp)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Create the executable for the main application
add_executable(BackupApp ${SOURCES})

# Add Google Test as a subdirectory
add_subdirectory(googletest)

# Enable testing
enable_testing()

# Include Google Test headers
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Locate all test source files
file(GLOB_RECURSE TEST_SOURCES "tests/*.cpp")

# Create the executable for tests
add_executable(BackupApp_tests ${TEST_SOURCES})

# Link Google Test libraries to the test executable
target_link_libraries(BackupApp_tests gtest gtest_main)

# Add tests to CTest
add_test(NAME BackupAppTests COMMAND BackupApp_tests)
