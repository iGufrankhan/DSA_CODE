#include<iostream>
using namespace std;

int  fact(int n ){
    int power=1;
for(int i=2;i<=n;i++){

power=power*i;


}

return power ;


} int main(){



    int n;
    cout<<"enter the value";
    cin>>n;
    
    int p=fact(n);
    cout<<p<<endl;
    return 0;
}