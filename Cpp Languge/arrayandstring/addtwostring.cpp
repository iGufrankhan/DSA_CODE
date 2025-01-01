#include<iostream>
#include<vector>
using namespace std;

int main(){


    string num1;
    cin>>num1;
    string num2;
    cin>>num2;
string ans;
int in=ans.size()-1;

    int index=num1.size()-1,index2=num2.size()-1;
    int sum=0;
    int carry=0;
   
    while(index2>=0){
sum=(num1[index]-'0')+(num2[index2]-'0')+carry;
carry =sum/10;
char c='0'+sum%10;
ans+=c;

index2--,index--;

    }
    while(index>=0){
        sum=(num1[index]-'0')+carry;
        carry=sum/10;
        char c='0'+sum%10;
        ans+=c;
        index--;
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i];
    }
    return 0;

}