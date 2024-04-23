#include <iostream>
using namespace std;

struct User {
    int id, borrowId, borrowIdx;
    string name;
    User(){
        borrowId = -1;
    }
    User(int i, string n){
        id = i;
        name = n;
        borrowId = 0;
    }
    void getUser(){
        cin >> id >> name;
    }
    void printUser(){
        cout << "id: " << id << '\t' <<
                "name: " << name << '\t' << 
                "current borrowed Book: " << borrowId << '\n';
    }
};

struct Book {
    int id, quantity, currentBorrowers; 
    string name;
    Book(){
        currentBorrowers = 0;
    }
    Book(int i, string n, int q){
        id = i;
        name = n;
        quantity = q;
    }
    void getBook(){
        cin >> id >> name >> quantity;
    }
    void printBook(){
        cout << "id: " << id << '\t' <<
                "name: " << name << '\t' << 
                "quantity: " << quantity << '\t' << 
                "borrowed: " << currentBorrowers << '\n';
    }
};

struct Library {
    Book books[100];
    int currentSize, currentUsers;
    User users[100];


    Library(){
        currentSize = 0;
        currentUsers = 0;
    }
    void addBook(Book B){
        books[currentSize++] = B;
    }
    void addUser(User U){
        users[currentUsers++] = U;
    }
    void printByName(){
        Book tmp[currentSize];
        makeCopy(tmp);
        for (int i = 0; i<currentSize; i++){
            int swaps = 0;
            for (int j = 0; j<currentSize-1; j++){
                if (tmp[j].name > tmp[j+1].name){
                    swap(tmp[j], tmp[j+1]);
                    swaps++;    
                }
            }
            if (!swaps) break;
        }
        printLibrary(tmp);
    }
    void printById(){
        Book tmp[currentSize];
        makeCopy(tmp);
        for (int i = 0; i<currentSize; i++){
            int swaps = 0;
            for (int j = 0; j<currentSize-1; j++){
                if (tmp[j].id > tmp[j+1].id){
                    swap(tmp[j], tmp[j+1]);
                    swaps++;    
                }
            }
            if (!swaps) break;
        }
        printLibrary(tmp);
    }
    bool checkPrefix(int indx, string pre){
        for (int i = 0; i<pre.size(); i++){
            if (books[indx].name[i] != pre[i]) return false;
        }
        return true;
    }
    int searchByPrefix(string pre, int print = 1){
        int cnt = 0, idx;
        for (int i = 0; i<currentSize; i++){
            if (books[i].name.size() < pre.size()) continue;
            if (checkPrefix(i, pre)){
                cnt++, idx = i;
                if (print) books[i].printBook();
            }
        }
        if (print) cout << "Found " << cnt << " Books starts with: " << pre << '\n';
        return idx;
    }
    int getBookById(int id){
        for (int i = 0; i<currentSize; i++){
            if (books[i].id == id) return i;
        }
        return -1;
    }
    int getUserById(int id){
        for (int i = 0; i<currentUsers; i++){
            if (users[i].id == id) return i;
        }
        return -1;
    }
    void borrowBook(int uid, int bid){
        bid = getBookById(bid);
        if (books[bid].quantity == books[bid].currentBorrowers){
            cout << "Book " << books[bid].name << " has no free copies\n";
            return;
        }
        uid = getUserById(uid);
        users[uid].borrowIdx = bid;
        users[uid].borrowId = books[bid].id;
        books[bid].currentBorrowers++;
        cout << "Book " << books[bid].name << " is borrowed successfully by " << users[uid].name << '\n';
    }
    void borrowBook(string uname, string bname){
        int bid = searchByPrefix(bname, 0);
        if (books[bid].quantity == books[bid].currentBorrowers){
            cout << "Book " << books[bid].name << " has no free copies\n";
            return;
        }
        for (int i = 0; i<currentUsers; i++){
            if (users[i].name == uname){
                users[i].borrowIdx = bid;
                users[i].borrowId = books[bid].id;
                books[bid].currentBorrowers++;
                cout << "Book " << books[bid].name << " is borrowed successfully by " << users[i].name << '\n';
                break;
            }
        }
    }
    void returnBook(int bid, int uid){
        int bidx = getBookById(bid);
        books[bidx].currentBorrowers--;
        uid = getUserById(uid);
        if (users[uid].borrowIdx != bidx){
            cout << "User " << users[uid].name << " never borrowed book " << books[bidx].name << '\n';
            return;
        }
        users[uid].borrowId = 0;
        users[uid].borrowIdx = -1;
        cout << "Book " << books[bid].name << " is returned successfully by " << users[uid].name << '\n';
    }
    void returnBook(string uname, string bname){
        int bidx = searchByPrefix(bname, 0);
        books[bidx].currentBorrowers--;
        for (int i = 0; i<currentUsers; i++){
            if (users[i].name == uname){
                if (users[i].borrowIdx != bidx){
                    cout << "User " << users[i].name << " never borrowed book " << books[bidx].name << '\n';
                    return;
                }
                users[i].borrowId = 0;
                users[i].borrowIdx = -1;
                cout << "Book " << books[bidx].name << " is returned successfully by " << users[i].name << '\n';
                return;
            }
        }
    }
    void borrowList(int bid){
        cout << "List of users borrowed book " << books[getBookById(bid)].name << '\n';
        for (int i = 0; i<currentUsers; i++){
            if (users[i].borrowId == bid){
                users[i].printUser();
            }
        }
    }
    void borrowList(string bname){
        int idx = searchByPrefix(bname, 0);
        cout << "List of users borrowed book " << books[idx].name << '\n';
        for (int i = 0; i<currentUsers; i++){
            if (users[i].borrowId == books[idx].id){
                users[i].printUser();
            }
        }
    }

