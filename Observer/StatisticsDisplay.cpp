#include "StatisticsDisplay.h"

StatisticsDisplay::StatisticsDisplay(Subject* weatherData)
{
	weatherData->registerObserver(this);
}

void StatisticsDisplay::update(float t, float h, float p)
{
	temp_sum += t;
	num_readings += 1;

	if (t > max_temp)
		max_temp = t;
	if (t < min_temp)
		min_temp = t;
	display();
}

void StatisticsDisplay::display()
{
	float avg_sum = temp_sum / num_readings;
	std::printf("STATISTICS avg/min/max: %.1f/%.1f/%.1f\n", temp_sum, max_temp, min_temp);
}