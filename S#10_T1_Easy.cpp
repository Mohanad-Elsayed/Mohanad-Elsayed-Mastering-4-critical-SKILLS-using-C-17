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
    int n, m; cin >> n >> m;
    int arr[n][m];
    forn(i, 0, n) forn(j, 0, m) cin >> arr[i][j];
    int q; cin >> q;
    while(q--){
        int k, l; cin >> k >> l;
        bool ok = true;
        forn(i, 0, m){
            if (arr[k-1][i] >= arr[l-1][i]) {ok = false; break;}
        }
        ok ? cout << "YES\n" : cout << "NO\n";
    }
    // !Stop Here! */
    return 0;
}
int main(){
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}