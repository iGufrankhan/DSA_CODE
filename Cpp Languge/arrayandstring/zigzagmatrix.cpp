#include <bits/stdc++.h>
using namespace std;

int main() {

	
	int arr[100][100];
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        cin>>arr[i][j];
	    }
	}
	
	for(int i=0;i<n;i++){
	    
	    if(i%2==0){
	        for(int j=0;j<m;j++){
	            cout<<arr[i][j]<<" ";
	        }
	    }else{
	        for(int j=m-1;j>=0;j--){
	            cout<<arr[i][j]<<" ";
	        }
	    }
	}
return 0;
}
