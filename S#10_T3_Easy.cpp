#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, m, sum1 = 0, sum2 = 0; cin >> n >> m;
    int arr[n][m], tarr[m][n];
    for (int i = 0; i<n; ++i)
        for (int j = 0; j<m; ++j)
            cin >> tarr[j][i];
    
    for (int i = 0; i<m; ++i){
        for (int j = 0; j<n; ++j){
            cout << tarr[i][j] << ' ';} cout << '\n';}

    // !Stop Here! */
    return 0;
}
int main(){
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}