#include<iostream>
#include<vector>
using namespace std;

string search(string s){


    vector<char>lower(26,0);
    vector<char>upper(26,0);
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]=='#';
        }else if(s[i]=='A'||s[i]=='E'||s[i]=='U'||s[i]=='I'||s[i]=='O'){
            upper[s[i]-'A']++;
            s[i]=='#';

    }
    }
    string vowel;
    for(int i=0;i<26;i++){
        char c='A'+i;
        while(upper[i]){
            vowel+=c;
            upper[i]--;
        }
    }
    for(int i=0;i<26;i++){
        char c ='a'+i;
        while(lower[i]){

            vowel+=c;
            lower[i]--;

        }
        
    }
    

    int first= 0,second=0;

    while(second<vowel.size()){

        if(s[first]=='#'){

        s[first]=vowel[second];
        second++;}
        first++;

    }
    return s ;
}
int main(){

string s;
cin>>s;

cout<<search(s);
return 0;



}