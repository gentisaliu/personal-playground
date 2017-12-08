#include <string>
#include <test_class_two.h>

TestClassTwo::TestClassTwo()
{
	this->name = "TestClassTwo";
}

std::string TestClassTwo::print() const
{
	return this->name;
}
