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
int main(){

    node *head=NULL,*tail=NULL;
 
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
   
    //if list doent exist
   
     if(head==NULL){
        head=new node(arr[i]);
          tail=head;
     }else{//exist
        node *temp;
        temp=new node(arr[i]);
       tail->next=temp;
       temp->prev=tail;
        tail=temp;
     }
}
node *temp1=head;
while(temp1){
   cout<<temp1->text<<" ";
   temp1=temp1->next;
}



}