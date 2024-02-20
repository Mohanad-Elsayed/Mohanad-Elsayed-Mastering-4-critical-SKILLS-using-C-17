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
    int arr[n+1]{}, indx[1000]{};
    indx[0] = 1;
    forn(i, 1, n+1){
    	int nextval = arr[i-1] - (i - 1) - 1;
    	if (nextval <= 0 || indx[nextval]){
    		nextval = arr[i-1] + i;
    	}
    	arr[i] = nextval;
    	indx[nextval] = 1;
    }
    // for (int x : arr) cout << x << ' ' ;
    cout << arr[n];
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}