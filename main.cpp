#include "erf.hpp"
#include "cos.hpp"
#include "sin.hpp"
#include <iostream>

int main()
{
	auto p=erf(1.0)*sin(1.0)*cos(1.0);
	std::cout<<"Result is "<<p<<std::endl;
}