// C++ program to demonstrate the
// multiset::crbegin() function
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main() {

	int arr[] = { 14, 10, 15, 11, 16, 13 };

	// initializes the set from an array
	multiset<int> s(arr, arr + 6);

	// prints all elements in set
	for (auto it = s.crbegin(); it != s.crend(); it++)
		cout << *it << " ";

	return 0;

} // End driver
