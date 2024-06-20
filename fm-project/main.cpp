#include <iostream>
using namespace std;

struct User {
    int id, allowanon;
    string name, username, email, password;
};
int main(){
    int menu1choice = -1;
    cout << "Menu: \n\t1: Login\n\t2: Sign Up\n";
    while(menu1choice != 1 && menu1choice != 2){
        cout << "Enter a number in range 1-2: ";
        cin >> menu1choice;
    }
    User user1;
    cout << "Enter name: "; cin >> user1.name;
    cout << "\nEnter username: "; cin >> user1.username;
    cout << "\nEnter email: "; cin >> user1.email;
    cout << "\nEnter password: "; cin >> user1.password;
    cout << "\nAllow anonymous questions? (1 or 0): "; cin >> user1.allowanon;

}
