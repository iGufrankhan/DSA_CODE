#include<iostream>
#include<queue>
using namespace std;


void dip(queue<int>q){
while(!q.empty()){


    if(q.front()<0){
    cout<<q.front();
    break;}

    q.pop();
}
cout<<endl;

}

int main(){
    int arr[]={2,-3,-4,-2,7,8,9,-10};
    int n=8;
    queue<int>q;

    int k=3;
    for(int i=0;i<k-1;i++){
        q.push(arr[i]);
    }
    for(int i=k-1;i<n;i++){
        q.push(arr[i]);
        dip(q);
        q.pop();

    }
}