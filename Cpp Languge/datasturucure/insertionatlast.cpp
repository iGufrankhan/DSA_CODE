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
    node *head=NULL;
    node *tail=NULL;
    for(int i=0;i<4;i++){
        int nu;
        cin>>nu;
        if(head==NULL){
        
            head=new node(nu);
            tail=head;
        }  
        else {
        tail->next=new node(nu);
tail=tail->next;
    }
     
    }

  node  *temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->text<<" ";
    temp=temp->next;
  }


}