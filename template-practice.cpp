#include <iostream>
using namespace std;
template<typename T1, typename T2>
T2 mymax(T1 a, T2 b){
    return (a > b ? a : b);
}
int main(){
    cout << fixed;
    cout << mymax<double, long long>(33.5, 40);
    return 0;
}