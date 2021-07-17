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
    int Maharashtra;
    int Kerala;
    int Karnataka;
    int Tamil_Nadu;
    int Andhra_Pradesh;
    int Uttar_Pradesh;
    int West_Bengal;
    int Delhi;
    int Punjab;
    int Rajasthan;

    gotoxy(25, 17);
    cout << "---------------------------------------------------------------------------";
    gotoxy(55, 18);
    cout << "HOSPITAL LOCATOR";
    gotoxy(25, 19);
    cout << "---------------------------------------------------------------------------";
    gotoxy(44, 21);
    cout << "******Welcome to Hospital Locator******";
    gotoxy(25, 24);
    cout << "Choose Your State";
    gotoxy(25, 26);
    cout << "1. MAHARASHTRA";
    gotoxy(25, 27);
    cout << "2. KERALA";
    gotoxy(25, 28);
    cout << "3. KARNATAKA";
    gotoxy(25, 29);
    cout << "4. TAMIL NADU";
    gotoxy(25, 30);
    cout << "5. ANDHRA PRADESH";
    gotoxy(25, 31);
    cout << "6. UTTAR PRADESH";
    gotoxy(25, 32);
    cout << "7. WEST BENGAL";
    gotoxy(25, 33);
    cout << "8. DELHI";
    gotoxy(25, 34);
    cout << "9. PUNJAB";
    gotoxy(25, 35);
    cout << "10. RAJASTHAN";
    gotoxy(25, 37);
    cout << "ENTER YOUR CHOICE : ";
    cin >> states;
    switch (states) {
        case 1:
            gotoxy(25, 68);
            cout << "MAHARASHTRA";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. MUMBAI";
            gotoxy(25, 71);
            cout << "2. PUNE";
            gotoxy(25, 72);
            cout << "3. NASHIK";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin >> Maharashtra;
            switch (Maharashtra) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    break;
            }
            break;
        case 2:
            gotoxy(25, 68);
            cout << "KERALA";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. THIRUVANANTHAPURAM";
            gotoxy(25, 71);
            cout << "2. KOZHIKODE";
            gotoxy(25, 72);
            cout << "3. ERNAKULAM";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin >> Kerala;
            switch (Kerala) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    break;
            }
            break;
        case 3:
            gotoxy(25, 68);
            cout << "KARNATAKA";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. BANGLORE";
            gotoxy(25, 71);
            cout << "2. MYSORE";
            gotoxy(25, 72);
            cout << "3.MANGALORE";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin >> Karnataka;
            switch (Karnataka) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    break;
            }
            break;
        case 4:
            gotoxy(25, 68);
            cout << "TAMIL NADU";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. CHENNAI";
            gotoxy(25, 71);
            cout << "2. COIMBATORE";
            gotoxy(25, 72);
            cout << "3. MADURAI";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin >> Tamil_Nadu;
            switch (Tamil_Nadu) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    break;
            }
            break;
        case 5:
            gotoxy(25, 68);
            cout << "ANDHRA PRADESH";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. VISAKHAPATNAM";
            gotoxy(25, 71);
            cout << "2. VIJAYAWADA";
            gotoxy(25, 72);
            cout << "3. GUNTUR";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin >> Andhra_Pradesh;
            switch (Andhra_Pradesh) {
                case 1:
                    gotoxy(25, 75);
                    cout << "1. MAHATMA GANDHI CANCER HOSPITAL & RESEARCH INSTITUTE";
                    gotoxy(25, 76);
                    cout << "   Plot Number -1, Sector:7, Mvp Colony, MVP Colony Beside Rythu Bazar"
                            "Mvp Colony, Visakhapatnam";
                    gotoxy(25, 77);
                    cout << "    Contact : +91-891-2878787, +91-891-2551811";
                    gotoxy(25, 79);
                    cout << "2. KIIMS HOSPITALS";
                    gotoxy(25, 80);
                    cout << "   Sheela Nagar, BHPV Post, Visakhapatnam, AP 530026";
                    gotoxy(25, 81);
                    cout << "   Contact : +91-0891-3536379";
                    gotoxy(25, 83);
                    cout << "3. APOLLO HOSPITALS";
                    gotoxy(25, 84);
                    cout << "   Door No 10, Executive Court, 50-80, Waltair Main Rd, Opp. Daspalla, Ram Nagar";
                    gotoxy(25, 85);
                    cout << "   Visakhapatnam, AP 530002 ";
                    gotoxy(25, 86);
                    cout << "   Contact : +91-891-2727272";
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    gotoxy(25, 75);
                    cout << "WE ARE EXPANDING";
                    break;
            }
            break;
        case 6:
            gotoxy(25, 68);
            cout << "UTTAR PRADESH";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. KANPUR";
            gotoxy(25, 71);
            cout << "2. LUCKNOW";
            gotoxy(25, 72);
            cout << "3. VARANASI";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin >> Uttar_Pradesh;
            switch (Uttar_Pradesh) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    break;
            }
            break;
        case 7:
            gotoxy(25, 68);
            cout << "WEST BENGAL";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. KOLKATA";
            gotoxy(25, 71);
            cout << "2. ASANSOL";
            gotoxy(25, 72);
            cout << "3. SILIGURI";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin >> West_Bengal;
            switch (West_Bengal) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    break;
            }
            break;
        case 8:
            gotoxy(25, 68);
            cout << "DELHI";
            break;
        case 9:
            gotoxy(25, 68);
            cout << "PUNJAB";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. PATIALA";
            gotoxy(25, 71);
            cout << "2. LUDHIANA";
            gotoxy(25, 72);
            cout << "3. JALANDHAR";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin >> Punjab;
            switch (Punjab) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    break;
            }
            break;
        case 10:
            gotoxy(25, 68);
            cout << "RAJASTHAN";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. JAIPUR";
            gotoxy(25, 71);
            cout << "2. JODHPUR";
            gotoxy(25, 72);
            cout << "3. KOTA";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin >> Rajasthan;
            switch (Rajasthan) {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                default:
                    break;
            }
            break;
    }
}