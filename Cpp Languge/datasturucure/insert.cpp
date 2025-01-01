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



int main(){

    node *head;
  head=NULL;
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
   
    //if list doent exist
   node *tail=NULL;
     if(head==NULL){
        head=new node(arr[i]);

     }else{//exist
        node *temp;
        temp=new node(arr[i]);
       temp->next=head;
        head=temp;
     }
}
node *temp=head;
while(temp){
   cout<<temp->text<<" ";
   temp=temp->next;
}



}