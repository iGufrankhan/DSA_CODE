#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[]={1, 2, 2, 3, 1, 4, 4, 5};
    unordered_map<int,int>mp;
    for(int i=0;i<8;i++){
        mp[arr[i]]++;
    }
// for(auto& it:mp)
//     cout<<it.first<<" "<<it.second<<" "<<endl;
 ;
    }

