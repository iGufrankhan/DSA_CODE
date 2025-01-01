#include<iostream>
using namespace std;
class node{



public:
int text;
node * next;
node *prev;
node(int value){
   text=value;
   next=NULL;
prev=NULL;

}

};
node *create(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    node * temp;
    temp=new node(arr[index]);
    temp->next=create(arr,index+1,size);
    

    return temp;
}
int main(){
    
    node *head=NULL;
   
  int arr[5];
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }
head=create(arr,0,5);
//insert node any point 
int x=3;
int val=40;



if(x==0){
    if(head==NULL){
        head=new node(1);
    }else {
        node *temp=new node(6);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}else{
node * curr=head;
while(--x){
curr=curr->next;

}if(curr->next==NULL){//last node
node *temp=new node(val);
temp->prev=curr;
curr->next=temp;
}else{
node *temp=new node(val);
temp->next=curr->next;
temp->prev=curr;
curr->next=temp;}
}

  node *temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->text<<" ";
    temp=temp->next;
    temp->next->prev=temp;
  
    }
}