/*
  ==============================================================================

    Invoike.cpp
    Created: 1 Jul 2019 11:31:59am
    Author:  user

  ==============================================================================
*/

#include "Invoike.h"
#include "../JuceLibraryCode/JuceHeader.h"
double function(int i, double j)
{
	return i * j;
}

void RegisterFun()
{
	chaiscript::ChaiScript chai;

	//chai.add(chaiscript::user_type<Entity>(), "Entity"); // this isn't strictly necessary but makes error messages nicer






	//chai.add(chaiscript::fun(&function), "function");
	//double d = chai.eval<double>("function(3, 4.75);");
	//msg(String(d));

}