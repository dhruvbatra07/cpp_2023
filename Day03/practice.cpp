#include<iostream>
using namespace std;

    int sum (int a, int b){
        return a+b;
        }

    int maxOf2 (int a , int b){
        if (a>b) {
            return a;
        }
        else if (b>a) {
            return b;
        }
        else {
        cout<<"both the values are equal.";
        }
}

    bool isEven (int e){
        if (e%2 == 0){
        return true;
        }
        else {
        return false;
        }
    }
main(){


    // Problem - 1
    int a,b;
    cin>>a>>b;
    int c = sum (a,b);
    cout<<c;

    // Problem - 2
    cin>>a>>b;
    int m = maxOf2(a,b);
    cout<<m;

    // Problem - 3
    int e;
    cin>>e;
    cout<<isEven(e);

    }

