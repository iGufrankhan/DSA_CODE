#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Distance(const string& a, const string& b) {
    int cnt = 0;
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) {
            cnt++;
        }
    }
    return cnt;
}

int sliding(int n, int m, const string& a, const string& b) {
    int mini= m; 
    for (int i = 0; i <= n - m; ++i) {
        string suba= a.substr(i, m);
        int currentDistance = Distance(suba, b);
        mini = min(mini, currentDistance);
    }
    return mini;
}

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a>> b;
        
        
        int ans = sliding(n,m,a,b);
        
        
        cout << ans << endl;
    }
    
    return 0;
}
