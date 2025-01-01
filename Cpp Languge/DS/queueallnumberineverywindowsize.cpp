#include<iostream>
#include<queue>
using namespace std;


void dip(queue<int>q){
while(!q.empty()){
    cout<<q.front();
    q.pop();
}
cout<<endl;

}

int main(){
    int arr[]={3,6,2,7,8,11};
    int n=6;
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