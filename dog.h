#pragma once
class Dog
{
public:
	Dog(std::string, int);
	std::string getName();
	int getAge();
	~Dog();

private:
	std::string name;
	int age;
};

