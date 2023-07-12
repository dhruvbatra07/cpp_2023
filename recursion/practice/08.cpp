#include<iostream>
using namespace std;

bool searcharray(int arr[],int l, int ele){
if (l==0){
    return false;
}
else if (arr[0] == ele){
    return true;
}
else {
    return searcharray(arr + 1,l - 1,ele);
}
}
int main(){
int ele;
cin>>ele;
int arr[] = {4,5,9,7,5,2};
int l = sizeof(arr) / sizeof(arr[0]);
cout<<searcharray(arr,l,ele);
return 0;
}
