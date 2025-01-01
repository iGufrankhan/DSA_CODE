#include<iostream>
using namespace std;

class Node
{

    public:
    int data,height;
    Node * left,*right;

    Node(int value){
        data=value;
        height=1;
        left=right=NULL;
    }
};
 int getheight(Node * root){ 
    if(!root)return 0;
  
  return root->height;
    
}
int getbalance(Node * root){
     return getheight(root->left)-getheight(root->right);
}
Node * rightrotation(Node * root){

Node * child=root->left;
Node *childRight=child->right;

child->right=root;
root->left=childRight;

root->height=1+max(getheight(root->left),getheight(root->right));
child->height=1+max(getheight(child->left),getheight(child->right));

return child;

}

Node *leftrotation(Node * root){

Node * child=root->right;
Node *childLeft=child->left;

child->left=root;
root->right=childLeft;

root->height=1+max(getheight(root->left),getheight(root->right));
child->height=1+max(getheight(child->left),getheight(root->right));

return child;

}




Node *insert(Node *root,int val){

if(!root)
return new Node(val);
else if(root->data>val)
root->left=insert(root->left,val);
else if(root->data<val)
root->right=insert(root->right,val);
else return root;

root->height=1+max(getheight(root->left),getheight(root->right));


int balance=getbalance(root);

//left left
if(balance>1&&val<root->left->data)
 return rightrotation(root);
//right right
else if(balance<-1&&val>root->right->data)
 return leftrotation(root);

  //letf right
 else if(balance>1&&val>root->left->data)
{
   root->left= leftrotation(root->left);
   return  rightrotation(root);
}
//right left
else if(balance<-1&&val<root->right->data)
{
   root->right= rightrotation(root->right);
  return   leftrotation(root);
}

else{
    return root;

}
}
void in(Node * root){
    if(!root)return;

    in(root->left);
    cout<<root->data<<" ";
    in(root->right);
}

void pre(Node* root){
    if(!root)return ;
    cout<<root->data<<" ";
    pre(root->left);
    pre(root->right);

}
int main(){
Node *root=NULL;

root=insert(root,20);
root=insert(root,10);
root=insert(root,30);
root=insert(root,40);
root=insert(root,50);
root=insert(root,6);
root=insert(root,90);
root=insert(root,80);

pre(root);
cout<<"\ninorder"<<" ";
in(root);
}