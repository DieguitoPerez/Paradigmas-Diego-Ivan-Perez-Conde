//Name: Constructor.cpp

#include <iostream>
#include "Person.h"

using namespace std;

int main(){
	Person1 person1;
	Person1 person2("Bob");
	Person1 person3("Sue",35);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;
	return 0;
}
