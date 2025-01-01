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
    return rear==size-1;

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
        rear+=1;
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
        front+=1;
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





//q.pop();

int x=q.start();
if(!q.isempty()){
    cout<<x<<endl;
}
}