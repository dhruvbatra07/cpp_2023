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
class stacks{
public:

    node* head;
    stacks(){
        head = nullptr;
    }
    void push(int d){
        if (head == nullptr){
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
        else {
        node* current = head;
        node* newnode = new node(d);
        while (current->next != nullptr){
            current = current -> next;
        }
        current -> next = newnode;
    }
    }
    void pop(){
    if (head == nullptr)
        return;
    else if(head -> next == nullptr){
            if(head==nullptr)
            return;
            node* current = head;
            head = head -> next;
            delete current;
    }
    else{
        node* current = head;
        while(current -> next -> next!=nullptr)
            current = current -> next;
        delete current -> next;
        current -> next = nullptr;
    }
    }
    void display(){
    node* current = head;
    while (current != nullptr){
            cout<<current -> data<<" ";
            current = current -> next;
    }
    }
    int top(){
    // Initialize current
    node* current = head;
    // Iterate till the end
    while (current -> next!=nullptr)
        current = current -> next;
    return current -> data;
    }
};
int main(){
stacks ducky;
ducky.push(754);
ducky.push(845);
ducky.push(544);
ducky.pop();
ducky.display();
cout<<endl<<"Top: "<<ducky.top();
return 0;
}
