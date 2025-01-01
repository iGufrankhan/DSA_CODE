#include<iostream>

using namespace std;
class node
{

public:
int data;
node *next;

node(int value){
data=value;
next=NULL;


}





};



class Queue
{
    node *front;
    node*rear;

    public:
    Queue(){
        front=rear=NULL;
    }



    bool isempty(){
        return front==NULL;
    }




    void push(int x){
   
   
    if(isempty())
    {
        cout<<"pushed"<<" "<<x<<endl;
        front=new node (x);
        rear=front;
        return ;
    }
else 
{
    rear ->next=new node (x);
    cout<<"pushed"<<" "<<x<<endl;
    rear=rear->next;
 

}

    }



    void pop(){



        if(isempty()){
            cout<<"emprty"<<endl;
            return ;

        }
        else 
        {
            cout<<"popped"<<" "<<front->data<<" "<<endl;
            node *temp=front;
            front=front->next;
            delete temp;
        }
    }
    int start(){

        if(isempty()){
            cout<<"emptyis"<<endl;
            return -1;
        }
        else return front->data;
    }
};


int main(){

Queue q;
q.push(13);
q.push(25);
q.push(90);
q.push(189);
q.pop();





}