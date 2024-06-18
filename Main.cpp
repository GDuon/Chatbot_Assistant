#include<iostream>
#include "Learner.h"
#include <ctime>
#include <string.h>
#include <windows.h>
#include <stdio.h>

using namespace std;
string userName;

// function to wish user according to time
void wishme(){
    // current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12){
        cout<< "Good Morning " + userName <<endl;
        string phrase = "Good Morning " + userName;
        string command = "voice \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon " + userName <<endl;
        string phrase = "Good Afternoon " + userName;
        string command = "voice \""+ phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening " + userName <<endl;
        string phrase = "Good Evening " + userName;
        string command = "voice \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void chatBotGreeting()
{
        cout << "Hello dear user, how can i address you ? " << endl;
        string hello = "Hello dear user, how can i address you ? ";
        string command = "voice \"" + hello + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl
        << dt <<endl;
}


int main()
{
    system("cls");

    // cout<<"\t\t\t<========================================= GREETING SIR =======================================>"<<endl;
    // cout<<"\t\t\t<===================================== I'M A VIRTUAL ASSISTANT ============================>"<<endl;
    // cout<<"\t\t\t<====================================== I'M HERE TO HELP YOU ===============================>"<<endl<<endl;

    char Password[20]; //to take password
    char ch[100]; // to take command from the user

    chatBotGreeting(); //greet user by asking name

    do
    {

        getline(cin, userName);
        cout << "Nice to meet you, " << userName << " !!"<< endl << endl;
        cout << "my name is Ogam, i can perform some simple task and answer your question..." << endl << endl;
        cout << "Now " + userName + ", Please enter my name to activated my function" << endl << endl;
        string ntmy = "Nice to meet you, ";
        string mnis = "my name is Ogam, i can perform some simple task and answer your question";
        string plen = "Now " + userName + ", Please enter my name to activated my function";
        string greeting = "voice \"" + ntmy + userName + mnis + plen + "\"";
        const char *charCommand = greeting.c_str();
        system(charCommand);

        cout<<"============="<<endl;
        cout<<"| ACTIVATED |"<<endl;
        cout<<"============="<<endl<<endl;
        cout<<"Please enter my name to proceed\n :";
        string phrase = "Please enter my name to proceed";
        string command = "voice \"" + phrase + "\"";
        // const char *charCommand = command.c_str();
        // system(charCommand);

        gets(Password);



        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(strcmp(Password,"ogam")==0){
            cout<<"\n<==================================================================================================>\n\n";
            wishme();
            do{
                cout<<"\n<==================================================================================================>\n\n";
                cout<<endl<<"How can i help you " <<userName<<endl<<endl;

                string phrase = "How can i help you ";
                string command = "voice \"" + phrase + userName + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Your question " << userName << " ? ";
                gets(ch);
                cout<<endl;
                // cout<<"Here is the result for your question : ";

                if(strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0 || strcmp(ch, "hello sunday") == 0 || strcmp(ch, "hi sunday") == 0 ){
                    cout<<"Hello "<< userName <<endl;
                    string phrase = "Hello " + userName;
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0 || strcmp(ch, "good bye ") == 0){
                    cout<<"Good Bye " + userName + ", have a nice day!!!!" <<endl;
                    string phrase = "Good Bye " + userName + ", have a nice day";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else if(strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0 ){
                    cout<<"I'm a chatbot aka a virtual assistant created by Chong !!!, but don't expect to much of me as i am made for demo purposed only"<<endl;
                    string phrase = "I'm a chatbot aka a virtual assistant created by Chong, but don't expect to much of me as i am made for demo purposed only";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0 ){
                    cout<<"I'm good, " + userName + " tell me how can i help you.." <<endl;
                    string phrase = "I'm good, " + userName + " tell me how can i help you";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "fuck you")==0){
                    cout<<"No, thank you !!"<<endl;
                    string phrase = "No, thank you !!";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if(strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0 || strcmp(ch, "what time is it ?") == 0){
                    // make function to show date and time
                    datetime();
                }

//                else if(strcmp(ch, "what can you do") == 0 || strcmp(ch, "function") ){
//                    cout<<"centaily i can open web browser such as google, youtube, instagram and twitter\n also i can inform time and date of the day\n perhaps you need to write something ? i can create a notepad for you"<<endl;
//                    string phrase = "centaily i can open web browser such as google, youtube, instagram and twitter, also i can inform time and date of the day, perhaps you need to write something, i can create a notepad for you";
//                    string command = "espeak \"" + phrase + "\"";
//                    const char *charCommand = command.c_str();
//                    system(charCommand);
//                }

                   else if(strcmp(ch, "open notepad") == 0 || strcmp(ch, "created notepad") == 0){
                    cout<<"opening notepad....."<<endl;
                    string phrase = "opening notepad";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }


                else if(strcmp(ch, "open google") == 0){
                    cout<<"opening google....."<<endl;
                    string phrase = "opening google";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(strcmp(ch, "open youtube") == 0){
                    cout<<"opening YouTube....."<<endl;
                    string phrase = "opening youtube";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(strcmp(ch, "open instagram") == 0){
                    cout<<"opening instagram....."<<endl;
                    string phrase = "opening instagram";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.instagram.com");
                }

                else if(strcmp(ch, "open twitter") == 0){
                    cout<<"opening twitter....."<<endl;
                    string phrase = "opening twitter";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://twitter.com/home");
                }

                else{
                    cout<<"Sorry could not understand your question please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your question please ty again";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    // cout << "\t\t\t<============================= W E L C O M E=============================>" << endl;
                    // cout << "\t\t\t<========================== I'M VIRTUAL ASSISTANT =============================>" << endl;
                    // cout << "\t\t\t<============================= MY NAME IS Sunday =============================>" << endl;
                    // cout << "\t\t\t<================= I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY =============================>" << endl
                    //      << endl;

                    cout << "======================" << endl;
                    cout << "X Incorrect Name X" << endl;
                    cout << "======================" << endl
                         << endl;
                    string phrase = "Incorrect Name, Please enter enter my Name to activated";
                    string command = "voice \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;

}
