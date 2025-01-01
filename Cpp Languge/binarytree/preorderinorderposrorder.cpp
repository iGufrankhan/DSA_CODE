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


void preorder(node *root){

    if(root==NULL)return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root){

    if(root==NULL)return;

    
    inorder(root->left);
    cout<<root->data<<" ";
inorder(root->right);
}
void postorder(node *root){

    if(root==NULL)return;

    
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<" ";
}
node *binarytree(){
    int x;
    cin>>x;
    if(x==-1)return NULL;

    node * temp=new node(x);
cout<<"enter the left child"<<endl;
    temp->left=binarytree();
    cout<<"enter the right child"<<endl;
    temp->right=binarytree();
    return temp;
}

int main(){

cout<<"enter the root node: ";
    node *root;
     root=binarytree();
     cout<<"postorder\n";
     preorder(root);
     cout<<"\ninorder\n";
     inorder(root);
     cout<<"\npostorder\n";
     postorder(root);

}