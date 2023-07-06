#include<iostream>
using namespace std;

 bool iseven(long int a){
    if (a%2 == 0){
        return true;
    }
    else {
        return false;
    }
    }

int main(){
    cout<<"enter the number: ";
    long int a;
    cin>>a;
    cout<<iseven(a);
    }
