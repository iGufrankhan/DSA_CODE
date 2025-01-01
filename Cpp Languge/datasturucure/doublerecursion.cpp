#include<iostream>
using namespace std;
class node{



public:
int text;
node * next;
node*prev;
node(int value){
   text=value;
   next=NULL;
   prev=NULL;


}

};
node *create(int arr[],int index,int size,node* back){
    if(index==size){
        return NULL;
    }
    node * temp;
    temp=new node(arr[index]);
    temp->prev=back;
    temp->next=create(arr,index+1,size,temp);
    

    return temp;
}
int main(){
    
    node *head=NULL;
   
  int arr[5];
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }
head=create(arr,0,5,NULL);




  node *temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->text<<" ";
    temp=temp->next;
  }
    }
  