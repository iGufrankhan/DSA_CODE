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
node *create(int arr[],int index,int size,node *prev){
    if(index==size){
        return prev;
    }
    node * temp;
    temp=new node(arr[index]);
    temp->next=prev;
   return  create(arr,index+1,size,temp);
    

 
}
int main(){
    
    node *head=NULL;
   
  int arr[5];
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }
head=create(arr,0,5,head);



  node *temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->text<<" ";
    temp=temp->next;
  }
    }
  