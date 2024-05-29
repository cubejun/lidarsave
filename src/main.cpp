#include "lidarsave/lidarsave.hpp"
int main(int argc, char **argv) {
  rclcpp::init(argc, argv);

  auto node = std::make_shared<lidarsave>();
  rclcpp::spin(node);
  rclcpp::shutdown();


  return 0;
}
