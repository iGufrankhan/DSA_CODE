// C++ code to demonstrate printing pattern of numbers

#include <iostream>
using namespace std;

// function to print a row
void print_row(int no, int val)
{
	// base case
	if (no == 0)
		return;
	cout << val << " ";

	// recursively calling print_row()
	print_row(no - 1, val+1);
}

// function to print the pattern
void pattern(int n, int num)
{
	// base case
	if (n == 0)
		return;
	print_row(num - n + 1, num - n + 1);
	cout << endl;

	// recursively calling pattern()
	pattern(n - 1, num);
}
int main()
{
	int n = 5;
	pattern(n, n);
}
