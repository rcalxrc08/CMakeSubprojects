#include "include/erf.hpp"
#include <iostream>
double erf1(double a) 
{
  return std::erf(a);
}

int main()
{
	std::cout<<"Erf of 0.0 = "<<erf1(0.0)<<std::endl;
}