



#include<iostream>
using namespace std;
int main(){
int size,ans,key,count=0;
cout<<"enter size of array\n";
cin>>size;
int a[20];
cout<<"enter elements in array"<<endl;
for(int i=0;i<size;i++){
    cin>>a[i];
}
cout<<"enter value of key"<<endl;
cin>>key;
for(int i=1;i<=30;i++){
    for(int j=0;j<size;j++){
        if(a[j]==i){
            break;
        } 
         if(a[j]>i){
        //count++;
       // if(count==key)
           ans=i;
           cout<<ans<<" ";
           break;
         }
         }
    } 
    }
