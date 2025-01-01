
#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int a[], int b[], int n, int m) 
{
	

	map<int, int> mp;
	

	for(int i = 0; i < n; i++)mp[a[i]]++;
	
	
	for(int i = 0;i < m;i++)mp[b[i]]++;

	

	for(auto j: mp)
	{
		for(int i=0; i<j.second;i++)cout<<j.first<<" ";
	}
}

int main()
{ 
	int a[100];
	int  b[100] ;
	int n;
	int m;

	for(int i=0;i<n;i++){

		cin>>a[i];

	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}


	
	
	mergeArrays(a, b, n, m);
	
	return 0;
}

