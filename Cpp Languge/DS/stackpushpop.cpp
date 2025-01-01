
#include<iostream>
using namespace std;


class stack{

    int *arr;
    int size1;
    int top;


    public:
    bool flag=1;
    stack(int s){
        size1=s;
top=-1;
arr=new int[s];

    }
    void push(int value){
        if(top==size1-1){
        cout<<"overflow\n";return ;}
        
        else top++;

        arr[top]=value;
        cout<<"pushed"<<" "<<arr[top]<<"intostack\n";
flag=0;
    }


void pop(){
    if(top==-1){
        cout<<"underflow\n";
        return ;}

        else top--;
    cout<<"popped"<<arr[top+1]<<"fromn0\n";
   if(top==-1)flag=1;
}

int peek(){//peek 
    if(top==-1){
        cout<<"empty\n";
        return -1;}

        else {
return arr[top];
        }
    
}
//tocheck empty;
bool empty(){
    
    return top==-1;

}

int size(){
    return top+1;
}

};
int main(){
stack s(5);
s.push(5);
s.pop();
s.push(-1);
int value=s.peek();
if(s.flag==0)cout<<value;

// s.push(4);
// s.push(3);
// s.push(2);
// s.push(1);
// cout<<s.peek()<<endl;
// s.pop();
// cout<<s.peek()<<endl;
// s.pop();
// cout<<s.peek()<<endl;
// cout<<s.empty()<<endl;//empty nhi ha to 0;

// cout<<s.size()<<endl; //size dega



}
