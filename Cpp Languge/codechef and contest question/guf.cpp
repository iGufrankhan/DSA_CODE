#include <iostream>
#include<vector>

using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int>ans;
  for(int i=0;i<n;i++){
      cin>>ans[i];
  }
  int cnt=0;
  int i=0,j=0;
  while(j<n){
      if(i%2==0){
          if(ans[i]==ans[j+2])
          cnt++;
      }
      else {
          if(ans[i]==ans[i+3])cnt++;
      }
      i++,j++;
  }
  
  cout<<cnt<<endl;
    
    
    
  
}