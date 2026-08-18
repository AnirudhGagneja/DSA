#include <iostream>
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
static int idx=-1;
node* buildtree(int preorder[]){
    idx++;
    if(preorder[idx]==-1)return NULL;
    node* root = new node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right=buildtree(preorder);
    return root;
}
void preorderprint(node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorderprint(root->left);
    preorderprint(root->right);

}
int main() {
    int preorder[] = {1,2,3,-1,-1,4,-1,-1};
    node* root = buildtree(preorder);
    preorderprint(root);
    return 0;
}