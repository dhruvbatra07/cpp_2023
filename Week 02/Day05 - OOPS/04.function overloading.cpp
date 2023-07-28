#include<iostream>
using namespace std;

int calculateArea(int sidelength){
    return sidelength * sidelength;
};

int calculateArea(int lenght, int weidth){
    return lenght * weidth;
};

double calculateArea(double radius){
    return 3.14 * radius * radius;
};
int main(){
    int square = calculateArea(5);
    int rect = calculateArea(5,7);
    double circle = calculateArea(2.5);

    cout<<"square area= "<<square<<endl;
    cout<<"rectangle area= "<<rect<<endl;
    cout<<"circle area= "<<circle<<endl;
return 0;
}
