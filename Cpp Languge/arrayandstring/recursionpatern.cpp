
#include <iostream>
using namespace std;


void printn(int num,int val)
{
	
	if (num == 0)
		return;
	cout << val;

	
	printn(num - 1,val-1);
}


void pattern(int n, int i,int j)
{
	// base case
	if (j == 0)
		return;
	printn(n,5);
	cout << endl;

	// recursively calling pattern()
	pattern(n-1, i,j-1);
}

// driver function
int main()
{
	int n = 5;
	pattern(n, n,n);
	return 0;
}
