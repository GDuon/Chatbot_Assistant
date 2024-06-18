#include "learner.h"
#include<iostream>
#include<fstream>

using namespace std;

void Learner::respond(string phrase)
{ 
    fstream memory;
    memory.open("memory.text", ios::in); //open the memory file for input

    //search through the file until the end is reach
    while( !memory.eof()) // while not at the end of file
    {
        string identifier;            //get next phrase
        getline(memory, identifier);

        if (identifier == phrase)     //is it the phrase we looking for
        {
            string response;
            getline(memory, response);  //if so get the respond
            voice.say(response);  //textually and audibly output the respond
            return;  //leave the function
        }
        
    }

memory.close();  //count't find the phrase in memnory, clse the file!!
memory.open("memory/memory.txt", ios::out | ios ::app); //now open for output, and append at end file
memory << phrase << endl; //record initial phrase in memory

voice.say(phrase); //repeat the phrase user enter
string userResponse;
cout << "You: ";
getline(cin, userResponse); //get the ideal respond
memory << userResponse << endl; //write ideal respond to memory
memory.close(); //close the file

}

// this function simply communicate a phrase textually and audibly

void Learner::say(string phrase)
{
    this->voice.say(phrase);
}
