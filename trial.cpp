#include <iostream>
#include<vector>

using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};
node* insert ( node* root , int val){
    if(root==NULL){
        
        return new node(val);
    }
    if(val < root->data )root->left = insert(root->left , val);
    if(val > root->data )root->right = insert(root->right , val);
    return root;
}
node* buildbst(vector<int>&arr){
    node* root= NULL;
    for(auto i : arr){
       root = insert(root,i);
    }
    return root;
}
void inorder(node* root){
    if(root==NULL)return;
    inorder( root->left);
    cout<<root->data<<" ";
    inorder( root->right);
}
node* search(node* root,int target){
    if(root->data==target)return root;
    else if(root->data<target) return search(root->right , target);
    else{
        return search(root->left,target);
    }
}
int main() {
    vector<int>arr =  {4,2,1,3,5,6,7};
    node* root = buildbst(arr);
    inorder(root);
    node* ans= search(root,6);
    cout<<endl<<ans->data;

    return 0;
}