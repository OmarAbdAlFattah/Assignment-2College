// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: xxxxxx.cpp
// Last Modification Date: xx/xx/xxxx
// Author1 and ID and Group: xxxxx xxxxx
// Author2 and ID and Group: xxxxx xxxxx
// Author3 and ID and Group: xxxxx xxxxx
// Teaching Assistant: xxxxx xxxxx
#include <iostream>
#include <string>
using namespace std;

string cipherIt(string msg){
    int a = 5, b = 8;
    char after;
    for(int i = 0; i < msg.size(); i++){
        after = (char)(((((int) msg[i])*a) + b) % 26) ;
        cout<<after;
    }
    cout<<endl;
}
int main(){
    string text;
    cin>>text;
    cout<<"Enter your message: ";
    cipherIt(text);
    //decipherIt();
}
