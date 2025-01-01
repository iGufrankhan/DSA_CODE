#include<iostream>
#include<vector>

using namespace std;
int main(){

int num;
cin>>num;

vector<int>ans(1,1);
while(num>1){





    int carry =0,res;
    for(int i=0;i<ans.size();i++){


        res=ans[i]*num+carry;
        carry=res/10;
        ans[i]=res%10;

    }
    while(carry){

        ans.push_back(carry%10);
        carry/=10;

    }num--;
}
for(int i=ans.size()-1;i>=0;i--){
    cout<<ans[i];
}

}