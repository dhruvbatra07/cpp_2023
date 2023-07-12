#include<iostream>
using namespace std;

int countdigits(long int n){
if (n==0){
    return 0;
}
else {
    return 1 + countdigits(n/10);
}
}
int main(){
long int n;
cout<<"enter the number: ";
cin>>n;
cout<<"there are "<<countdigits(n)<<" digits in the above number.";
return 0;
}
