#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,t = -1;
	cin >> a >> b >> c;

	// 4 lines of codes
	t = a;
	a = b;
	b = c;
	c = t;
	cout << a << ' ' << b << ' ' << c;
	return 0;
}
// 