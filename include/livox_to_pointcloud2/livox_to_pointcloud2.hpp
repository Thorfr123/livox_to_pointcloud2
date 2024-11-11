#ifndef LIVOX_TO_POINTCLOUD2_HPP
#define LIVOX_TO_POINTCLOUD2_HPP

#include "ros/ros.h"
#include "sensor_msgs/PointCloud2.h"
#include "livox_ros_driver/CustomMsg.h"
#include "std_msgs/Header.h"
#include "sensor_msgs/PointField.h"

class LivoxToPointCloud2
{
public:
    LivoxToPointCloud2();

private:
    void callback(const livox_ros_driver::CustomMsg::ConstPtr& msg);
    ros::NodeHandle nh_;
    ros::Subscriber subscription_;
    ros::Publisher publisher_;
};

#endif  // LIVOX_TO_POINTCLOUD2_HPP