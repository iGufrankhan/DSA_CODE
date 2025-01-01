#include<iostream>
using namespace std;
int main(){



    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int item;
    cin>>item;
    ;

    int pos=n-1;
    while((item<a[pos])&&(pos>=0)){
        a[pos+1]=a[pos];
        pos--;
    }
    a[pos+1]=item;
 for(int i=0;i<=n;i++)
    {
        cout<<a[i];

    }



}