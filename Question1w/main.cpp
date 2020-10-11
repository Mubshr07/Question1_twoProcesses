#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <cstring>
#include <string>
#include <uchar.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
    cout << " Process W " << "\n";

    if(argc < 1)
    {
        cout << "You did not pass X and Y values in command parameters "<<endl<<endl;
        return 0;
    }
    int varX = atoi(argv[1]);
    int varY = atoi(argv[2]);

    cout<<"X : "<<varX<<" and Y : "<<varY <<endl<<endl;

    int sumResult = 0;
    for (int i=0; i<varX; ++i)
    {
        sumResult += varY;
    }

    cout<<"output : "<<sumResult;

    cout<<endl<<endl;

    return 0;
}
