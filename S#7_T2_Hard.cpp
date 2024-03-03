#include<bits/stdc++.h>
using namespace std;
int main(){
    int r; cin >> r; int tr = r;
    int reversed = 0;
    while(r>0){
        reversed = reversed*10 + r%10;
        r/=10;
    }
    cout << reversed << ' ' << 3 * reversed;
    return 0;
}