
    
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int max_diff(int a[], int n)
{
    int maxdifference = a[1] - a[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[j] - a[i] > maxdifference)
                maxdifference = a[j] - a[i];
         }
     }
     return maxdifference;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout << "Maximum difference : ";
    cout<< max_diff(arr, n);
    return 0;
}