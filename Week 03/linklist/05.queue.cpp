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
class queue{
public:

    node* head;
    queue(){
        head = nullptr;
    }
    void enqueue(int d){
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
    void dequeue(){
    if(head==nullptr)
       return;
       node* current = head;
       head = head -> next;
       delete current;
    }
    void display(){
    node* current = head;
    while (current != nullptr){
            cout<<current -> data<<" ";
            current = current -> next;
    }
    }
    int front(){
    return head -> data;
}
};
int main(){
queue ducky;
ducky.enqueue(754);
ducky.enqueue(845);
ducky.enqueue(544);
ducky.dequeue();
ducky.display();
cout<<endl<<"Front: "<<ducky.front();
return 0;
}

