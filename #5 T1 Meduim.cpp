#include <bits/stdc++.h>
using namespace std;
#define llu long long int
#define FOR(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
int main() { 
	int x;
	cin >> x;
	// 1   %2
	bool is_even1 = !(x%2); // works with all numbers
	// 2   /2
	bool is_even2 = ((double)x/2 - x/2) <= 0.1;
	// 3   %10
	bool is_even3 = !((x%10)%2);
	
	cout << is_even1 << ' ' << is_even2 << " " << is_even3;
}
