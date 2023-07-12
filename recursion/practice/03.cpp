#include<iostream>
using namespace std;

int sumeven(int n){
if (n==0){
    return 0;
}
else if (n%2 == 0){
    return n + sumeven(n-1);
}
else {
    return sumeven(n-1);
}
}
int main(){
int n;
cout<<"enter the range: ";
cin>>n;
cout<<"the sum of the even numbers in the range is: "<<sumeven(n);
return 0;
}
