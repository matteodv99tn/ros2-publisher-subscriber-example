cmake_minimum_required(VERSION 3.8)
project(cpp_publisher_subscriber)


find_package(ament_cmake REQUIRED)


set(ROS2_REQUIRED_COMPONENTS
    rclcpp
    std_msgs
)
foreach(COMPONENT ${ROS2_REQUIRED_COMPONENTS})
    find_package(${COMPONENT} REQUIRED)
endforeach()


add_executable(
    subscriber
    ${CMAKE_CURRENT_LIST_DIR}/src/subscriber.cpp
)
ament_target_dependencies(
    subscriber
    ${ROS2_REQUIRED_COMPONENTS}
)


install(
    TARGETS subscriber
    DESTINATION lib/${PROJECT_NAME}
)

ament_package()