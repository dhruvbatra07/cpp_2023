#include<iostream>
using namespace std;

int main(){
    int n;
    int a = 0;
    int b = 1;
    int nextterm = 0;

    cout<<"enter the number of terms: ";
    cin>>n;

    cout<<"fibonacci series: ";

    for(int i = 1; i <= n; ++i){
        if(i == 1){
            cout<<a<<", ";
            continue;
        }
        if(i == 2){
            cout<<b<<", ";
            continue;
        }
        nextterm = a + b;
        a = b;
        b = nextterm;
        cout<<nextterm<<", ";
    }
    return 0;

    }
