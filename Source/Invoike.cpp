/*
  ==============================================================================

    Invoike.cpp
    Created: 1 Jul 2019 11:31:59am
    Author:  user

  ==============================================================================
*/

#include "Invoike.h"

double function(int i, double j)
{
	return i * j;
}

int RegisterFun()
{
	chaiscript::ChaiScript chai;
	chai.add(chaiscript::fun(&function), "function");

	double d = chai.eval<double>("function(3, 4.75);");
	return d;
}