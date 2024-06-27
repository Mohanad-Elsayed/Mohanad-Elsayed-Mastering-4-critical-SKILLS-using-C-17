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
int ne8i[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int ne8j[] = {-1,  0,  1, -1, 1, -1, 0, 1};
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, m; cin >> n >> m; int arr[n][m];
    forn(i, 0, n) forn(j, 0, m) cin >> arr[i][j];

    forn(i, 0, n){
        forn(j, 0, m){
            bool flag = true;
            forn(k, 0, 8){
                int a = i+ne8i[k];
                int b = j+ne8j[k];
                if (a < 0 || b < 0 || a >= n || b >=m) continue;
                if (arr[i][j] <= arr[a][b]) {flag = false; break;}
            }
            if (flag){
                cout << "Here << " << i+1 << ' ' << j+1 << '\n';
            }
        }
    }

    // !Stop Here! */
    return 0;
}
int main(){
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}