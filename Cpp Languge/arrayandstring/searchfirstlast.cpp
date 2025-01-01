#include<iostream>
using namespace std;



int  firtlast(int arr[],int n,int key){

    int start=0,end=n-1,first =-1;
    int mid;
    while(start<=end){


        mid=(start+(end-start))/2;
        if(arr[mid]==key){
            first=mid;            //last=mid

            end=mid-1;
         break;   }
        else if(arr[mid]<key){
        start=mid+1;}//end=mid-1;
        else {
end=mid-1;}
    } return first; 
}
int last(int arr[],int n,int key){
int start=0,end=n-1,last=-1,mid;
while(start<=end){
     mid=(start+(end-start))/2;
        if(arr[mid]==key){
            last=mid;
            start=mid+1;
         break;   }
        else if(arr[mid]<key)
        start=mid+1;
        else 
end=mid-1;


}return last;
}




int main(){


    int arr[100];
    int n;
    cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
}int key;
cin>>key;
 cout<<firtlast(arr,n,key)<<endl;
cout<<last(arr,n,key);



return 0;

}