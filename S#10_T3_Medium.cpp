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
    int n, m, q, pi = 0, pj = 0; cin >> n >> m >> q;
    while(q--){
        int d, w; cin >> d >> w;
        switch (d)
        {
        case 1:
            pi -= w%n; pi+=n; pi%=n;
            break;
        case 2:
            pj += w%m; pj%=m;
            break;
        case 3:
            pi += w%n; pi%=n;
            break;
        case 4:
            pj -= w%m; pj+=m; pj%=m;
            break;
        }
        if (pi == n) pi--;
        if (pj == m) pj--;
        cout << pi << ' ' << pj << '\n';
    }


    // !Stop Here! */
    return 0;
}
int main(){
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}