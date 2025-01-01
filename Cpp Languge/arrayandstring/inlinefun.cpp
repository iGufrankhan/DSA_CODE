#include<iostream>
using namespace std;


inline int get(int a,int b){return (a<b)?a:b;

}  
// gfg me inline dekh lena aur macros bhi 
int main(){


    int a=1,b=5;
    int ans=0;

    ans=(a<b)?a:b;
cout<<ans;
}