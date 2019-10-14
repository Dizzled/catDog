#include <iostream>
#include "cat.h"

/* This Initial Constructor Can Also be written as:
 CatName = newName;
 CatAge = newAge
 */
Cat::Cat(std::string newName, int newAge)
	: catName(newName), catAge(newAge) {};


int Cat::getAge()
{
	return catAge;
}

std::string Cat::getName()
{
	return catName;
}

Cat::~Cat()
{
	std::cout << "\nCat Destroyed\n";
}