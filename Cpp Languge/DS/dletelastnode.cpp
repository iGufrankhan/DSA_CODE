#include<iostream>
using namespace std;
class node{



public:
int text;
node * next;
node(int value){
   text=value;
   next=NULL;


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
//delete the last node 
//if node does not exist
if(head!=NULL){//does not exist
    if(head->next==NULL){//single node exist
        node *temp=head;
        head=NULL;
        delete temp;
    }

else {//more node presente;

node *cur=head;
node * guf=NULL;
while(cur->next!=NULL){
    guf=cur;
  cur=cur->next;
}
delete cur;
guf->next=NULL;
} }
  node *temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->text<<" ";
    temp=temp->next;
  }
    }