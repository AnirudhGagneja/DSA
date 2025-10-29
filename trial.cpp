#include <iostream>
#include <queue>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int val)
    {
        data = val;
        left=right=NULL;
    }
};
static int idx=-1;
node* buildtree(int preorder[]){
    idx++;
    
    if(preorder[idx]==-1)return NULL;
    node* root = new node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);
    return root;
}
void preorder(node* root)
{
    if(root==NULL){return;}

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void levelorder(node* root)
{
    queue<node*> q;
    q.push(root);
    while(q.size()>0){
        node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }
}
void seplevelorder(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0)
    {
        node* temp = q.front();
        q.pop();
        if(temp==NULL){
            if(q.size()>0){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }
        cout<<temp->data;
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }
}
int d =0;
int height(node*root){
    if(root==NULL)return 0;
    int left = height(root->left);
    int right = height(root->right);

    return left+right+1;

}
int sum(node* root){
    if(root==NULL)return 0;
    int left = sum(root->left);
    int right = sum(root->right);
    return left+right+root->data;
}
bool isidentical(node* p , node* q){
    if(p==NULL || q== NULL){
        return p==q;
    }

    return isidentical(p->left,q->left) && isidentical(p->right,q->right) && p->data == q->data;
}
bool issubtree(node* root , node* subroot){
    if(root==NULL || subroot==NULL)return root==subroot;
    return isidentical(root->left,subroot) || isidentical(root->right , subroot) || isidentical(root,subroot);
}
int diameter(node* root){
    if(root==NULL)return 0;
    int len = height(root->right)+height(root->left)-1;
    return max(max(diameter(root->left),len),diameter(root->right));
}
int main() {
   int preorderarr[] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
   node* root = buildtree(preorderarr);
   idx=-1;
//    preorderarr[0]=3;
   node* q = buildtree(preorderarr);
//    cout<<root->data;
//     preorder(root);
    // levelorder(root);
    // seplevelorder(root);
    // cout<<sum(root);
    cout<<diameter(root);
    return 0;
}