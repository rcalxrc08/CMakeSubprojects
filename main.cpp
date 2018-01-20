#include "erf.hpp"
#include "cos.hpp"
#include "sin.hpp"
#include <iostream>

int main()
{
	auto p=erf1(1.0)*sin1(1.0)*cos1(1.0);
	std::cout<<"Result is "<<p<<std::endl;
}