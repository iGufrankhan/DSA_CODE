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


// node *create(node *head,int el,int k){int cnt=0;//insertion at given position in single link list
//    if(head==NULL){
//       if(k==1){
//          return new node(el);
      
//       }else return NULL;
//    }
//    if(k==1){
//       node* temp=new node(el);
//       return temp;
//    }else 
//      cnt=0;node *temp=head;
//    while(temp!=NULL){
//       cnt+=1;
//    if(cnt==k-1){
//       node * temp1=new node (el);
//       temp1->next=temp->next;
//       temp->next=temp1;}

//       else temp=temp->next;

//    }
// }

};
int main(){
      node *head;
  head=NULL;

for(int i=0;i<5;i++){
    int nums;
    cin>>nums;
    //if list doent exist
     if(head==NULL){
        head=new node(nums);

     }else{//exist
        node *temp;
        temp=new node(nums);
        temp->next=head;
        head->prev=temp;
        head=temp;
     }
}






node *temp=head;
while(temp!=NULL){
   cout<<temp->text<<" ";
   temp=temp->next;
}

}
