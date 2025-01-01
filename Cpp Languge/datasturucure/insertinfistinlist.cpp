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
   
    
        int nu;
        cin>>nu;
        if(head==NULL){///first link exist

        
            head=new node(nu);
          
        } int d;cin>>d;
                //add first in list 
            node *temp1=new node(d);
temp1->next=head;
head=temp1;
    
        

     
    

  node  *temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->text<<" ";
    temp=temp->next;
  }


}