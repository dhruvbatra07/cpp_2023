#include<iostream>
using namespace std;

int sumarray(int arr[],int l){
if (l==0){
    return 0;
}
else {
    return arr[0] + sumarray(arr + 1,l-1);
}
}
int main(){
int arr[] = {4,5,9,7,5,2};
int l = sizeof(arr) / sizeof(arr[0]);
cout<<"the sum of all the elements in the array is: "<<sumarray(arr,l);
return 0;
}
