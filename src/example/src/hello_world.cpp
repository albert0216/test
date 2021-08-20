#include <stdio.h>
#include <stdlib.h>
#include <ros/ros.h>

int main(int argc,char **argv)
{
	ros::init(argc,argv,"hello_world");
	ros::NodeHandle nh;
	
	printf("Hello! \n");
	
	return 0;
}
