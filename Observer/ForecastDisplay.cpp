#include "ForecastDisplay.h"

ForecastDisplay::ForecastDisplay(Subject* wd)
{
	wd->registerObserver(this);
}

void ForecastDisplay::update(float t, float h, float p)
{
	this->last_pressure = current_presure;
	current_presure = p;

	display();
}

void ForecastDisplay::display()
{
	if (current_presure < last_pressure)
		std::cout << "Improving on the way!" << std::endl;
	else if (current_presure == last_pressure)
		std::cout << "the same" << std::endl;
	else if (current_presure < last_pressure)
		std::cout << "Watch out for cooler ()_()";
}
