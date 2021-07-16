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
    int states;
    int Andaman_and_Nicobar_Islands;
    int Andhra_Pradesh;
    int Arunachal_Pradesh;
    int Assam;
    int Bihar;
    int Chandigarh;
    int Chhattisgarh;
    int Dadra_and_Nagar_Haveli_and_Daman_and_Diu;
    int Delhi;
    int Goa;
    int Gujarat;
    int Haryana;
    int Himachal_Pradesh;
    int Jammu_and_Kashmir;
    int Jharkhand;
    int Karnataka;
    int Kerala;
    int Ladakh;
    int Lakshadweep;
    int Madhya_Pradesh;
    int Maharashtra;
    int Manipur;
    int Meghalaya;
    int Mizoram;
    int Nagaland;
    int Odisha;
    int Puducherry;
    int Punjab;
    int Rajasthan;
    int Sikkim;
    int amil_Nadu;
    int Telangana;
    int Tripura;
    int Uttar_Pradesh;
    int Uttarakhand;
    int West_Bengal;
    }

