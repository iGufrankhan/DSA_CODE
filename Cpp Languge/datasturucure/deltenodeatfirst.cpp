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
   int k;
   cin>>k;
  int arr[k];
  for(int i=0;i<k;i++){
    cin>>arr[i];
  }
head=create(arr,0,k);
//delete the first node 
if(head!=NULL){
    node * temp;
    temp=head;
    head=head->next;
    delete temp;
}



  node *temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->text<<" ";
    temp=temp->next;
  }
    }