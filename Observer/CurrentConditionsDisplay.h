#pragma once
#include "Observer.h"
#include "Subject.h"
#include "DisplayElement.h"
#include <iostream>
class CurrentConditionsDisplay : public Observer, DisplayElement {
private:
	float temperature;
	float humidity;
	Subject* weatherData;

public:
	CurrentConditionsDisplay(Subject*);
	void update(float, float, float);
	void display();
};