/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "LogWindow.h"
//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...
	std::unique_ptr< LogWindow> _logWin;

    //JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
	//we do not detect the leack obj, because when we design with projucer, we add and delete lots of controls which do not need to trace.
};
