#include <bits/stdc++.h>
using namespace std;
#define llu long long int
#define FOR(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
int main() { 
	int x;
	cin >> x;
	cout << x/360 << ' ';
	x%=360;
	cout << x/30 << ' ';
	x%=30;
	cout << x;
}
