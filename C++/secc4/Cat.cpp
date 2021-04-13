#include <iostream>

#include "Cat.h"

using namespace std;

Cat::Cat(){
	cout << "cat created." << endl;

	happy=true;
}

Cat::~Cat(){
	cout << "Cat destroyed." << endl;
}

void Cat::speak(){
	if(happy){
		cout << "Meouw!" << endl;
	}else{
		cout << "Ssssss!" << endl;
	}
}

void Cat::makeHappy(){
	happy=true;
}

void Cat::makeSad(){
	happy=false;
}
