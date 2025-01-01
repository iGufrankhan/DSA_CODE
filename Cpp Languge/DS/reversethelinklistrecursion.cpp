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
node *create(int arr[],node *curr,node *prev){
    if(curr==NULL)
      return prev;
      node *furr=curr->next;
      curr->next=prev;
      create(arr ,furr,curr);

    
}
int main(){
    
    node *head=NULL;
   
  int arr[5];
  for(int i=0;i<5;i++){
    cin>>arr[i];
  }
head=create(arr,head,NULL);




  node *temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->text<<" ";
    temp=temp->next;
  }
    }