#include <iostream>
using namespace std;
int n;
int main(){
    cout << "Please Enter Grid Size:  \n";
    cin >> n;
    bool turn = 1; char win = -1; int turns = 0;
    char arr[n][n];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<n; j++) arr[i][j] = '.';
    }
    do {
        int x, y; 
        for (int i = 0; i<n; i++){
            for (int j = 0; j<n; j++){
                cout << arr[i][j] << ' ';
            } cout << '\n';
        }
        if (win != -1) break;
        cout << "\nPlayer " << (turn ? "One [X] " : "Two [O] ") << "Should Play, enter a position x, y: ";
        while(true){
            cin >> x >> y; x--; y--;
            if (x > n-1 || y > n-1){
                cout << "\nCell out of grid bounds. Please enter another one!\n";
                continue;
            }
            if (arr[x][y] != '.'){
                cout << "\nOccupied cell. Please enter another one!\n";
                continue;
            }
            break;
        }
        arr[x][y] = (turn ? 'X' : 'O');
        turns++;
        if (turns == n*n) break;

        bool row = 1, col = 1, diag1 = 1, diag2 = 1;
        for (int i = 0; i<n; i++){
            if (arr[x][i] != (turn ? 'X' : 'O')) row = 0;
            if (arr[i][y] != (turn ? 'X' : 'O')) col = 0;
        }
        for (int i = 0; i<n; i++){
            for (int j = 0; j<n; j++){
                if (arr[i][j] != (turn ? 'X' : 'O')) diag1 = 0;
                if (arr[i][n-j-1] != (turn ? 'X' : 'O')) diag2 = 0;
            }
        }
        if (row || col || diag1 || diag2){
            win = turn;
        }
        turn = !turn;
    } while(true);
    cout << "Game Ended With: " << (win == -1 ? "Tie\n" : ((win == 1) ? "Player One [X] Winning!\n" : "Player Two [O] Winning!\n"));
}