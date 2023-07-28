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
    void insertend(int d){
    if (head == nullptr){
        insertbegin(d);
    }
    else {
        node* current = head;
        node* newnode = new node(d);
        while (current->next != nullptr){
            current = current -> next;
        }
        current -> next = newnode;
    }
    }
    void insertmiddle(int d, int n){
    if (n==0)
        insertbegin(d);
    else{
        node* newnode = new node(d);
        node* current = head;
        for (int i=0; i<n-1 && current!=nullptr; i++)
            current=current-> next;
        if(current==nullptr)
            return;
        newnode -> next = current -> next;
        current -> next = newnode;
    }
    }
    void display(){
    node* current = head;
    while (current != nullptr){
            cout<<current -> data<<" ";
            current = current -> next;
    }
    }
};
int main(){
linklist ducky;
ducky.insertend(564);
ducky.insertbegin(754);
ducky.insertbegin(845);
ducky.insertbegin(167);
ducky.insertend(985);
ducky.insertmiddle(342,3);
ducky.display();
return 0;
}

