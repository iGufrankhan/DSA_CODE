#include<iostream>
using namespace std;
int main(){
    int arr[4]={4,-6,2,8};
    int maxi=INT16_MIN;
    int pre=0;
    for(int i=0;i<4;i++){
        pre+=arr[i];
        maxi=max(maxi,pre)
        ;
        if(pre<0){
            pre=0;
        }
    }
    cout<<maxi;

}