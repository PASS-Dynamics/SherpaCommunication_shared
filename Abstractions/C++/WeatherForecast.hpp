#ifndef WEATHERFORECAST_HPP
#define WEATHERFORECAST_HPP

#include <cstdint>
#include <string>
#include <optional>

class WeatherForecast 
{
public:

    WeatherForecast(){};

    std::string Date; 

    int32_t TemperatureC;

    std::optional<std::string> Summary;

    int32_t TemperatureF() const 
    {
        return 32 + static_cast<int32_t>(TemperatureC / 0.5556);
    }
};

#endif 
