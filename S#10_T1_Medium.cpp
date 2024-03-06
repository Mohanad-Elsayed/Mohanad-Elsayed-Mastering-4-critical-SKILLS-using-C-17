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
    int n, m; cin >> n >> m; int arr[n][m];
    forn(i, 0, n) forn(j, 0, m) cin >> arr[i][j];
    int q; cin >> q;
    auto isprime = [&](int x) -> bool{
        if (x < 2) return false;
        for (int i = 2; i*i<=x; ++i) {
            if (!(x%i)) return false;
        }
        return true;
    };
    while(q--){
        int i, j, r, c, cnt = 0; cin  >> i >> j >> r >> c;
        forn(a, i-1, i+r-1){
            forn(b, j-1, j+c-1){
                if (isprime(arr[a][b])) cnt++;
            }
        }
        cout << cnt << '\n';
    }
    // !Stop Here! */
    return 0;
}
int main(){
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}