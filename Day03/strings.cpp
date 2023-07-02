#include<iostream>
#include<string.h>
using namespace std;

int main(){

    //creation of strings
    string myString;
    string greeting = "hello";
    cout<<greeting<<"\n";

    //length of string
    int length = greeting.length();
    cout<<length<<"\n";

    //sub-string
    string substring = greeting.substr(2,4);
    cout<<substring<<"\n";

    //extending in the string
    greeting.append(" world!");
    cout<<greeting<<"\n";

    //taking input
    string s;
    cout<<"enter string: ";
    cin>>s;
    cout<<s<<"\n";

    //comparison - (dictionary)
    string s1 = "HELLO";
    string s2 = "hello";
    cout<<(s1>s2)<<"\n";

    //iterate over a string
    for(char c:s2){
        cout<<c<<" ";
        }

        return 0;
    }
