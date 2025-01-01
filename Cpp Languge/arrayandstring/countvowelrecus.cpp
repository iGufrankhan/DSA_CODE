#include<iostream>
using namespace std;


int count(string str,int index){

    if(index==-1)
    return 0;


    if(str[index]=='a'||str[index]=='i'||str[index]=='u'||str[index]=='o'||str[index]=='e'||str[index]=='A'||str[index]=='O'||str[index]=='I'||str[index]=='E'||str[index]=='U')
    return 1+count(str,index-1);
    else return count(str,index-1);

}

int main(){


    string str;
    cin>>str;
    int index=str.size()-1;
    cout<<count(str,index);
}