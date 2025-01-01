#include<iostream>
using namespace std;
bool name(int n){
if(n<2)
return 0;
for(int i=2;i<n;i++){


    if(n%i==0)
    return 0;
}

return 1;



}
int main(){



    int n;
    cin>>n;
  int p=  name(n);
cout<<p;
    return 0;
}