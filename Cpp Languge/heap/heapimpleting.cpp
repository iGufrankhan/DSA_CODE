#include<iostream>
using namespace std;

void  Heapify(int arr[],int index,int size){



    int largest=index;
    int left=2*index+1;
    int right=2*index+2;
    if(left<size&&arr[left]>arr[largest])largest=left;
    if(right<size&&arr[right]>arr[largest])largest=right;
    if(largest!=index){
        swap(arr[index],arr[largest]);
        Heapify(arr,largest,size);
    }
}
void Buildmaxheap(int arr[],int n){

for(int i=n/2-1;i>=0;i--){
    Heapify(arr,i,n);
}

}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[]={43,2,13,456,23,78,89,6,1,0};
    Buildmaxheap(arr,10);
    print(arr,10);

}