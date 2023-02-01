#pragma once
#include <vector>
#include "Observer.h"
using namespace std;

class Subject
{
protected:
	std::vector<Observer*> observers;
	float temperature;
	float humidity;
	float pressure;
public:
	virtual void registerObserver(Observer* o);
	virtual void removeObserver(Observer* o);
	virtual void notifyObservers();
};

