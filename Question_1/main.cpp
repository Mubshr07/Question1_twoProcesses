#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <cstring>
#include <string>


using namespace std;

int main(int argc, char** argv)
{
    int numberofPw;
    if(argc < 2 )
    {
        cout << "Please pass **How many Pw you want** in command parameters "<<endl<<endl;
        return 0;
    }
    else
    {
        //cout << "How many Pw you want : ";
        //cin >> numberofPw;
    }

    numberofPw = atoi(argv[1]);

    char tuh[255], *abc;
    abc = getcwd(tuh,sizeof(tuh));

    int varX, varY;
    cout << "Type X variable number: ";
    cin >> varX;
    cout << "Type Y variable number: ";
    cin >> varY;


    string commandPw;
    commandPw = string(abc) + "/Question1w" + " " + to_string(varX) + " " + to_string(varY);


    cout<< "Executed ProcessW Command : "<<commandPw<<endl<<endl;

    for(int i=0; i<numberofPw; ++i)
    {
        system(commandPw.c_str());
        cout<< endl<<endl;
    }



    cout<< endl<< endl<< endl;
    return 0;
}
