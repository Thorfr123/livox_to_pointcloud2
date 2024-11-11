cmake_minimum_required(VERSION 3.0.2)
project(livox_to_pointcloud2)

# Default to C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Compiler warnings
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find catkin and required packages
find_package(catkin REQUIRED COMPONENTS
  roscpp
  sensor_msgs
  std_msgs
  livox_ros_driver
)

# Declare catkin package
catkin_package(
  INCLUDE_DIRS include
  CATKIN_DEPENDS 
    roscpp 
    sensor_msgs 
    std_msgs 
    livox_ros_driver
)

# Include directories
include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)
link_directories(
	include
)

# Declare executables and link libraries
add_executable(livox_to_pointcloud2_node 
               src/livox_to_pointcloud2_node.cpp 
               src/livox_to_pointcloud2.cpp)
target_link_libraries(livox_to_pointcloud2_node
  ${catkin_LIBRARIES}
)

# Install rules
install(TARGETS livox_to_pointcloud2_node
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

install(DIRECTORY launch
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)