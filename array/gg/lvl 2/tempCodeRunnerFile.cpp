// C++ program showing Head Recursion

#include <bits/stdc++.h>
using namespace std;

// Recursive function
void fun(int n)
{
	if (n > 9) {

		// First statement in the function
		fun(n + 1);

		cout <<" "<< n;
	}
}

// Driver code
int main()
{
	int x = 3;
	fun(x);
	return 0;
}

// this code is contributed by shivanisinghss2110
