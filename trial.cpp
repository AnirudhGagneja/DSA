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
void topview(node* root){
    queue<pair<node* , int>> q;
    map <int,int>m;
    q.push({root ,0});
    while(q.size()>0){
        node* temp = q.front().first;
        int tempval  = q.front().second;
        q.pop();
        if(m.find(tempval) == m.end()){
            m[tempval] = temp->data;
        }
        if(temp->left!=NULL)q.push({temp->left , tempval-1});
        if(temp->right!=NULL)q.push({temp->right , tempval+1});
    }
    for(auto val: m){
        cout<<val.second<<" ";
    }
}
void kthlevel(node* root , int k){
    if(root==NULL)return;
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    kthlevel(root->left ,k-1);
    kthlevel(root->right ,k-1);

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
    // cout<<diameter(root);
    // cout<<"working";
    // cout<<issubtree(root,q);
    // topview(root);
    kthlevel(root,3);
    return 0;
}