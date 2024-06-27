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
    bool print[300];
    for (int i = 0; i<300; ++i) print[i] = false;
    string name[300], namesalary; 
    int age[300]{}; 
    int salary[300]{}; 
    char gender[300]{};
    int mx = 0, delm, delx; 
    while(1){
      printf("Enter Your Choice\n\t1- Add\n\t2- Print\n\t3- Delete by age\n\t4- Update Salary by name\n");
      int n; cin >> n;
      switch(n){
      case 1:
        printf("Enter Name >>\t"); cin >> name[mx];
        printf("\nEnter Age >>\t"); cin >> age[mx];
        printf("\nEnter Salary >>\t"); cin >> salary[mx];
        printf("\nEnter Gender [M, F] >>\t"); cin >> gender[mx]; cout << '\n';
        print[mx] = true; mx++;
        break;
      case 2:
        for (int i = 0; i<mx; ++i){
          if (print[i]){
            cout << name[i] << ' ' << age[i] << ' ' << 
                salary[i] << ' ' << gender[i] << '\n';
          }
        }
        break; 
      case 3:
        printf("\nEnter Age to be deleted >>\t"); cin >> delm >> delx; cout << '\n';
        for (int i = 0; i<mx; ++i){
          if (print[i] && age[i] <= delx && age[i] >= delm) print[i] = false;
        }
        break;
      case 4:
        printf("\nEnter Name and Salary >>\t"); cin >> namesalary >> delx; cout << '\n';
        for (int i = 0; i<mx; ++i){
          if (name[i] == namesalary) salary[i] = delx;
        }
        break;
      }
    }
    // !Stop Here! */
    return 0;
}
int main(){
    // ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    return solve();
    return tests();
}
int tests(){int t; cin >> t;while(t--){solve();cout << '\n';}return 0;}