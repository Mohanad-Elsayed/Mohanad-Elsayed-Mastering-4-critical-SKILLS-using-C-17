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
bool check_prefix(string& s1, string& s2){
  forn(i, 0, s2.size()){
    if (s1[i] != s2[i]) return false;
  }
  return true;
}

bool check_suffix(string s1, string s2){
  reverse(all(s1));
  reverse(all(s2));
  return check_prefix(s1, s2);
}

bool check_substring(string& s1, string& s2){
  forn(i, 0, s1.size()){
    if (s1[i] == s2[0]){
    	bool flag = true;
      for (int j = 1, k = i+1; j<s2.size(); ++j, ++k){
      	if (k == s1.size() || s1[k] != s2[j]) {flag = false; break;}
  		
      }
      if(flag) {return true;}
    }
  }
  return false;
}

bool check_subsequence(string s1, string s2){
    int s1start = 0, cnt = 0;
    forn(i, 0, s2.size()){
		forn(j, s1start, s1.size()){
			if (s1[j] == s2[i]){
				s1start = j;
				cnt++;
				break;
			}
		}
    }
    return cnt == s2.size();
    
}
int tests(); int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    string s1, s2;
    cin >> s1 >> s2;
    cout << "check_prefix: "; check_prefix(s1, s2) ? cout << "YES" : cout << "NO"; cout << endl;
    cout << "check_suffix: "; check_suffix(s1, s2) ? cout << "YES" : cout << "NO"; cout << endl;
    cout << "check_substring: "; check_substring(s1, s2) ? cout << "YES" : cout << "NO"; cout << endl;
    cout << "check_subsequence: "; check_subsequence(s1, s2) ? cout << "YES" : cout << "NO"; cout << endl;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}