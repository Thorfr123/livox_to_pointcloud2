#include "ros/ros.h"
#include "livox_to_pointcloud2/livox_to_pointcloud2.hpp"

int main(int argc, char* argv[])
{
    ros::init(argc, argv, "livox_to_pointcloud2");
    LivoxToPointCloud2 node;
    ros::spin();

    return 0;
}