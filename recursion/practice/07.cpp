#include<iostream>
using namespace std;

int maxarray(int arr[], int l, int maxele){
if (l==0){
    return maxele;
}
else if (arr[0] > maxele){
    maxele = arr[0];
    return maxarray(arr + 1, l - 1,maxele);
}
else {
    return maxarray(arr + 1, l - 1,maxele);
}
}
int main(){
int maxele=0;
int arr[] = {4,5,9,7,5,2};
int l = sizeof(arr) / sizeof(arr[0]);
cout<<"the maximum element is: "<<maxarray(arr,l,maxele);
return 0;
}
