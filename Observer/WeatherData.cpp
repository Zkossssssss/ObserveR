#include "WeatherData.h"

void WeatherData::measurementsChanged() {
	notifyObservers();
}

void WeatherData::setMeasurements(float t, float h, float p) {
	this->temperature = t;
	this->humidity = h;
	this->pressure = p;
	measurementsChanged();
}

