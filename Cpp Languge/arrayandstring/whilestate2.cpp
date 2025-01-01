#include<iostream>
using namespace std;
int main(){
int  n;
cout<<"enter the value:";
cin>>n;
 int sum=0;
 int count=1;
while(count<=n){

    sum+=count;
    count+=1;
}
cout<<"sum of 1 to "<<n<<" = l"<<sum<<endl;
return 0;
    
}