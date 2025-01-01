
#include <bits/stdc++.h>
using namespace std;


vector<int> duplicates(int arr[], int n)
{

	vector<int> ans;


	for (int i = 0; i < n; i++) {
		int index = arr[i] % n;
		arr[index] += n;
	}

	for (int i = 0; i < n; i++) {
		if ((arr[i] / n) >= 2)
		ans.push_back(i);
	}if(ans.size()==0 ) 
	return{ -1};


return ans;
}


int main()
{
	
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
	
	cout << "The repeating elements are: \n";


	vector<int> ans = duplicates(arr, n);
	for (auto x : ans)
		cout << x << " ";

	return 0;
}
