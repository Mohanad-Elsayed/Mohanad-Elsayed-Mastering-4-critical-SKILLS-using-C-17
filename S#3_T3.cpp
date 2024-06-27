#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	
	for (int i = 1; i<=(n/2)+1; ++i){
		
		for (int j = 0; j < (n/2+1)-i; ++j) cout << ' ';
		for (int j = 0; j < 2*i-1; ++j) cout << '*'; 
		cout << '\n';
	}
	for (int i = n/2+2, j=1; i<=n; ++i, ++j){
		int jj = j;
		while(jj--) cout << ' ';
		for (int k = 0; k<(n-i)*2+1; ++k) cout << '*';
		cout << endl;
	}
	return 0;
}
