#include<iostream>
#include<vector>
using namespace std;

int main(){


    int n;
    cin>>n;
    while(n--){

int a;
cin>>a;
 vector<int>arr(a);
 for(int i=0;i<a;i++){
    cin>>arr[i];
 }

 int i=1,j=a-1;int k=0;bool found=false;
 while(i<j){


    if(arr[k]%arr[i]==0||arr[k]%arr[j]==0){
     found=true;}



     k++;i++;j--;
 }

if(found)cout<<"YES"<<endl;
  else cout<<"N0"<<endl;


    }
}