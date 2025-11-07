#include <iostream>
#include <queue>
using namespace std;

class node{
    public: 
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left=right=NULL;
    }

};
static int idx=-1;
node* buildtree(int preorder[])
{
    idx++;
    if(preorder[idx]==-1)return NULL;
    node* root = new node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);
    return root;
}
void preorder(node *root){
    if (root==NULL)return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}

int main() {
   int preorderarr[] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
   node* root = buildtree(preorderarr);
   idx=-1;
//    preorderarr[0]=3;
   node* q = buildtree(preorderarr);
//    cout<<root->data;
    preorder(root);
    // levelorder(root);
    // seplevelorder(root);
    // cout<<sum(root);
    // cout<<diameterbyh(root);
    // cout<<"working";
    return 0;
}