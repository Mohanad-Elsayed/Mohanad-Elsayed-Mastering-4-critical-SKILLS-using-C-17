#include <bits/stdc++.h>
using namespace std;

/*
    @brief calculate the left max
    @param *arr: a pointer to the array
    @param size: number of elements in the array
    @return the function doesn't return anything
*/
void left_max(int *arr, int size){
    if (size == 1){
        arr[size] = max(arr[size], arr[size-1]);
        return;
    }
    left_max(arr, size-1);
    arr[size-1] = max(arr[size-1], arr[size-2]);
}

/*
    @brief calculate the right max
    @param *arr: a pointer to the array
    @param size: number of elements in the array
    @return the function doesn't return anything
*/
void right_max(int *arr, int size){
    if (size == 1)
        return;
    arr[size-2] = max(arr[size-1], arr[size-2]);
    right_max(arr, size-1);
}
/*
    @brief calculate the suffix from a pos to end
    @param *arr: pointer to the array
    @param len:  number of elements in it
    @param pos:  the starting position
    @return the function returns one integer, the suffix sum
*/
int suffix_sum(int *arr, int len, int pos){
    if (pos == len) return arr[pos-1];
    return arr[pos-1] + suffix_sum(arr, len, pos+1);
}
/*
    @brief calculate the prefix from a start to pos
    @param *arr: pointer to the array
    @param len:  number of elements in it
    @param pos:  the starting position
    @return the function returns one integer, the suffix sum
*/
int prefix_sum(int *arr, int len, int pos){
    if (pos-1 == 0) return arr[0];
    return arr[pos-1] + prefix_sum(arr, len, pos-1);
}

bool ispal(char *arr, int len){
    static int l = 0, r = len-2;
    if (l>=r) return true;
    if (arr[l] != arr[r]) return false;
    l++; r--;
    return ispal(arr, len);
}

bool ispref(string main, string pre, int pos){
    if (pos == pre.size()) return 1;
    if (main[pos] != pre[pos]) return 0;
    return ispref(main, pre, pos+1);
}

void dosth(int x){
    if (x){
        dosth(x/10);
        cout << x%10;
    }
}

bool isprime(int x){
    if (x < 2) return false;
    if (x == 2 || x == 3) return true;
    if (x%2 == 0 || x%3 == 0) return false;
    for (long i = 5; i*i<=x; i += 6){
        if (x % i == 0 || x % (i+2) == 0) return false;
    }
    return true;
}
int countprimes(int l, int r){
    if (l == r) return isprime(l);
    return isprime(l) + countprimes(l+1, r);
}

long long arr[300];

long long fibon(long long n){
    if (n < 2) return n;
    if (arr[n]) return arr[n];
    else arr[n] = fibon(n-1) + fibon(n-2);
    return arr[n];
}
int main(){
    // int arr[] = {1, 2, 3, 4, 5};
    // right_max(arr, sizeof(arr)/sizeof(arr[0]));
    // for (auto x : arr) cout << x << ' '; cout << '\n';
    // cout << suffix_sum(arr, sizeof(arr)/sizeof(arr[0]), 5);
    // char carr[] = "acba";
    // cout << ispal(carr, sizeof(carr));
    // string man = "abcdefg", pre = "abd";
    // cout << ispref(man, pre, 0);
    // dosth(123456);
    // cout << countprimes(1, 50000);
    cout << fibon(20);
    return 0;
}