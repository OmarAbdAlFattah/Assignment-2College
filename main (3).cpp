// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Annular Raise.cpp
// Last Modification Date: 1/3/2018
// Author1 and ID and Group: Omar AbdelFattah 20160160 G12
// Teaching Assistant:
#include <iostream>

using namespace std;

int main()
{
    while(true){
        float monthly, annual;
        const float inc = 7.6;
        cout<<"Enter your monthly and annual salaries: ";
        cin>>monthly>>annual;
        monthly += monthly*((inc / 2)/100);
        annual += annual*((inc / 2)/100);
        cout<<"Your New Monthly -> "<<monthly<<endl;
        cout<<"Your New Annual -> "<<annual<<endl;
        bool endIt;
        cout<<"If you want to end the program enter 0 ";
        cin>>endIt;
        if(!endIt){
            return 0;
            break;
        }
        else continue;

    }
}
