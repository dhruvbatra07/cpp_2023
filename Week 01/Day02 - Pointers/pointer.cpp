#include<iostream>
using namespace std;

int main(){

    //declare variable
    int var;
    var = 30;
    cout<<var<<"\n";

    //declare pointer
    int *pt;
    pt = &var;
    cout<<pt<<"\n";
    cout<<*pt<<"\n";
    cout<<&pt<<"\n";

    //change value
    *pt = 40;
    cout<<var<<"\n";

    //null pointer
    int *nullP = NULL;
    cout<<"Null Pointer: "<<nullP<<"\n";

    //void pointer
    void *voidP;
    int a=3;
    voidP = &a;
    cout<<"Void Pointer: "<<* (int*)voidP<<"\n";

    //wild pointer
    int *wildP;
    cout<<"Wild Pointer: "<<wildP<<"\n";

    //dangling pointer
    int b=5;
    int *danglingP = &b;
    cout<<"Dangling Pointer: "<<danglingP<<"\n";
    free(danglingP);
    cout<<danglingP<<"\n";

    return 0;

    }
