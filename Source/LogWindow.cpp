/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.4.3

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "LogWindow.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...

std::string getFileNew()
{
	// svg string from  https://raw.githubusercontent.com/asit-dhal/Juce-Qt-Menubar-Demo/master/juce_impl/icons/file-new.svg
	return u8R"(
<svg height="682pt" viewBox="-69 -21 682 682.66669" width="682pt" xmlns="http://www.w3.org/2000/svg"><path d="m507.886719 469.332031h-158.71875c-5.894531 0-10.667969 4.773438-10.667969 10.667969 0 5.890625 4.773438 10.664062 10.667969 10.664062h158.71875c18.136719.21875 33.027343-14.285156 33.277343-32.425781v-319.46875c.003907-2.5625-.914062-5.042969-2.589843-6.984375l-110.722657-128.097656c-2.023437-2.34375-4.972656-3.69140625-8.074218-3.68359375h-240c-18.132813-.22265625-33.027344 14.28515575-33.273438 32.42187475v255.574219c0 5.886719 4.773438 10.664062 10.660156 10.664062 5.894532 0 10.671876-4.777343 10.671876-10.664062v-255.574219c.253906-6.355469 5.589843-11.308593 11.941406-11.089843h221.933594l.792968 112.175781c.136719 14.644531 12.023438 26.445312 26.664063 26.488281h90.664062v298.238281c-.253906 6.351563-5.59375 11.308594-11.945312 11.09375zm-84.050781-336-.695313-102.546875 93.167969 107.878906h-87.140625c-2.945313 0-5.332031-2.386718-5.332031-5.332031zm0 0"/><path d="m130.5 640h53.335938c14.726562 0 26.664062-11.945312 26.664062-26.671875v-79.996094h80c14.726562 0 26.664062-11.941406 26.664062-26.667969v-53.332031c0-14.726562-11.9375-26.667969-26.664062-26.667969h-80v-80c0-14.722656-11.9375-26.664062-26.664062-26.664062h-53.335938c-14.726562 0-26.664062 11.941406-26.664062 26.664062v80h-80c-14.730469 0-26.667969 11.941407-26.667969 26.667969v53.332031c0 14.726563 11.9375 26.667969 26.667969 26.667969h80v79.996094c0 14.726563 11.9375 26.671875 26.664062 26.671875zm-112-133.335938v-53.332031c0-2.945312 2.386719-5.332031 5.335938-5.332031h90.664062c5.894531 0 10.667969-4.777344 10.667969-10.671875v-90.664063c0-2.941406 2.390625-5.328124 5.332031-5.328124h53.335938c2.945312 0 5.332031 2.386718 5.332031 5.328124v90.664063c0 5.894531 4.773437 10.671875 10.664062 10.671875h90.667969c2.945312 0 5.332031 2.386719 5.332031 5.332031v53.332031c0 2.945313-2.386719 5.332032-5.332031 5.332032h-90.667969c-5.890625 0-10.664062 4.777344-10.664062 10.671875v90.660156c0 2.945313-2.386719 5.332031-5.332031 5.332031h-53.335938c-2.941406 0-5.332031-2.386718-5.332031-5.332031v-90.660156c0-5.894531-4.773438-10.671875-10.667969-10.671875h-90.664062c-2.949219 0-5.335938-2.386719-5.335938-5.332032zm0 0"/></svg>
	)";
}



std::string getFileOpen()
{
	//svg string from https://raw.githubusercontent.com/asit-dhal/Juce-Qt-Menubar-Demo/master/juce_impl/icons/file-open.svg
	return u8R"(
<?xml version="1.0" encoding="iso-8859-1"?>
<!-- Generator: Adobe Illustrator 16.0.0, SVG Export Plug-In . SVG Version: 6.00 Build 0)  -->
<!DOCTYPE svg PUBLIC "-//W3C//DTD SVG 1.1//EN" "http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd">
<svg version="1.1" id="Capa_1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" x="0px" y="0px"
	 width="545.027px" height="545.027px" viewBox="0 0 545.027 545.027" style="enable-background:new 0 0 545.027 545.027;"
	 xml:space="preserve">
