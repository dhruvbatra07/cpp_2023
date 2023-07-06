#include<iostream>
using namespace std;

    int sum(int a, int b){
    return a+b;
    }
int main(){
    cout<<"enter two numbers: ";
    int a,b;
    cin>>a>>b;
    int c = sum (a,b);
    cout<<"the sum of the numbers is "<<c;
    }


