#include<iostream>
using namespace std;
void q1(int x){
    if (x == 0) return;
    q1(--x);
    for (int i = 0; i<x; ++i) cout << '*'; cout << '\n';
}
int threen(long long x){
    static int cnt = 1;
    cout << x << '\n';
    if (x == 1) return cnt;
    if (x%2) threen(3*x+1), cnt++;
    else threen(x/2), cnt++;
}
int main(){
    // q1(19);
    cout << threen(1234567891);
    return 0;
}