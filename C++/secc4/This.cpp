//Name:This.cpp

#include <iostream>
#include "Person.h">
using namespace std;

int main(){
	Person2 person1;
	Person2 person2("Bob",42);
	Person2 person3("Sue",25);

	cout << person2.toString() << "; memory location: " << &person2 << endl;
	cout << person3.toString() << "; memory location: " << &person3 << endl;

	return 0;
}
