#include<iostream>
#include<exception>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    try{
    if(b==0)
    throw 10;
     int c=a/b;
     cout<<c<<endl;
    }
    catch(int e){
        cout<<"the exectional error:"<<e<<endl;
    }
}