/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "LogWindow.h"
//==============================================================================
MainComponent::MainComponent()
{
	_logWin.reset(new LogWindow());
	addAndMakeVisible(_logWin.get());
    setSize (600, 400);

}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Hello blink! ", getLocalBounds(), Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.

	auto rect = getLocalBounds();

	auto recBottom = rect.removeFromBottom(proportionOfHeight(1.));

	_logWin->setBounds(recBottom);
}


