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

}