#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include <visualization_msgs/MarkerArray.h>
#include "visualization_msgs/Marker.h"
#include "geometry_msgs/Point.h"
#include "geometry_msgs/Pose.h"

//#include "object_detection.h"

void msgCallback(const visualization_msgs::MarkerArray::ConstPtr &msg) //const: 상수
{
	//visualization_msgs::Marker marker_msg;
    //geometry_msgs::Pose pose;
    ROS_INFO("receive sedf;kjslkdjf");
    
    
    ROS_INFO("receive = %f", msg -> markers[6].pose.position.x);
    
    
	// ROS_INFO("receive msg = %f", msg -> pose.position.y);
	// ROS_INFO("receive msg = %f", msg -> pose.position.z);
}


int main(int argc, char **argv)
{
	ros::init(argc, argv, "lidar_turtle");
	ros::NodeHandle nh;

	ros::Subscriber sub = nh.subscribe("/marker_array", 100, msgCallback);
	ros::spin(); // 어떤 값이 들어오기 전까지 대기
	return 0;
}