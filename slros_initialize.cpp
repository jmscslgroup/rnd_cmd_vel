#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "rnd_cmd_vel";

// For Block rnd_cmd_vel/Subscribe
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_rnd_cmd_vel_geometry_msgs_Twist> Sub_rnd_cmd_vel_1;

// For Block rnd_cmd_vel/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_rnd_cmd_vel_geometry_msgs_Twist> Pub_rnd_cmd_vel_4;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

