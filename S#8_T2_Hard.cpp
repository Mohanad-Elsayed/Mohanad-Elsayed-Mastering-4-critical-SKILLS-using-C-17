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
    int n, k; cin >> n >> k;
    int arr[n]; forn(i, 0, n) cin >> arr[i];
    int mx = 0, s = k, curr = 0;
    forn(i, 0, k){
    	mx += arr[i];
    }
    curr = mx;
    forn(i, k, n){
    	curr -= arr[i-k];
    	curr += arr[i];
    	if (curr > mx){
    		mx = curr;
    		s = i;
    	}
    }
    cout << s-k+1 << ' ' << s << ' ' << mx;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}