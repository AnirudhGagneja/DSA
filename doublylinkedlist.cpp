#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
class doublylinkedlist{
    node*head;
    node*tail;
    public:
    doublylinkedlist(){
        head=tail=NULL;
    }
    void push_front(int val){
        node* newnode = new node(val);
        if (head==NULL)
        {
            head=tail=newnode;
            return;
        }
        
        
        newnode->next=head;
        newnode->prev = head->prev;
        head->prev = newnode;
        head=newnode;
    }
    void push_back(int val){
        node* newnode = new node(val);
        if (tail==NULL)
        {
            head=tail=newnode;
            return;
        }
        
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
        newnode->next=NULL;
        
    }
    void print(){
        node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    int pop_front(){
        if (head==NULL)
        {
            cout<<"Empty"<<endl;
            return -1;
            /* code */
        }
        
        node* temp =head;
        int val = head->data;
        if (tail->prev != NULL) {
            tail->prev->next = NULL;
            tail = tail->prev;
        } else {
            // Only one element in the list
            tail = NULL;
            head = NULL; // Don't forget to update head too
        }
        temp->next=NULL;
        delete temp;
        return val;
    }

    int pop_back(){
        int val ;
        if (tail==NULL)
        {
            cout<<"Empty"<<endl;
            return -1;
            /* code */
        }
        if (tail->prev==NULL)
        {
            val = tail->data;
            head=tail=NULL;
            
            /* code */
        }
        
        else{
        node*temp = tail ;
        val = tail->data;
        tail->prev->next = tail->next;
        tail=tail->prev;
        temp->next=NULL;
        delete temp;
        }


        return val;
    }
};
int main() {
    doublylinkedlist l1;
    l1.push_back(1);
    l1.push_back(3);
    l1.push_back(5);
    l1.push_front(7);
    l1.push_front(8);
    l1.push_front(4);
    l1.print();
    cout<<l1.pop_back()<<endl;
    cout<<l1.pop_back()<<endl;
    cout<<l1.pop_back()<<endl;
    cout<<l1.pop_back()<<endl;
    cout<<l1.pop_back()<<endl;
    cout<<l1.pop_back()<<endl;
    l1.print();


    return 0;
}