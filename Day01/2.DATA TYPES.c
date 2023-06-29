#include<iostream>
using namespace std;

int main(){
    //Integer Type
    int age = 25;
    short int temp = -10;
    long int distance = 277466;
    long long int population = 44457775796;
    cout<<"INTEGER TYPE\n";
    cout<<"Age: "<<age<<"\nTemperature :"<<temp<<"\nDistance"<<distance<<"\nPopulation :"<<population<<"\n\n";

    //Floating Type
    float pi = 3.14159f;
    double distance2 = 299792.451;
    long double num = 1864698634.181614684;
    cout<<"FLOATING DECIMAL TYPE\n";
    cout<<"Pi ="<<pi<<"\nDistance ="<<distance2<<"\nDecimal Num ="<<num<<"\n\n";

    //CHARACTER TYPE
    char grade = 'A';
    cout<<"CHARACTER TYPE\n";
    cout<<"Grade: "<<grade<<"\n\n";

    //Boolean Type
    bool isSunny = false;
    cout<<"BOOLEAN TYPE\n";
    cout<<"Is it sunny outside?"<<isSunny<<"\n\n";

    //Pointers
    cout<<"POINTER TYPE\n";
    int* point;
    cout<<"Without any initial value: "<<point<<"\n";
    int point2 = &age;
    cout<<"With any initial value: "<<point2<<"\n";

    return 0;

    }
