#include<iostream>
using namespace std;
struct Full_Name{
    string first, middle, last;
    Full_Name(){
        first = middle = last = "None";
    }
    Full_Name(const string &f, const string &m, const string &l){
        first = f;
        middle = m;
        last = l;
    }
    Full_Name(const string &f, const string &l = ""){
        first = f;
        last = l;
    }
    void print(){
        cout << first << ' ' << middle << ' '<< last;
    }
};
struct Employee{
    int id, salary;
    Full_Name name;
    Employee(const int &i, const int &s, const Full_Name &n){
        id = i;
        salary = s;
        name = n;
    }
    void printEmployee(){
        cout << "Employee name: "; name.print(); cout << "\nId:" << id << "\nSalary: " << salary << '\n';
    }
};
int main(){
    Employee me(1212, 2025, Full_Name("Mohannad", "Mohamed", "Ahmed"));
    me.printEmployee();
    return 0;
}