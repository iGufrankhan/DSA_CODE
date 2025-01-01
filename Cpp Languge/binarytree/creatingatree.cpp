#include<iostream>
#include<queue>
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
int main(){
int x;
cout<<"enter the rrot"<<endl;
cin>>x;
int first,second;
node * root=new node(x);


queue<node*>q;
q.push(root);

while(!q.empty()){

node *temp=q.front();
q.pop();
cout<<"enter the left value"<<endl;
cin>>first;
if(first!=-1){
    temp->left=new node(first);
    q.push(temp->left);
}

cout<<"enter the right value"<<endl;
cin>>second;
if(second!=-1){

    temp->right=new node(second);
    q.push(temp->right);
}





}


}