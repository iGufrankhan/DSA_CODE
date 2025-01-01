#include<iostream>
using namespace std;

int main(){


int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int *ptr=arr;
cout<<arr;
cout<<endl;
cout<<*arr;
cout<<ptr<<endl;
for(int i=0;i<n;i++){
    cout<<ptr[i]<<" ";
    cout<<*(arr+i);
}

}


