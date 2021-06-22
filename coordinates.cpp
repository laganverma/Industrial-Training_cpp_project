#include<iostream>
#include<windows.h>


using namespace std;
COORD coord = {0, 0};

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    gotoxy(13, 5);
    cout << "hello";
    gotoxy(13, 6);
    cout << "hey";
   }