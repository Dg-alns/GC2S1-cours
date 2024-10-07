#include <iostream>
#include <string>
#include <sstream>

#include "Point.h"

std::string Point::ToString() {
	std::stringstream sStream;
	sStream << "Point: x:" << x << ",y:" << y << ",z:" << z;
	return sStream.str();
}