//Name: Data.cpp

#include <iostream>
#include "Cata.h"

using namespace std;

int main(){
	Cat jim;

	jim.happy=false;
	jim.speak();

	Cat bob;
	bob.happy=true;
	bob.speak();

	return 0;
}
