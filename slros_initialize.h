#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block rnd_cmd_vel/Subscribe
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_rnd_cmd_vel_geometry_msgs_Twist> Sub_rnd_cmd_vel_1;

// For Block rnd_cmd_vel/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_rnd_cmd_vel_geometry_msgs_Twist> Pub_rnd_cmd_vel_4;

void slros_node_init(int argc, char** argv);

#endif
