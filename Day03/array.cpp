#include<iostream>
using namespace std;

int main(){

    //array creation
    int a1[] = {1,2,3,4,5};
    int a2[5] = {0};
    int a3[5] = {1,2,3};
    int a4[5];

    //get size of an array
    int s1 = sizeof(a1) / sizeof(a1[0]);
    cout<<s1<<"\n";

    //access elements in array
    cout<<a1[3]<<"\n";

    //iterate over an array
    for (int i=0; i<s1; i++){
        cout<<a1[i]<<" ";
    }

    cout<<"\n";
    for(int i:a1){
        cout<<i<<" ";
    }
    cout<<"\n";

    //take input of array
    int n;
    cin>>n;
    int a5[n];
    for (int i=0;i<n;i++){
        cin>>a5[i];
    }
    for(int i:a5){
        cout<<i<<" ";
    }

    return 0;
}
