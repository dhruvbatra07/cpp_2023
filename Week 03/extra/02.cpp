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

    int computelenght(){
        int lenght = 0;
        node* current = head;
        while (current != nullptr){
                lenght+=1;
            current = current -> next;
    }
    return lenght;
    }
    int findmiddle(){
    int lenght = computelenght();
    if (lenght%2!=0){
        int middle = lenght/2;
        node* current = head;
        for(int i=0;i!=middle;i++)
            current = current -> next;
        return current -> data;
    }
    else{
        int middle1 = lenght/2;
        int middle2 = middle1-1;
        node* current = head;
        for(int i=0;i!=middle2;i++)
            current = current -> next;
        int v1 = current -> data;
        current = current -> next;
        int v2 = current -> data;
        int median = (v1+v2)/2;
        return median;
    }
    }
};
int main(){
linklist ducky;
ducky.insertbegin(548);
ducky.insertbegin(754);
ducky.insertbegin(684);
ducky.insertbegin(189);
cout<<ducky.findmiddle();
return 0;
}
