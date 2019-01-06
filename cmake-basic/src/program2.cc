#include <iostream>
#include <string>
#include <cxxopts.hpp>
#include <test_class_two.h>

using namespace std;
using namespace cxxopts;

int main(int argc, char** argv) {
	Options options(argv[0]);
	options.add_options()("a,arg", "Argument", value<string>());
	ParseResult result = options.parse(argc, argv);
	if (result.count("arg"))
	{
		cout << "arg value: " << result["arg"].as<string>() << endl;
	}
	
	TestClassTwo cls;
	cout << cls.print() << endl;
}