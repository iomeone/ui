
# how to rapid design juce ui.
## step 1: ### build  https://github.com/crosire/blink to x64, copy blink exe to solution dir , like I did in https://github.com/iomeone/ui/tree/master/Builds/VisualStudio2017.

## step 2: Post-build Command , add command as folows:
        "$(ProjectDir)blink.exe" "$(TargetPath)"
        
## step 3: Extra Compiler Flags, add command as follows:
         /bigobj /ZI 
         
## Then you go!





# Why is this work! 
## When you modiy some code in cpp file, blink recompile the cpp file to obj file, and hot replace the running process's code memory to the new compiled code.

# Why the modified component can refresh itself. 
## becasue when recompiled finished, the compile will call two funciton which exported by you! like I did in 
https://github.com/iomeone/ui/blob/fee86b3eb86792091369c0f3690c54869421f100/Source/Main.cpp#L126
```
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
```
## when compiling finished , the compiler call __blink_release, then I recreate the main component like follows
```
void handleAsyncUpdate() override
{
	resetContentComponent();
}
void resetContentComponent()
{
	setContentNonOwned(new MainComponent(), true);
}
```

