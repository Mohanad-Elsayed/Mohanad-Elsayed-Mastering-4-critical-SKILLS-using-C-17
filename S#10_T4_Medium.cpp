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
    
    int r, c, d; cin >> d >> r >> c;
    int q; cin >> q;
    if (q == 1){
        int a, b, cc; cin >> a >> b >> cc;
        int idx = 0;
        idx = (a*(c*r) + b*c + cc);
        cout << idx;
    }

    else{
        int n; cin >> n;
        cout << (n/(r*c)) << ' ';
        n%=r*c;
        cout << n/c << ' ';
        n%=c; cout << n;
    }
    // int idx = 0; 
    // forn(i, 0, 3){
    //     forn(j, 0, 4){
    //         forn(k, 0, 5){
    //             cout << idx++ << '\t' << i << ' ' << j << ' ' << k << '\n';
    //         }
    //     }
    // }

    // !Stop Here! */
    return 0;
}
int main(){
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}