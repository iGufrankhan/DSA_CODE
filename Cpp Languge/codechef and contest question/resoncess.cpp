#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    sort(heights.begin(), heights.end());

    long long ways = 0;
    for (int i = 0; i < n; ++i) {
        int j = i + 1;
        while (j < n && heights[j] - heights[i] <= d) {
            ways += j - i - 1; // count all pairs between i and j
            ++j;
        }
    }

    cout << ways << endl;

    return 0;
}
