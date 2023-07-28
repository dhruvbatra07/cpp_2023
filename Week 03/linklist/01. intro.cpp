#include<iostream>
using namespace std;

class node{
public:

    int data;
    node* next;

    node(int d){
        data = d;
        next = nullptr;
    }
};
class linklist{
public:

    node* head;
    linklist(){
        head = nullptr;
    }
};
int main(){
linklist ducky;
return 0;
}
