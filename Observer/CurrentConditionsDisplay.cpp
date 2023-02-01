#include "CurrentConditionsDisplay.h"
#include <iostream>
using namespace std;

CurrentConditionsDisplay::CurrentConditionsDisplay(Subject* wd) {
	this->weatherData = wd;
	weatherData->registerObserver(this);
}
void CurrentConditionsDisplay::update(float t, float h, float p) {
	this->temperature = t;
	this->humidity = h;
	display();
}
void CurrentConditionsDisplay::display() {
	cout << "Current conditions: " << temperature << "C temp and "
		<< humidity << "% humidity" << endl;
}
