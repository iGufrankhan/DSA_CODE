#include<iostream>
using namespace std;

class node {
    public :
    int text;
    node * next;
    node(int val){
        text=val;
        next=NULL;
    }
    void disp(){
        cout<<text<<" "<<next<<" ";
    }
};
int main(){
    node *head;
    head=new node(4);
    cout<<head->text<<endl;
    cout<<head->next<<endl;
   


}