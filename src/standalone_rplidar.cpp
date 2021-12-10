// Copyright 2019 Hunter L. allen
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <memory>
#include <rplidar_node.hpp>
#include <rclcpp/rclcpp.hpp>

//Global
std::shared_ptr<rplidar_ros::rplidar_node> node;

void kill_process(int sig)
{
  printf("[RPLIDAR]: Cheking rplidar configuration.\n");
  if (node->m_state)
  {
    printf("[RPLIDAR]: Bad configuration. Killing process.\n");
    exit(1);
  }
}

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  signal(SIGALRM,(void (*)(int))kill_process);

  alarm(15);
  node = std::make_shared<rplidar_ros::rplidar_node>(rclcpp::NodeOptions());
  rclcpp::spin(node);
  rclcpp::shutdown();
  printf("[RPLIDAR]: Exit process.\n");
  return 0;
}