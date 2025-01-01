#include<iostream>
#include<string>
using namespace std;
 string removeOccurrences(string s, string part) {
       string temp="";
       int l=0;

        for(int i=0;i<s.size();i++){
            if(s[i]==part[0]){
                int j=0;
                int k=i;
                while(k<s.size()&&j<part.size()){
                    if(s[k]==part[j]){
                       
                        k++;
                        j++;
                    }if(j==part.size())continue;
                }
            }else temp[l]=s[i];
            l++;

        }
        return temp;
    }
    int main(){

        string tem="daabcbaabcbc";
        string part="abc";
string temp=removeOccurrences(tem,part);
for(int i=0;i<temp.size();i++){
    cout<<temp[i];
}

    }