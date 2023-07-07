#include<iostream>
using namespace std;

int factorial (int n){
    if (n>0){
        return n*factorial (n-1);}
    else if (n<0){
        cout<<"negative integers doesn't have factorial";
        return 0;}
    else{
        return 1;}
}

int main(){
    int n;
    cout<<"enter a positive integer: ";
    cin>>n;
    cout<<"factorial of "<<n<<" = "<<factorial(n);

    return 0;


}
