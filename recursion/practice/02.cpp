#include<iostream>
using namespace std;

int power(int x, int n){
if (n==1){
    return x;
}
else {
    return x * power(x,n-1);
}
}

int main(){
int x;
int n;
cout<<"enter the number: ";
cin>>x;
cout<<"enter the power: ";
cin>>n;
cout<<"the answer is: "<<power(x,n);
return 0;
}
