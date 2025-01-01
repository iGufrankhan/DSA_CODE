#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){

int n,m;
cin>>n>>m;
vector<vector<int> >matrix(n,vector<int>(m,6));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<matrix[i][j]<<" ";
    }cout<<endl;
}
cout<<"rows="<<matrix.size()<<endl;
cout<<matrix[0].size();
return 0;
}