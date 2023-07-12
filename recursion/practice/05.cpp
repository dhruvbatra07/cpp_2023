#include<iostream>
using namespace std;

int sumdigits(long int n){
if (n==0){
    return 0;
}
else {
    return (n%10) + sumdigits(n/10);
}
}
int main(){
long int n;
cout<<"enter the number: ";
cin>>n;
cout<<"the sum of the digits of the number is: "<<sumdigits(n);


return 0;
}
