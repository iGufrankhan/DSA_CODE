#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int val){
        data=val;
        next=NULL;
    }
};
class stack
{
    node * top;
    int size;

    public:
    bool flag=1;
    stack(){
        top=NULL;
        size=0;

    }
    void push(int val){
        node *temp=new node(val);
        if(temp==NULL){
            cout<<"stackoverflow";
        }else {
        temp->next=top;
        top=temp;
        size++;
        cout<<"pushhed"<<" "<<top->data<<"stack\n";
        flag=0;
        }

    }
    void pop(){
        if(top==NULL){
            cout<<"stackunderflow\n";
                }

     else {   node *temp=top;
     cout<<"poped"<<" "<<top->data<<"stack from\n";
        top=top->next;
        delete temp;
        
     }
     if(top==NULL)flag=1;
    }
int peek(){
    if(top==NULL){
        cout<<"empty\n";
        return -1;
    }else 
    return top->data;
}

bool empty(){
    return top==NULL;

}
int size1(){
    return size;

}

};
int main(){
stack s;
s.push(-19);

// s.push(2);
// s.push(3);
// s.push(3);
// s.push(5);
// s.push(6);
// s.pop();
// s.push(18);
 int value=s.peek();

 if(s.flag==0)
 cout<<value<<endl;//peak elemebnt;
// cout<<s.empty()<<endl;
// cout<<s.size1()<<endl;
 }