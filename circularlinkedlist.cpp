#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data= val;
        next = NULL;
    }
};
class circularlinkedlist{
    node * head;
    node * tail;
    public:
    circularlinkedlist(){
        head=tail=NULL;
    }
    void push_front(int val){
        node* newnode = new node(val);
        if (head==NULL)
        {
            head=tail=newnode;
            return;
        }
        newnode->next = head;
        tail->next=newnode;
        head=newnode;

        
    }

     void push_back(int val){
        node* newnode = new node(val);
        if (tail==NULL)
        {
            head= tail = newnode;
            return;
            /* code */
        }
        tail->next=newnode;
        newnode->next = head;
        tail= newnode;
        
     }
     void print(){
        node* temp =head;
        do
        {
            cout<<temp->data<<"->";
            temp = temp->next;
            /* code */
        }while (temp!=head);
      
     }
};
int main() {
    circularlinkedlist l1;
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(1);
    l1.push_back(4);
    l1.print();
    return 0;
}