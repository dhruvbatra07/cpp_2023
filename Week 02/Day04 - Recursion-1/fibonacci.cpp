#include<iostream>
using namespace std;

int fibo (int n){
    if (n == 0){
        return 0;}
    else if (n == 1){
        return 1;}
    else {
        return fibo(n-1)+fibo(n-2);}
    }

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<n<<" is "<<fibo(n)<<" fibonacci.";

    return 0;


}

