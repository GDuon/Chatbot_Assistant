#include "voice.h"
#include <iostream>
#include <windows.h>

using namespace std;

/*
the following function textually and audibly communicated the phrase
the open source espeak synthesizer is used to created the audible message
if the eSpeak exe is not located in directory, no audible message will be heard 
*/

void Voice::say(string phrase)
{
    string command ="espeak \"" + phrase + "\"";  //concat the phrase to the command
    const char* charCommand = command.c_str();  //convert to a constant char*
    cout << phrase << endl;  //textually output phrase
    system(charCommand);  //send the command to cmd to execute espeak with the phrase an argument
}