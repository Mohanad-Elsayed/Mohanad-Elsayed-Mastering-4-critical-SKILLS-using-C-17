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
    int arr[n][m];
    forn(i, 0, n) forn(j, 0, m) cin >> arr[i][j];
    for (int i {}; i<n; ++i){
        for (int j =0; j<m; ++j){
            if (i == j) sum1 += arr[i][j], sum2 += arr[i][j];
            if (i < j) sum1 += arr[i][j];
            if (j < i) sum2 += arr[i][j];
        }
    }
    cout << sum1 << ' ' << sum2;
    // !Stop Here! */
    return 0;
}
int main(){
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}