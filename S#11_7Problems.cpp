#include <iostream>
using namespace std;
int max(int a, int b, int c){
    return max(max(a, b), c);
}
int max(int a, int b, int c, int d){
    return max(a, max(b, c, d));
}
int max(int a, int b, int c, int d, int e){
    return max(max(a, b, c, d), e);
}
int max(int a, int b, int c, int d, int e, int f){
    return max(max(a, b, c, d, e), f);
}
int max(int a, int b, int c, int d, int e, int f, int g){
    return max(a, max(b, c, d, e, f, g));
}
//__________________________________________-
string reverse(const string& s){
    string res = s;
    int i = -1, j = res.size();
    while(i++<j--){
        swap(res[i], res[j]);
    }
    return res;
}
//__________________________________________-
// void read(long double &a, long double &b){
//     cin >> a >> b;
// }
// void calc(){
//     long double a, b;
//     static int counter = 0;
//     do {
//         int choice; cin >> choice;
//         if (choice == 5) break;
//         read(a, b);

//     }while(1);

// }

//__________________________________________-
void set_powers(long long arr[], int len, int p){
    int curr = 1;
    for (int i = 0; i<len; ++i){
        arr[i] = curr;
        curr *= p;
    }
//__________________________________________-
}
string replace_substr(string s, string pattern, string alias){
    string res = "";
    for (int i = 0; i<s.size()-pattern.size()+1; i++){
        bool sub = true;
        for (int j = 0; j<pattern.size(); j++){
            if (s[i+j] != pattern[j]){
                sub = false;
                break;
            }
        }
        if (sub){
            res += alias;
            i += pattern.size()-1;
        }
        else res += s[i];
    }
    return res;
}
int main(){
    // cout << max(1,4,5, 3,6,30, 232);
    cout << reverse("abde");
    // calc()
    // long long arr[] = {1,2,3,4,5};
    // set_powers(arr, 5, 4);
    // for (auto x : arr) cout << x << ' ';
    // string s = "abcx", pattern = "x", alias = "er";
    // cout << replace_substr(s, pattern, alias);
}