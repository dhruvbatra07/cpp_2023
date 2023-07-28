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
    void insertbegin(int d){
    if (head == nullptr){
    node* newnode = new node(d);
    head = newnode;
    }
    else {
    node* newnode = new node(d);
    newnode -> next = head;
    head = newnode;
    }
    }
    bool searchele(int value){
        node* current = head;
        while (current != nullptr){
            if (current -> data == value)
            current = current -> next;
                return true;
        }
        return false;
    }
    int computelenght(){
        int lenght = 0;
        node* current = head;
        while (current != nullptr){
                lenght+=1;
            current = current -> next;
    }
    return lenght;
    }
};
int main(){
linklist ducky;
ducky.insertbegin(548);
ducky.insertbegin(754);
ducky.insertbegin(684);
ducky.insertbegin(189);
ducky.insertbegin(845);
cout<<ducky.searchele(189);
return 0;
}
