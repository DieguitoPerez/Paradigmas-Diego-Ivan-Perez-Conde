#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person1{
	private:
		string name;
		int age;
	public:
		Person1();
		Person(string newName){name=newName; age=0;};
		Person(string newName,int newAge);
		string toString();
};

#endif /*PERSON_H_*/
