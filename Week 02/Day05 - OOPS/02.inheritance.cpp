#include<iostream>
using namespace std;

class shape{
protected:
    int width;
    int height;
public:
    void set_dimensions(int w, int h){
    width = w;
    height = h;
    }
};
class rec : public shape{
public:
    int area(){
    return width*height;
    }

};
int main(){
rec r1;
r1.set_dimensions(5,12);
cout<<"area: "<<r1.area();

return 0;
}
