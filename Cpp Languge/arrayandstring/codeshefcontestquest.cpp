#include <iostream>
#include <vector>

using namespace std;

vector<int> dp(1000001);

int findsum(int n) {
    if (n<10) return n;
    if (dp[n]) return dp[n];
    long long sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return dp[n] = findsum(sum);
}

int main() {
  
  int T;
  cin >> T;
  long long sum = 0;
  for(int i=1; i<=1000000; i++) {
    sum += findsum(i);
    dp[i] = sum;
 }
  while (T--) {
    int N;
    cin >> N;
    cout << dp[N] << endl;
}
}