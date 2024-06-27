#include <iostream>
using namespace std;

string names[21][5];
int mxs[21];
bool urgent[21][5];
void move_queue(int spec){
    for (int i = 0; i<mxs[spec]; i++){
        names[spec][i] = names[spec][i+1];
        urgent[spec][i] = urgent[spec][i+1];
    }
}
void add_front(int spec, string name, int status){
    for (int i = mxs[spec]-1; i>0; i--){
        names[spec][i] = names[spec][i-1];
        urgent[spec][i] = urgent[spec][i-1];
    }
    names[spec][0] = name;
    urgent[spec][0] = status;
}
int main(){
    int choice;
    int spec, status; string name;
    do {
        printf("\nEnter Choice\n1) Add patient\n2) Print all patients\n3) Get next patient\n4) Exit\n");
        cin >> choice;
        if (choice == 4) break;
        switch (choice)
        {
        case 1:
            printf("Enter Specialization, name, and status (0, 1)\n");
            cin >> spec >> name >> status;
            if (mxs[spec] == 5){
                printf("Too many patients!\nNot Added!");
                break;
            }
            mxs[spec]++;
            if (!status){
                names[spec][mxs[spec]-1] = name;
                urgent[spec][mxs[spec]-1] = status;
            }
            else{
                add_front(spec, name, status);
            }
            printf("\n    Added!\n");
            break;
        case 2:
            for (int i = 1; i<21; i++){
                printf("--Specialization %d:\n", i);
                if (mxs[i]){
                    for(int j = 0; j<mxs[i]; j++){
                        printf("%d- Name: ", j+1); cout << names[i][j]; 
                        printf(", Status: %s\n", (urgent[i][j] ? "Urgent" : "Normal"));
                    }
                }
                else printf("Is empty!\n");
            }
            break;
        case 3:
            printf("Enter a Specialization >>   ");
            cin >> spec;
            if (mxs[spec]){
                printf("Done!\n");
                move_queue(spec);
                mxs[spec]--;
            }
            else printf("No patients, please have some rest.\n");
            break;
        default:
            printf("Please choose from the list\n");
            break;
        }
    } while(true);
}