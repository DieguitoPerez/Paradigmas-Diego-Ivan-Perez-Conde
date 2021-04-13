//Name: This.cpp

#include <iostream>
#include "Person3.h"
using namespace std;

int main(){
	Person3 person1;
	Person3 person2("Bob",42);
	Person3 person3("Sue",25);

	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;

	return 0;
}
