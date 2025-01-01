#include <iostream>
#include <vector>
using namespace std;
int results(vector<int>&arr,int n)
{	
	long long sum = 0;
	long long cnt = 0;
	bool found = 0;
	int maxi = -1;
	for(int i=0;i<n;i++)
	{
		maxi = max(arr[i],maxi);
		if(arr[i] == sum){	
			cnt++;
			found = 1;	
		}
		else if(sum + arr[i] == 2*maxi)
		{
			cnt++;
			found = 1;
		}
		else
			found = 0;
		sum+=arr[i];	
    }
	return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
    int ans1=results(arr,n);
    cout<<ans1<<endl;}
       
    return 0;
}

