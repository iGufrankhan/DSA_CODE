#include <iostream>
#include <vector>
using namespace std;

vector<int> constructBeautifulArray(int n) {
    vector<int> a(n, 1); // Initialize array with all elements as 1
    
    // Iterate over each divisor k of n
    for (int k = 1; k <= n; ++k) {
        int sum_ak = 0;
        for (int j = k; j <= n; j += k) {
            sum_ak += a[j - 1]; // j-1 because arrays are 0-indexed
        }
        a[k - 1] += (k - (sum_ak % k)) % k; // Adjust a[k-1] to make sum_ak divisible by k
    }
    
    return a;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> result = constructBeautifulArray(n);
        
        // Print the result array for this test case
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
