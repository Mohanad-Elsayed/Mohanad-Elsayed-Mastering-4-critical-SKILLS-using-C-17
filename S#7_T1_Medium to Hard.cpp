#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for (int i = 1, j = n; i <= n; ++i, --j){
        for (int k = 1; k<=n; ++k){
            if (k == i || k == j) cout << '*';
            else cout << ' ';
        }
            cout << endl;
    }
    return 0;
} 