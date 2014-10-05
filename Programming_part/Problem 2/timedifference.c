#include "timedifference.h"

double timedifference (time_t end,time_t start)
{
	//initialize the duration 
	double duration;
	//using the function difftime to calculate the time difference between start and end time
	duration = difftime(end,start);

	//returning the time difference to the main function
	return duration;
}

