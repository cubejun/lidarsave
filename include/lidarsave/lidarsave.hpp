#ifndef _LIDARSAVE_HPP_
#define _LIDARSAVE_HPP_
#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "opencv2/opencv.hpp"
#include <math.h>
#include <memory>
#include <chrono>
#define RAD2DEG(x) ((x)*180./M_PI)
using std::placeholders::_1;
class lidarsave : public rclcpp::Node
{
    private:
        rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr lidar_info_sub;
        void scanCb(const sensor_msgs::msg::LaserScan::SharedPtr scan) const;
        cv::VideoWriter writer1;
    public:
        lidarsave();
};
#endif //_PUB_HPP_