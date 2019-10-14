#pragma once
class Cat
{

public:
	Cat(std::string, int);
	int getAge();
	std::string getName();
	~Cat();

private:
	std::string catName;
	int catAge;


};
