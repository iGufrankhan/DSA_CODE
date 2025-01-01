#include <iostream>
using namespace std;

int findsum(int n) {
    int max = 2; 
    int maxSum = 0; 

   
    for (int i =2; i <= n; ++i) {
       
        int sum = (n / i) * i * (1 + n / i) / 2;
        if (sum > maxSum) {
            maxSum = sum;
          max = i;
        }
    }

    return max;
}

int main() {
    int t;
    cin >> t; 

    while(t--){
        int n;
        cin >> n;

       
        cout << findsum(n) << endl;
    }

    return 0;
}
