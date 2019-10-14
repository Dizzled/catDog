#include <iostream>
#include "dog.h"


Dog::Dog(std::string newName, int newAge)
	: name(newName), age(newAge)
{}


int Dog::getAge() {

	return age;
}

std::string Dog::getName() {

	return name;
}


Dog::~Dog()
{
	std::cout << "\nDog Destroyed\n";
}