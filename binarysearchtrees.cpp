#include <iostream>
#include <vector>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = right= NULL;
    }
};
node* insert(node* root , int val){
    if(root==NULL)return new node(val);

    if(root->data < val){
        root->right = insert(root->right , val);
    }else{
        root->left = insert(root->left , val);
    }
    return root;
}
node* buildtree(vector<int>& arr){
    node* root = NULL;
    for(auto val:arr){
        root = insert(root,val);
    }
    return root;
}
node* search(node* root , int target){
    if(root==NULL)return NULL;
    if(root->data == target)return root;
    else if (root->data < target){
        return search(root->right,target);
    }
    else{
        return search(root->left,target);
    }
    // return NULL;
}
void inorder(node* root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);


}
node* inordersuccesor(node* root){
    while(root!=NULL && root->left!=NULL){
        root= root->left;
    }
    return root;
}
node* deletenode(node* root , int val){
    if(root==NULL)return NULL;
    if(root->data<val)root->right= deletenode(root->right , val);
    else if(root->data>val)root->left =  deletenode(root->left , val);
    else{
        if(root->left==NULL )
        {
            node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            node* IS = inordersuccesor(root->right);
            root->data =IS->data ;
            root->right = deletenode(root->right , IS->data);
        }
    }
    return root;
}
int main() {
    vector<int> arr = {3,2,1,5,6,4};
    node* root = buildtree(arr);
    inorder(root);
    cout<<endl;
    deletenode(root,3);
    inorder(root);
    return 0;
}