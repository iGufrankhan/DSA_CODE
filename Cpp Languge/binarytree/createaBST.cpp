#include<iostream>
using namespace std;
class node
{

    public:
    int data;
    node * left,*right;


    node(int val){
        data=val;
        left=right=NULL;
    }
};

// void inorder(node *root){

//     if(root==NULL)return;

    
//     inorder(root->left);
//     cout<<root->data<<" ";
// inorder(root->right);
// }
node *bst(node *root,int tar ){
    if(!root){
        node *temp=new node(tar);
        return temp;

    }
    if(root->data>tar){
        root->left=bst(root->left,tar);
    }
    else root->right=bst(root->right,tar);
    return root;
}
void inorder(node *root){

    if(root==NULL)return;

    
    inorder(root->left);
    cout<<root->data<<" ";
inorder(root->right);


}
int main(){


    int arr[]={6,3,17,5,11,18,2,1,20,14};
    node * root=NULL;
for(int i=0;i<10;i++){
    root=bst(root,arr[i]);
}

inorder(root);

}