<g>
	<path d="M540.743,281.356c-4.179-8.754-10.568-15.464-19.123-20.12c-8.566-4.665-17.987-6.995-28.264-6.995h-54.819v-45.683
		c0-17.511-6.283-32.548-18.843-45.111c-12.566-12.562-27.604-18.842-45.111-18.842H219.268v-9.136
		c0-17.511-6.283-32.548-18.842-45.107c-12.564-12.562-27.6-18.846-45.111-18.846H63.953c-17.511,0-32.548,6.283-45.111,18.846
		C6.28,102.922,0,117.959,0,135.47v274.088c0,17.508,6.28,32.545,18.842,45.104c12.563,12.565,27.6,18.849,45.111,18.849h310.636
		c12.748,0,26.07-3.285,39.971-9.855c13.895-6.563,24.928-14.894,33.113-24.981L531.9,335.037
		c8.754-11.037,13.127-22.453,13.127-34.26C545.031,293.923,543.603,287.458,540.743,281.356z M36.547,135.474
		c0-7.611,2.663-14.084,7.993-19.414c5.326-5.327,11.799-7.993,19.414-7.993h91.365c7.615,0,14.084,2.663,19.414,7.993
		c5.327,5.33,7.993,11.803,7.993,19.414v18.274c0,7.616,2.667,14.087,7.994,19.414s11.798,7.994,19.412,7.994h164.452
		c7.611,0,14.089,2.666,19.418,7.993c5.324,5.326,7.99,11.799,7.99,19.414v45.682H182.725c-12.941,0-26.269,3.284-39.973,9.851
		c-13.706,6.567-24.744,14.893-33.12,24.986l-73.085,89.931V135.474z M503.345,311.917l-83.939,103.637
		c-4.753,5.899-11.512,10.943-20.272,15.125c-8.754,4.189-16.939,6.283-24.551,6.283H63.953c-10.088,0-15.131-3.333-15.131-9.992
		c0-3.046,1.713-6.852,5.14-11.427l83.938-103.633c4.949-5.903,11.75-10.896,20.413-14.989c8.658-4.093,16.796-6.14,24.411-6.14
		h310.631c10.088,0,15.129,3.333,15.129,9.993C508.485,304.019,506.778,307.728,503.345,311.917z"/>
</g>

</svg>
	)";
}


//[/MiscUserDefs]

//==============================================================================
LogWindow::LogWindow ()
{
    //[Constructor_pre] You can add your own custom stuff here..
	 drawbleFileNew.reset(Drawable::createFromImageData(getFileNew().c_str(), getFileNew().size()));
	drawbleFileOpen.reset(Drawable::createFromImageData(getFileOpen().c_str(), getFileOpen().size()));

    //[/Constructor_pre]

    label.reset (new Label ("new label",
                            TRANS("hello ellipse")));
    addAndMakeVisible (label.get());
    label->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::backgroundColourId, Colours::blue);
    label->setColour (Label::textColourId, Colours::crimson);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (16, 224, 150, 24);

    _fileNew.reset (new DrawableButton ("newBtn", DrawableButton::ButtonStyle::ImageFitted));
    addAndMakeVisible (_fileNew.get());
    _fileNew->setName ("fileNew");

    _fileNew->setBounds (16, 32, 150, 24);

    _fileOpen.reset (new DrawableButton ("openBtn", DrawableButton::ButtonStyle::ImageFitted));
    addAndMakeVisible (_fileOpen.get());
    _fileOpen->setName ("fileOpen");

    _fileOpen->setBounds (208, 32, 150, 24);


    //[UserPreSize]
	_fileNew->setImages(drawbleFileNew.get());
	_fileOpen->setImages(drawbleFileOpen.get());

    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..



    //[/Constructor]
}

LogWindow::~LogWindow()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;
    _fileNew = nullptr;
    _fileOpen = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void LogWindow::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff323e44));

    {
        float x = 180.0f, y = 180.0f, width = 348.0f, height = 188.0f;
        Colour fillColour = Colour (0xff2aa59a);
        //[UserPaintCustomArguments] Customize the painting arguments here..
    		g.fillAll(Colours::lightyellow);
        //[/UserPaintCustomArguments]
        g.setColour (fillColour);
        g.fillEllipse (x, y, width, height);
    }

    //[UserPaint] Add your own custom painting code here..



    //[/UserPaint]
}

void LogWindow::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
	auto r = getBounds();
	auto top = r.removeFromTop(proportionOfHeight(0.1));
	_fileNew->setBounds(top.removeFromLeft(top.proportionOfWidth(0.1)));
	_fileOpen->setBounds(top.removeFromLeft(top.proportionOfWidth(0.1)));
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="LogWindow" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff323e44">
    <ELLIPSE pos="180 180 348 188" fill="solid: ff2aa59a" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="51700321dccfe766" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="16 224 150 24" bkgCol="ff0000ff"
         textCol="ffdc143c" edTextCol="ff000000" edBkgCol="0" labelText="hello ellipse"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Default font" fontsize="15.0" kerning="0.0" bold="0"
         italic="0" justification="33"/>
  <GENERICCOMPONENT name="fileNew" id="fddae781dd4b6fb1" memberName="_fileNew" virtualName=""
                    explicitFocusOrder="0" pos="16 32 150 24" class="DrawableButton"
                    params="&quot;newBtn&quot;, DrawableButton::ButtonStyle::ImageFitted"/>
  <GENERICCOMPONENT name="fileOpen" id="485425a429ae8206" memberName="_fileOpen"
                    virtualName="" explicitFocusOrder="0" pos="208 32 150 24" class="DrawableButton"
                    params="&quot;openBtn&quot;, DrawableButton::ButtonStyle::ImageFitted"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

