#include <bits/stdc++.h>
#include <iostream>

        
    
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int N, M;
        cin >> N >> M; 
        
        vector<int> Arr(N);
        vector<int> Brr(N);
        
        
        for (int i = 0; i < N; ++i) {
            cin >> Arr[i];
        }
        
        
        for (int i = 0; i < N; ++i) {
            cin >> Brr[i];
        }
        
       
        vector<int> countArr(M,0);
        vector<int> countBrr(M, 0);
        
        
        for (int i = 0; i < N; ++i) {
            int rA = Arr[i] % M;
            if (rA < 0) rA += M; 
            countArr[rA]++;
        }
        
       
        for (int i = 0; i < N; ++i) {
            int rB = Brr[i] % M;
            if (rB < 0) rB += M; 
            countBrr[rB]++;
        }
        
        int cnt = 0;
        
        
        for (int k = 0; k < M; k++) {
            int yoy = (M - k) % M;
            
            if (countArr[k] > 0 && countBrr[yoy] > 0) {
                cnt += countArr[k] * countBrr[yoy];
            }
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}
   