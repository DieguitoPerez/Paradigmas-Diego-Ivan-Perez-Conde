#include "Person3.h"
#include <sstream>

string Person3::toString(){
	stringstream ss;
	
	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}
