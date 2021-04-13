#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person3{
	private:
		string name;
		int age;
	public:
		Person3():name("unname"),age(0){};
		Person3(string name, int age): name(name), age(age){};

		string toString();
};

#endif /*PERSON_H_*/
