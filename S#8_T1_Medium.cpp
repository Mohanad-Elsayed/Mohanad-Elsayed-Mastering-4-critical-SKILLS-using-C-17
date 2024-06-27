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
    int n; cin >> n;
    int arr[n];
    forn(i, 0, n) cin >> arr[i];
    int mn1 = arr[0], mn2 = arr[1], mn3 = arr[2];
    forn(i, 3, n){
    	if (arr[i] < mn1){
    		mn3 = mn2;
    		mn2 = mn1;
    		mn1 = arr[i];
    	}
    	else if (arr[i] < mn2){
    		mn3 = mn2;
    		mn2 = arr[i];
    	}
    	else if (arr[i] < mn3) mn3 = arr[i];
    }
    cout << mn1  << ' ' << mn2 << ' ' << mn3 ;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}