    void makeCopy(Book* arr){
        for (int i = 0; i<currentSize; i++){
            arr[i] = books[i];
        }
    }
    void printLibrary(){
        for (int i = 0; i<currentSize; i++){
            cout << i+1 << "- ";
            books[i].printBook();
        }
    }
    void printLibrary(Book* arr){
        for (int i = 0; i<currentSize; i++){
            cout << i+1 << "- ";
            arr[i].printBook();
        }
    }
    void printUsers(){
        for (int i = 0; i<currentUsers; i++){
            cout << i+1 << "- ";
            users[i].printUser();
        }
    }
};


int main(){
    Book b1 = Book(1212, "a", 7);
    Book b2 = Book(1312, "b", 1);
    Book b3 = Book(2212, "c", 3);
    Book b4 = Book(3212, "d", 4);
    Book b5 = Book(4212, "e", 5);
    Book b6 = Book(5212, "f", 12);
    Book b7 = Book(1252, "g", 43);
    Book b8 = Book(1215, "h", 3);
    Book b9 = Book(1287, "i", 23);
    Book b10 = Book(9812, "j", 2);
    Library l1;
    l1.addBook(b1);
    l1.addBook(b2);
    l1.addBook(b3);
    l1.addBook(b4);
    l1.addBook(b5);
    l1.addBook(b6);
    l1.addBook(b7);
    l1.addBook(b8);
    l1.addBook(b9);
    l1.addBook(b10);

    l1.addUser(User(1012, "Mohamed"));
    l1.addUser(User(1013, "Ahmed"));
    l1.addUser(User(1014, "Abbas"));
    l1.addUser(User(1015, "Mohamod"));
    l1.addUser(User(1016, "Mark"));
    l1.addUser(User(1017, "Abdo"));
    l1.addUser(User(1018, "Hayam"));
    l1.addUser(User(1019, "Hesham"));
    l1.addUser(User(1112, "Amir"));
    l1.addUser(User(2012, "Youssef"));
    
    l1.printByName();
    l1.printUsers();
    l1.borrowBook(1016, 1212);
    l1.borrowBook("Mohamed", "a");
    l1.borrowBook("Hayam", "a");
    l1.borrowBook("Hayam", "a");
    l1.borrowBook("Hayam", "a");
    l1.borrowBook("Ahmed", "a");
    l1.borrowBook("Abbas", "a");
    l1.borrowBook("Abdo", "a");
    l1.borrowBook("Amir", "c");
    l1.returnBook("Amir", "c");
    l1.printByName();
    l1.printUsers();
    l1.borrowList("a");
    

    return 0;
}