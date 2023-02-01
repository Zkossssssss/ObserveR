#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
class StatisticsDisplay :public Observer, DisplayElement
{
private:
	float max_temp = 0.0;
	float min_temp = 200;
	float temp_sum = 0.0;
	int num_readings = 0;

	float temperature;
	float humidity;
	float pressure;
	Subject* weatherData;
public:
	StatisticsDisplay(Subject*);
	void update(float, float, float);
	void display();
};