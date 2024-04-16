#include <iostream>
using namespace std;

struct deque{
    int l = 300, r = 299, sze = 0, arr[600]{};
    void add_front(int x){
        l--;
        arr[l] = x;
        sze++;
    }
    void add_back(int x){
        r++;
        arr[r] = x;
        sze++;
    }
    void del_front(){
        if (sze){
            l++;
            sze--;
        }
    }
    void del_back(){
        if (sze){
            r--;
            sze--;
        }
    }
    void print(){
        for (int i = l; i<=r; i++){
            cout << arr[i] << ' ';
        } cout << '\n';
    }
    int at(int x){
        return arr[x+l];
    }
    int size(){
        return sze;
    }
    int* begin(){
        return arr+l;
    }
    int* end(){
        return arr+r;
    }
    int* iterator(){
        return arr+l;
    }
};
int main(){
    deque d;
    cout << "\n\n------------------------------------\n\n";
    for (int i = 0; i<10; i++) d.add_back(i);
    d.print();
    for (int i = 1; i<10; i++) d.add_front(i);
    d.print();
    cout << d.at(12); cout << '\n';
    cout << d.size(); cout << '\n';
    d.del_back();
    cout << *(d.end()); cout << '\n';
    *(d.end()) = 90;
    cout << *(d.end()); cout << '\n';

    d.add_back(120);
    d.del_front();
    d.add_front(150);
    d.print();

    
    cout << "\n\n------------------------------------\n\n";
    return 0;
}