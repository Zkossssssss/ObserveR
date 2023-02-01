#pragma once
#include "Subject.h"
#include "Observer.h"
#include <list>

class WeatherData : public Subject {
public:
	void measurementsChanged();
	void setMeasurements(float, float, float);
};
