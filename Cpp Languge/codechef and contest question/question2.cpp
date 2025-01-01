#include <iostream>
#include<math.h>
using namespace std;

int findsum(int n) {
    int maxi = 0; 
    int maxsum = 0; 

   
    for (int i =2; i <= n; ++i) {
       
        int sum = (n / i) * i * (1 + n / i) / 2;
          if(sum>maxsum){
          maxsum=sum;
          maxi=i;}
        
    }

    return maxi;
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

