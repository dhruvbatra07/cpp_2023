#include<iostream>
using namespace std;

int sum(int n){
if (n==1){
    return 1;
}
else{
    return n + sum(n-1);
}
}
int main(){
int n;
cout<<"enter the number of terms: ";
cin>>n;
cout<<"the sum of the numbers is: "<<sum(n);
return 0;
}
