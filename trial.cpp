#include <iostream>
#include <queue>
#include <map>
using namespace std;

class node{
public: 
int data;
node* left ;
node* right;
node(int val){
    data = val;
    left=right=NULL;
}

};
static int idx=-1;
node* buildtree(int preorder[]){
    idx++;
    if(preorder[idx]==-1)return NULL;
    node* root = new node(preorder[idx]);
    root->left= buildtree(preorder);
    root->right = buildtree(preorder);
    return root;
}
void preorder(node* root){
    if(root==NULL)return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);

}
void levelorder(node* root){
    queue<node*> q;
    q.push(root);
    while(q.size()>0){
        node* temp = q.front();
        q.pop();
        cout<<temp->data;
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }

}

void seplevelorder(node* root){
queue<node*> q;
q.push(root);
q.push(NULL);
while(q.size()>0){
    node* temp = q.front();
    q.pop();
    if(temp==NULL){
        if(q.size()>0){
            q.push(NULL);
            cout<<endl;
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
int sum(node* root){
    if(root==NULL)return 0;
    return sum(root->left) + sum(root->right) + root->data;
}
int ans =0;
int height(node* root){
    if(root==NULL)return 0;
    int left = height(root->left);
    int right =  height(root->right);
    ans= max(ans , left+right);
    return max( left,right)+1;
}
int diameter (node* root){
    height(root);
    return ans;
}
int main() {
   int preorderarr[] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
   node* root = buildtree(preorderarr);
   idx=-1;
//    preorderarr[0]=3;
   node* q = buildtree(preorderarr);
//    cout<<height(root);
    // preorder(root);
    // levelorder(root);
    // seplevelorder(root);
    // cout<<sum(root);
    cout<<diameter(root);
    // cout<<"working";
    // cout<<issubtree(root,q);
    // topview(root);
    return 0;
}