#include<iostream>
using namespace std;
class queue
{

int *arr;
int front,rear;
int size;



public:
queue(int n){
    arr=new int[n];
    front =-1;
    rear=-1;
    size=n;



}
bool isempty(){

    return front==-1;
}
bool isfull(){
    return (rear+1)%size==front;

}
void push(int x){
    if(isempty()){
        cout<<"pushed"<<" "<<x<<endl;
        front=rear=0;

        arr[0]=x;

    }else if(isfull()){
        cout<<"overflow"<<endl;
        return ;
    }else 
    {
        rear=(rear+1)%size;
        arr[rear]=x;
          cout<<"pushed"<<" "<<x<<endl;

    }



}
void pop()
{
if(isempty()){
    cout<<"underflow"<<endl;
    return ;

}
else 
{

    if(front==rear)
    {cout<<"poped"<<" " <<arr[front]<<" "<<endl;
        front=-1;
        rear=-1;

    }
    else 
    {  cout<<"poped"<<" "  <<   arr[front]<<endl;
        front=(front+1)%size;
    }
}



}
int start(){



    if(isempty()){
        cout<<"emptyqueue"<<endl;
        return -1;
    }
    else return arr[front];

}





};
int main(){

queue q(5);
q.push(1100);
q.push(100);
q.push(12200);
q.push(12222100);
q.push(119579000);
q.pop();
q.pop();
q.push(14);


}
