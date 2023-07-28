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
    void display(){
    node* current = head;
    while (current != nullptr){
            cout<<current -> data<<" ";
            current = current -> next;
    }
    }
    void deletebegin(){
    if(head==nullptr)
       return;
       node* current = head;
       head = head -> next;
       delete current;
    }
    void deleteend(){
    if (head == nullptr)
        return;
    else if(head -> next == nullptr)
        deletebegin();
    else{
        node* current = head;
        while(current -> next -> next!=nullptr)
            current = current -> next;
        delete current -> next;
        current -> next = nullptr;
    }
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
ducky.insertbegin(754);
ducky.insertbegin(845);
cout<<ducky.computelenght();
ducky.display();
return 0;
}
