#include <iostream>
#include <armadillo>
#include <test_class_one.h>

using namespace std;
using namespace arma;

int main(int argc, char** argv) {
	TestClassOne cls;
	cout << cls.show() << endl;
	
	cout << "Armadillo version: " << arma_version::as_string() << endl;
	mat A = randn<mat>(4,4);
	mat B = randn<mat>(4,4);
	mat C = A * B;
	A.print("A:");
	B.print("B:");
	C.print("AxB:");
}