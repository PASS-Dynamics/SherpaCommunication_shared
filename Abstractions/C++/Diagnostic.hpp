#ifndef DIAGNOSTIC_HPP
#define DIAGNOSTIC_HPP

#include <cstdint>
#include <string>
#include <vector>
#include <utility>

class Diagnostic 
{
	Diagnostic();
	
    std::vector<std::pair<int16_t, std::string>> Messages;
};

#endif 
