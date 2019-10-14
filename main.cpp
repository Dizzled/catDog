#include <iostream>
#include "Cat.h"
#include "dog.h"


int main() {
	Cat Walnut("Walnut", 9);
	std::cout << Walnut.getName() << "\n";
	Dog Ruby("Ruby", 10);
	std::cout << Ruby.getName() << "\n";

	return 0;
}