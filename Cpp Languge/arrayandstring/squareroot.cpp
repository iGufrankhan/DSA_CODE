#include<iostream>
using namespace std;

int sqrt(int x){
if(x<2)
return x;
int start=1,end =x,mid,ans;
while(start<=end){


    mid=start+(end-start)/2;
    if(mid=x/mid){
        ans=mid;
        break;
    }else if (mid<x/mid){
    ans=mid;
    start=mid+1;}
    else end=mid-1;
}

return ans;


}
int main(){



  
    int x;
    cin>>x;
    cout<<sqrt(x);

}