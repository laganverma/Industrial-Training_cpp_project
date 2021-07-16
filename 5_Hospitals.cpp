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
    int Tamil_Nadu;
    int Telangana;
    int Tripura;
    int Uttar_Pradesh;
    int Uttarakhand;
    int West_Bengal;

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
    cout << "1.  ANDHRA PRADESH";
    gotoxy(25, 27);
    cout << "2.  ARUNANCHAL PRADESH";
    gotoxy(25, 28);
    cout << "3.  ASSAM";
    gotoxy(25, 29);
    cout << "4.  BIHAR";
    gotoxy(25, 30);
    cout << "5.  CHHATTISGARH";
    gotoxy(25, 31);
    cout << "6.  GOA";
    gotoxy(25, 32);
    cout << "7.  GUJARAT";
    gotoxy(25, 33);
    cout << "8.  HARYANA";
    gotoxy(25, 34);
    cout << "9.  HIMACHAL PRADESH";
    gotoxy(25, 35);
    cout << "10. JHARKHAND";
    gotoxy(25, 36);
    cout << "11. KARNATAKA";
    gotoxy(25, 37);
    cout << "12. KERALA";
    gotoxy(25, 38);
    cout << "13. MADHYA PRADESH";
    gotoxy(25, 39);
    cout << "14. MAHARASHTRA";
    gotoxy(25, 40);
    cout << "15. MANIPUR";
    gotoxy(25, 41);
    cout << "16. MEGHALAYA";
    gotoxy(25, 42);
    cout << "17. MIZORAM";
    gotoxy(25, 43);
    cout << "18. NAGALAND";
    gotoxy(25, 44);
    cout << "19. ODISHA";
    gotoxy(25, 45);
    cout << "20. PUNJAB";
    gotoxy(25, 46);
    cout << "21. RAJASTHAN";
    gotoxy(25, 47);
    cout << "22. SIKKIM";
    gotoxy(25, 48);
    cout << "23. TAMIL NADU";
    gotoxy(25, 49);
    cout << "24. TELANGANA";
    gotoxy(25, 50);
    cout << "25. TRIPURA";
    gotoxy(25, 51);
    cout << "26. UTTAR PRADESH";
    gotoxy(25, 52);
    cout << "27. UTTARAKHAND";
    gotoxy(25, 53);
    cout << "28. WEST BENGAL";
    gotoxy(25, 55);
    cout << "UNION TERRITORIES";
    gotoxy(25, 57);
    cout << "29. ANDAMAN AND NICOBAR ISLANDS";
    gotoxy(25, 58);
    cout << "30. CHANDIGARH";
    gotoxy(25, 59);
    cout << "31. DADRA AND NAGAR HAVELI AND DAMAN AND DIU";
    gotoxy(25, 60);
    cout << "32. DELHI";
    gotoxy(25, 61);
    cout << "33. JAMMU AND KASHMIR";
    gotoxy(25, 62);
    cout << "34. LADAKH";
    gotoxy(25, 63);
    cout << "35. LAKSHADWEEP";
    gotoxy(25, 64);
    cout << "36. PUDUCHERRY";
    gotoxy(25, 66);
    cout << "ENTER YOUR CHOICE : ";
    cin >> states;
    switch (states) {
        case 1:
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
            cin>>Andhra_Pradesh;
            switch (Andhra_Pradesh) {
                case 1:
                    gotoxy(25, 75);
                    cout << "1. Mahatma Gandhi Cancer Hospital & Research Institute";
                    gotoxy(25, 76);
                    cout << "Plot Number -1, Sector:7, Mvp Colony, MVP Colony Beside Rythu Bazar"
                            "Mvp Colony, Visakhapatnam";
                    gotoxy(25, 77);
                    cout << "Contact : +91-891- 287 8787, +91-891- 255 1811";
                    gotoxy(25, 79);
                    cout << "2. KIIMS HOSPITALS";
                    gotoxy(25, 80);
                    cout << "Sheela Nagar, BHPV Post, Visakhapatnam, AP 530026";
                    gotoxy(25, 81);
                    cout << "Contact : +91-0891-3536379";
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
            cout << "ARUNACHAL PRADESH";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. ITANAGAR";
            gotoxy(25, 71);
            cout << "2. PAMPUMPARE";
            gotoxy(25, 72);
            cout << "3. CHANGLANG";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin>>Arunachal_Pradesh;
            switch (Arunachal_Pradesh) {
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
            cout << "ASSAM";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. DISPUR";
            gotoxy(25, 71);
            cout << "2. GUWAHATI";
            gotoxy(25, 72);
            cout << "3. SILCHAR";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin>>Assam;
            switch (Assam) {
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
            cout << "BIHAR";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. PATNA";
            gotoxy(25, 71);
            cout << "2. MUZAFFARPUR";
            gotoxy(25, 72);
            cout << "3. PURBI CHAMPARAN";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin>>Bihar;
            switch (Bihar) {
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
            cout << "CHHATTISGARH";
            gotoxy(25, 69);
            cout << "Choose Your City:";
            gotoxy(25, 70);
            cout << "1. RAIPUR";
            gotoxy(25, 71);
            cout << "2. BHILAI";
            gotoxy(25, 72);
            cout << "3. BILASPUR";
            gotoxy(25, 74);
            cout << "Choice : ";
            cin>>Chhattisgarh;
            switch (Chhattisgarh) {
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
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            break;
        case 13:
            break;
        case 14:
            break;
        case 15:
            break;
        case 16:
            break;
        case 17:
            break;
        case 18:
            break;
        case 19:
            break;
        case 20:
            break;
        case 21:
            break;
        case 22:
            break;
        case 23:
            break;
        case 24:
            break;
        case 25:
            break;
        case 26:
            break;
        case 27:
            break;
        case 28:
            break;
        case 29:
            break;
        case 30:
            break;
        case 31:
            break;
        case 32:
            break;
        case 33:
            break;
        case 34:
            break;
        case 35:
            break;
        case 36:
            break;
        case 37:
            break;
        default:
            break;

    }
}

