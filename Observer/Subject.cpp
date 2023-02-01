#include "Subject.h"

void Subject::registerObserver(Observer* o) {
	observers.push_back(o);
}
void Subject::removeObserver(Observer* o) {
	auto iter = observers.begin();
	while (iter != observers.end()) {
		if (*iter = o) {
			iter = observers.erase(iter);
		}
		else {
			iter++;
		}
	}
}
void Subject::notifyObservers() {
	for (Observer* o : observers) {
		o->update(temperature, humidity, pressure);
	}
}

