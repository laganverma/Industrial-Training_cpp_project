#include <iostream>
#include <windows.h>

using namespace std;
COORD coord = {0, 0};

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    int age, contact;
    char name, medical_condition, address;
    int main;

    gotoxy(20, 0);
    cout << "\n\n\n\n\n\t\t\t"
            " Loading";
    char x = 219;

    for (int i = 0; i < 50; i++) {
        {
            _sleep(50);

            cout << x;
        }
    }
    cout << endl << endl << endl << endl << endl;
    gotoxy(25, 9);
    cout << "1.BP CALCULATOR" << endl;
    gotoxy(25, 10);
    cout << "2.OXYGEN CALCULATOR" << endl;
    gotoxy(25, 11);
    cout << "3.COVID SYMPTOMS" << endl;
    gotoxy(25, 12);
    cout << "4.COVID HOSPITALS" << endl << endl;
    gotoxy(25, 13);
    cout << "ENTER YOUR CHOICE = ";
    cin >> main;


    switch (main) {
        case 1:
            gotoxy(25,15);
            cout << "BP CALCULATOR";

            break;
        case 2:
            cout << "OXYGEN CALCULATOR";
            break;
        case 3:
            cout << "COVID SYMPTOMS";
            break;
        case 4:
            cout << "COVID HOSPITALS";
            break;
    }
    return 0;
}