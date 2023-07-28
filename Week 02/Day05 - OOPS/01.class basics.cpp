#include<iostream>
#include<string.h>
using namespace std;

class student{
private:
    int rollNo;
    string name;
public:
    student(int roll_No, string name_){
        rollNo = roll_No;
        name = name_;
    }
    void display(){
    cout<<"the roll number of the user is "<<rollNo<<"\n";
    cout<<"the name of the user is "<<name<<endl;
    }
    ~student(){
    cout<<name<<" has been expelled."<<endl;
    }
    };
int main(){
    student s1(1,"Dhruv");
    s1.display();

    return 0;
}
