#include<iostream>
using namespace std;
int main(){


    string s;
    cin>>s;
    string b;
    cin>>b;
    int n=s.size(),m=b.size();
    int first=0,second=0;
    for(int i=0;i<=n-m;i++){
        first=i;second=0;
        while(second<m)        {

            if(s[first]==b[second])
            {
                first++;second++;
            }
            else {
                break;
            }
        }
        if(second==m)
        cout<<first-second+1;
    }

}