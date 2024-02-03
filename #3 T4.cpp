#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	
	for (int i = 0; i < n; ++i){
		for (int jj =0; jj<(n-i-1)*2; ++jj) cout << ' ';
		int j = i;
		for (int cnt = 0; cnt < i*2+1; ++cnt){
			if (cnt >= i+1) cout << --j;
			else cout << ++j;
			cout << ' ';
		}
		cout << endl;
	}
	return 0;
}
