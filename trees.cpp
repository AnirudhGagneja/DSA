#include <iostream>
#include <vector>
#include <queue>
#include<map>
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
//using preorder
static int idx=-1;
    node* buildtree(vector<int>preorder){
        idx++;
        if(preorder[idx]==-1)return NULL;
        node* root = new node(preorder[idx]);
        root->left = buildtree(preorder);
        root->right = buildtree(preorder);

        return root;
    }
//traversal
    void preorder(node* root){
        if (root==NULL)
        {
            return;
            /* code */
        }
        
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
        // return;
    }
    //inorder
    void inorder(node* root){
        if(root==NULL)return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
    //postorder
    void postorder(node* root){
        if(root==NULL)return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
    //level order (BFS)
    void levelorder(node* root){
        queue<node*>q;
        q.push(root);
        q.push(NULL);//to send it in next line after every level
        while(q.size()>0){
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
             
            cout<<temp->data<<" ";
            if(temp->left!=NULL)q.push(temp->left);
            if(temp->right!=NULL)q.push(temp->right);
        }

    }
    int height(node* root){
        if(root==NULL)return 0;

        int leftheight = height(root->left);
        int rightheight = height(root->right);
        
        return max(leftheight , rightheight)+1;
    }
    int countnodes(node* root){
        if(root==NULL)return 0;
        int leftsub = countnodes(root->left);
        int rightsub = countnodes(root->right);
        return leftsub+rightsub+1;
    }
    int sumofnodes(node*root){
        if(root==NULL)return 0;
        int leftsub = sumofnodes(root->left);
        int rightsub = sumofnodes(root->right);

        return leftsub + rightsub + root->data;
    }
    bool isidentical(node*p , node*q){
        if(p==NULL||q==NULL){
            return p==q;
        }
        bool leftsub = isidentical(p->left , q->left);
        bool rightsub = isidentical(p->right , q->right);
        
        return leftsub && rightsub && p->data == q->data;
    }
    bool issubtree(node* p , node*q){
        if(p==NULL || q==NULL){
            return p==q;
        }
        if(p->data == q->data && isidentical(p,q)){
            return true;
        }
        bool left = issubtree(p->left,q);
        bool right = issubtree(p->right,q);
        return (left || right);

    }
    int diameteroftree(node* root){
        if(root==NULL)return 0;
        int len = height(root->left) + height(root->right);
        return max(max(len,diameteroftree(root->left)),diameteroftree(root->right));
    }
    void topview(node* root){
    queue<pair<node*,int>> q;
        map<int,int>m;
        q.push({root,0});
        while(q.size()>0){
            node* curr = q.front().first;
            int currval = q.front().second;
            q.pop();
            if(m.find(currval)==m.end()){
                m[currval] = curr->data; 
            }
            if(curr->left!=NULL)q.push({curr->left,currval-1});
            if(curr->right!=NULL)q.push({curr->right,currval+1});
        }
        for(auto i:m){
            cout<<i.second<<" ";
        }
}
int main() {
    vector<int> preorderarr={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root = buildtree(preorderarr);
    idx=-1;
    vector<int> preordersubarr={1,3,-1,-1,4,5,-1,-1,-1};
    node* q = buildtree(preordersubarr);
    cout<<diameteroftree(root);
    // topview(root);

    return 0;
}