#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node(int val){
        data= val;
        next = NULL;
    }
}; 
class linkedlist{
node* head;
node* tail;
public:
    linkedlist(){
        head=tail=NULL;
    }
    void push_front(int val){
        node* newnode = new node(val);
        if (head==NULL)
        {
            head = tail = newnode;
            return;
            /* code */
        }
        newnode->next = head;
        head = newnode;
    }
    void push_back(int val){
        node* newnode = new node(val);
        if (tail==NULL)
        {
            tail=head=newnode;
            return;
        }
        tail->next = newnode;
        tail=newnode;
        newnode->next=NULL;
    }
    int pop_front(){
        if (head==NULL)
        {
            cout<<"EMPTY";
            return -1;
        }
        int val = head->data;
        head= head->next;
        return val;
    }
    int pop_back(){
        if (tail==NULL)
        {
            cout<<"EMPTY";
            /* code */
        }
        int val = tail->data;
        node* temp = head;
        while (temp->next!=tail)
        {
            temp=temp->next;
            
        }
        temp->next=NULL;
        tail = temp;
        
        return val;
    }


    void print(){
        node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
        /* code */
    }
    cout<<"NULL";
    }
};
int main() {
    linkedlist l1;
    l1.push_front(1);
    l1.push_front(10);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_back(4);
    l1.push_back(5);
    cout<<l1.pop_front()<<endl;
    cout<<l1.pop_back()<<endl;
    l1.print();
    return 0;
}