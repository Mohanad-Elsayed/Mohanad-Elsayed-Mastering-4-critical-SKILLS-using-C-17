#include<iostream>
using namespace std;
long long mypow(long long x, long long base){
    if (!base) return 1;
    else return x * mypow(x, base-1);
}
// array, and the current index, size
int array_max(int *arr, int size, int index){
    if (index == size-2) return max(arr[index], arr[index+1]);
    return max(arr[index], array_max(arr, 5, index+1));
}
int array_sum(int *arr, int size){
    static int pos = 0;
    if (pos == size-1) return arr[pos];
    return arr[pos++] + array_sum(arr, 5);
}
double array_avg(int *arr, int size){
    static int pos = 0;
    if (pos == size-1) return arr[pos]/(double)size;
    return arr[pos++]/(double)size + array_avg(arr, 5);
}
void array_inc(int *arr, int size){
    static int pos = 0;
    if (pos == size) return;
    arr[pos] += ++pos;
    array_inc(arr, 5);
}
void array_accom(int *arr, int size){
    static int pos = 1, sum = arr[0];
    if (pos == size) return;
    arr[pos++] += sum; 
    sum += arr[pos];
    array_accom(arr, 5);
}
void left_max(int *arr, int size){
    static int pos = 1, curr_max = arr[0];
    if (pos == size) return;
    if (curr_max < arr[pos]) curr_max = arr[pos];
    if (curr_max > arr[pos]) arr[pos] = curr_max;
    pos++;
    left_max(arr, 5);
}
int main(){
    long long a = 3, b = 3;
    // cout << mypow(a, b);
    int arr[5] = {1,3,2,5,4};
    left_max(arr, 5);
    for (auto x : arr) cout << x << ' ';
    return 0;
}