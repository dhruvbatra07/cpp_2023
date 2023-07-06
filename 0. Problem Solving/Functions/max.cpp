#include<iostream>
using namespace std;

    int max_num(int a, int b){
    if (a>b){
        return a;}
    else if (b>a){
        return b;}
    else {
    cout<<"both the numbers are equal.";}
      }

int main(){
    cout<<"enter the two numbers: ";
    int a,b;
    cin>>a>>b;
    int c= max_num(a, b);
    cout<<"the largest number is "<<c;
    }
