// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Pi Approximation.cpp
// Last Modification Date: 1/3/2018
// Author1 and ID and Group: Omar AbdelFattah 20160160 G12
// Teaching Assistant:
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int pi = 0;
    cin>>n;
    for(int i = 1; i <= 2*n + 1; i += 2){
        pi += 4*(pow(-1, n) / (2*n + 1));
    }
    cout<<pi<<endl;
    return 0;
}
