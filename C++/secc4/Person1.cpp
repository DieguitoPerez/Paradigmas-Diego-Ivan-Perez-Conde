#include <sstream>
#include "Person1.h"

Person1 :: Person1(){
	name="undefined";
	age=0;
}
Person::Person(string newName, int age){
	name=newName;
	age=newAge;
}

string Person1::toString(){
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}
