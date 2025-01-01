#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr(5);
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    ofstream gufs;
    gufs.open("zero.text");
    gufs<<"pragyat rishita love each other\n";
    for(int i=0;i<5;i++){
        gufs<<arr[i]<<" ";
    };
gufs.close();


}