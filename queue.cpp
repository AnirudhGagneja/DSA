#include <iostream>
using namespace std;

class node 
{
int data;
node * next;

node(int val){
    data = val;
    next=NULL;
}
};

class queue
{
    node * head;
    node * tail;

    queue(){
        head= tail = NULL;
    }
    bool isempty(){
        if (head==NULL && tail==NULL)
        {
            return true;
            /* code */
        }
        return false;
    }
    int pop(){
        if (isempty())
        {
            cout<<"overflow";
            return ;
        }
        if (head->next==NULL && tail->next==NULL)
        {
            int val = head.data;
            head=NULL;
            tail=NULL;
            /* code */
        }
        else
        {

        }
        
    }
};
int main() {
    return 0;
}