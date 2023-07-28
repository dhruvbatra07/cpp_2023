#include<iostream>
using namespace std;

class shape{
public:
    void draw(){
        cout<<"drawing a shape..."<<endl;
    }
};
class circle : public shape {
public:
    void draw(){
        cout<<"drawing a circle..."<<endl;
    }
};
class rectangle : public shape {
public:
    void draw() {
        cout<<"drawing a rectangle..."<<endl;
    }
};
int main(){
    shape s1;
    circle c1;
    rectangle r1;

    s1.draw();
    c1.draw();
    r1.draw();

return 0;
}
