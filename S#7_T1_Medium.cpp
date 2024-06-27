#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n; int tn = n;
    int cnt = 1;
    while(tn--){
        for (int i = 0; i<tn; ++i){
            cout << ' ';
        }
        for (int i = 0; i<cnt; ++i){
            cout << '*';
        }
        cnt += 2;
        cout << endl;
    }
    cnt -= 2;
    while(tn++ <= n){
        for (int i = 0; i<tn; ++i){
            cout << ' ';
        }
        for (int i = 0; i<cnt; ++i){
            cout << '*';
        }
        cnt -= 2;
        cout << endl;
    }
    return 0;
}