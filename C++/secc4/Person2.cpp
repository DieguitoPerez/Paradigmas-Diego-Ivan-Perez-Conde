#include "Person.h"
#include <sstream>

Person2::Person2(){
	age=0;
	name="";
}

Person2::Person2(string name,int age){
	this->name;
	this->age=age;

	cout << "Memory location of object: " << this << endl;
}

string Person2::toString(){
	stringstream ss;
	
	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}
