#include<iostream>
using namespace std;

class dequeue
{
    int front ,rear,size;
    int *arr;

    public :

    dequeue(int n){


        size=n;
        front =rear=-1;
        arr=new int[n];
    }

    bool is_empty(){
        
        return front==-1;
    }
    bool is_full(){
       
        return (rear+1)%size==front;
    }


    void push_front(int x){
        if(is_empty()){
            front=rear=0;
            cout<<"pushedfrnot"  <<x<<  "dequeue"<<endl;
            arr[front]=x;
            return ;
        }
        else if(is_full()){
            cout<<"fullhai que"<<endl;
            return ;
        }else {

            front=(front-1+size)%size;
           cout<<"pushedfront"  <<x<<  "toqueue"<<endl;
            arr[front]=x;
            return ;

        }


    }
void push_back(int x){
    if(is_empty()){
            front=rear=0;
              cout<<"pushedback"  <<x<<  "toqueue"<<endl;
            arr[front]=x;
            return ;
        }
        else if(is_full()){
            return ;
        }else {

            rear=(rear+1)%size;
              cout<<"pushedback"  <<x<<  "toqueue"<<endl;
            arr[rear]=x;
            return ;

        }


}
void pop_front(){

    if(is_empty()){
        return ;

    }
    else {

if(front==rear){
    cout<<"popodefront" <<arr[front] <<endl;
    front=rear=-1;
}
else {
    cout<<"popodefromt front "  <<arr[front] <<endl;
    front=(front+1)%size;

}


    }
}

void pop_back(){
    
    if(is_empty()){
        return ;

    }
    else {

if(front==rear){
    cout<<"popodeback "<<arr[rear] <<endl;
    front=rear=-1;
}
else {
    cout<<"popodeback "<<arr[rear] <<endl;
    rear=(rear-1+size)%size;

}


    }
}


int start(){
if(is_empty()){
    return -1;

}


else 
     return arr[front];





}
int end(){
    if(is_empty()){
        return -1;

    }
    else return arr[rear];

}

};


int main(){

dequeue d(5);
d.push_front(9);
d.push_back(2);
d.push_front(1);
d.push_back(8);

cout<<d.start()<<endl;




}