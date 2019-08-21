/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic startup code for a JUCE application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "MainComponent.h"

//==============================================================================
class uiApplication  : public JUCEApplication
{
public:
    //==============================================================================
    uiApplication() {}

    const String getApplicationName() override       { return ProjectInfo::projectName; }
    const String getApplicationVersion() override    { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed() override       { return true; }

    //==============================================================================
    void initialise (const String& commandLine) override
    {
        // This method is where you should put your application's initialisation code..

        mainWindow.reset (new MainWindow (getApplicationName()));
    }

    void shutdown() override
    {
        // Add your application's shutdown code here..

        mainWindow = nullptr; // (deletes our window)
    }

    //==============================================================================
    void systemRequestedQuit() override
    {
        // This is called when the app is being asked to quit: you can ignore this
        // request and let the app carry on running, or call quit() to allow the app to close.
        quit();
    }

    void anotherInstanceStarted (const String& commandLine) override
    {
        // When another instance of the app is launched while this one is running,
        // this method is invoked, and the commandLine parameter tells you what
        // the other instance's command-line arguments were.
    }

    //==============================================================================
    /*
        This class implements the desktop window that contains an instance of
        our MainComponent class.
    */
    class MainWindow    : public DocumentWindow, public AsyncUpdater
    {
    public:
        MainWindow (String name)  : DocumentWindow (name,
                                                    Desktop::getInstance().getDefaultLookAndFeel()
                                                                          .findColour (ResizableWindow::backgroundColourId),
                                                    DocumentWindow::allButtons)
        {
            setUsingNativeTitleBar (true);
            setContentOwned (new MainComponent(), true);

           #if JUCE_IOS || JUCE_ANDROID
            setFullScreen (true);
           #else
            setResizable (true, true);
            centreWithSize (getWidth(), getHeight());
           #endif

            setVisible (true);
        }

		void handleAsyncUpdate() override
		{
			resetContentComponent();
		}
		void resetContentComponent()
		{
			setContentNonOwned(new MainComponent(), true);
			//auto refreshComp = new MainComponent();
			//getContentComponent()->addAndMakeVisible(refreshComp);
			//refreshComp->setBounds(getContentComponent()->getBounds());

		}
        void closeButtonPressed() override
        {
            // This is called when the user tries to close this window. Here, we'll just
            // ask the app to quit when this happens, but you can change this to do
            // whatever you need.
            JUCEApplication::getInstance()->systemRequestedQuit();
        }

        /* Note: Be careful if you override any DocumentWindow methods - the base
           class uses a lot of them, so by overriding you might break its functionality.
           It's best to do all your work in your content component instead, but if
           you really have to override any DocumentWindow methods, make sure your
           subclass also calls the superclass's method.
        */

    private:
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)
    };

//private:
    std::unique_ptr<MainWindow> mainWindow;
};


//==============================================================================
// This macro generates the main() routine that launches the app.
START_JUCE_APPLICATION (uiApplication)

inline void msg(String s)
{
	//AlertWindow::showMessageBox(AlertWindow::AlertIconType::InfoIcon, "msg", s, "ok");
}

extern "C" void __blink_sync(const char *source_file)
{
	msg("__blink_sync");
}
extern "C" void __blink_release(const char *source_file, bool success)
{
	msg("__blink_release");
	uiApplication* ua = dynamic_cast<uiApplication*>(JUCEApplication::getInstance());
	if (ua)
	{
		ua->mainWindow->triggerAsyncUpdate();
	}
}
