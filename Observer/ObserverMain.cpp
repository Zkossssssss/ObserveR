#include <iostream>
#include "Subject.h"
#include "Observer.h"
#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "DisplayElement.h"
#include "StatisticsDisplay.h"
#include "ForecastDisplay.h"

int main()
{
    WeatherData* weatherData = new WeatherData();
    CurrentConditionsDisplay* currentDisplay = new CurrentConditionsDisplay(weatherData);
    StatisticsDisplay* statDis = new StatisticsDisplay(weatherData);
    ForecastDisplay* foreDis = new ForecastDisplay(weatherData);

    weatherData->setMeasurements(10, 78, 754);
    weatherData->setMeasurements(-15, 88, 758);
    statDis->update(5, 4, 3);
    foreDis->update(5, 3, 522);

    return 0;
}
