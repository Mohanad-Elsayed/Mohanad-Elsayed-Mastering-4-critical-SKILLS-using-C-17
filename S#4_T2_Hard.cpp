#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b; 
	cin >> a >> b;
	int is_one     = (b + 1) / 2;   // should be 0 if b = -1, 1 if b = 1;
	int is_neg_one = ((b * -1) + 1) /2; // should be 1 if b = -1, 0 if b = 1;
	
	cout << is_one * a * a << ' ' << is_neg_one * (2 * a + 1);
	return 0;
}
