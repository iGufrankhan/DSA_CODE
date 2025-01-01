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
//insert node any point 
int x=3;
int val=40;
node * temp1=head;
x--;
while(x>1){
temp1=temp1->next;
x--;
}
node *temp2=new node(val);
temp2->next=temp1->next;
temp1->next=temp2;


  node *temp;
  temp=head;
  while(temp!=NULL){
    cout<<temp->text<<" ";
    temp=temp->next;
  }
    }
  
