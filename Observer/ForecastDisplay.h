#pragma once
#include "Observer.h"
#include "DisplayElement.h"
#include "Subject.h"
#include <iostream>
class ForecastDisplay :public Observer, DisplayElement
{
private:
	float temperature;
	float humidity;
	float pressure;
	float current_presure = 29.92;
	float last_pressure = 0.0;
	Subject* weatherData;
public:
	ForecastDisplay(Subject*);
	void update(float, float, float);
	void display();
};

