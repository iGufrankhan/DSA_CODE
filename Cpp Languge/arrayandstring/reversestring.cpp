#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int l=s.size();

for(int i=0;i<l/2;i++){
    swap(s[i],s[l-1-i]);
}
cout<<s;

int start=0,end=l-1;
while(start<end){
    swap(s[start],s[end]);
    start++;
    end--;

}
cout<<s;


}