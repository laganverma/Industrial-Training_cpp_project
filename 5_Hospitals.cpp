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
            gotoxy(25, 39);
            cout << "MAHARASHTRA";
            gotoxy(25, 41);
            cout << "Choose Your City:";
            gotoxy(25, 42);
            cout << "1. MUMBAI";
            gotoxy(25, 43);
            cout << "2. PUNE";
            gotoxy(25, 44);
            cout << "3. NASHIK";
            gotoxy(25, 45);
            cout << "Choice : ";
            cin >> Maharashtra;
            switch (Maharashtra) {
                case 1:
                    gotoxy(25, 47);
                    cout << "A)MUMBAI";
                    gotoxy(25, 49);
                    cout << "(i)  Hospital - Nanavati Super Speciality Hospital";
                    gotoxy(25, 50);
                    cout << "     Address  - S.V. Road, Opposite Pavan Hans & Juhu Beach,Vileparle West, Mumbai";
                    gotoxy(25, 51);
                    cout << "     Contact  - +91 22 2626 7500 , +91 22 2626 7777";
                    gotoxy(25, 53);
                    cout << "(ii) Hospital - Fortis Hospital Mulund";
                    gotoxy(25, 54);
                    cout << "     Address  - Mulund Goregaon Link Road, Industrial Area,Mulund West, Mumbai";
                    gotoxy(25, 55);
                    cout << "     Contact  - +91 22 4111 4111, +91 9606 047 050";
                    gotoxy(25, 57);
                    cout << "(iii)Hospital - Tata Memorial Hospital(govt.)";
                    gotoxy(25, 58);
                    cout << "     Address  - Dr. E Borges Road, Parel, Mumbai 400012";
                    gotoxy(25, 59);
                    cout << "     Contact  - +91-22- 24177000, +91-22-24146750";
                    break;
                case 2:
                    gotoxy(25, 47);
                    cout << "B)PUNE";
                    gotoxy(25, 49);
                    cout << "(i)  Hospital - Columbia Asia Hospital Pune";
                    gotoxy(25, 50);
                    cout << "     Address  - 22, 2A, Mundhwa - Kharadi Rd, Near Nyati Empire, Santipur, Thite Nagar, Kharadi,";
                    gotoxy(25, 51);
                    cout << "                Pune, Maharashtra 411001";
                    gotoxy(25, 52);
                    cout << "     Contact  - +91 20 6165 6666, +91 20 7129 0129";
                    gotoxy(25, 54);
                    cout << "(ii) Hospital - Jehangir Hospital";
                    gotoxy(25, 55);
                    cout << "     Address  - 32, Sasoon Rd, Opposite Railway Station, Central Excise Colony, ";
                    gotoxy(25, 56);
                    cout << "                Sangamvadi, Pune, Maharashtra 411001";
                    gotoxy(25, 57);
                    cout << "     Contact  - +91 20 6681 9999, +91 20 6681 9966";
                    gotoxy(25, 59);
                    cout << "(iii)Hospital - Pune Adventist Hospital";
                    gotoxy(25, 60);
                    cout << "     Address  - Salisbury Park, Post Box 1405, Market Yard, Gultekdi, Pune, Maharashtra 411037";
                    gotoxy(25, 61);
                    cout << "     Contact  - +91-020 2452 6771";
                    break;
                case 3:
                    gotoxy(25, 47);
                    cout << "C)NASHIK";
                    gotoxy(25, 49);
                    cout << "(i)  Hospital - Sahyadri Super Speciality Hospital Nashik";
                    gotoxy(25, 50);
                    cout << "     Address  - Mumbai-Agra Road, Wadala Rd, near Nashik, Dwarka Circle, Maharashtra 422001";
                    gotoxy(25, 51);
                    cout << "     Contact  - +91 253 669 1666";
                    gotoxy(25, 53);
                    cout << "(ii) Hospital - Wockhardt Hospital, Nashik";
                    gotoxy(25, 54);
                    cout << "     Address  - Wani House, Mumbai - Agra National Hwy, Wadala Naka, Nashik, Maharashtra 422001";
                    gotoxy(25, 55);
                    cout << "     Contact  - +91 253 662 4444, +91 253 662 4100";
                    gotoxy(25, 57);
                    cout << "(iii)Hospital - NIMS Hospital";
                    gotoxy(25, 58);
                    cout << "     Address  - Gangapur Rd, Thatte Nagar, Nashik, Maharashtra 422005";
                    gotoxy(25, 59);
                    cout << "     Contact  - +91 253 231 5050";
                    break;
                default:
                    break;
            }
            break;
        case 2:
            gotoxy(25, 39);
            cout << "KERALA";
            gotoxy(25, 41);
            cout << "Choose Your City:";
            gotoxy(25, 42);
            cout << "1. THIRUVANANTHAPURAM";
            gotoxy(25, 43);
            cout << "2. KOZHIKODE";
            gotoxy(25, 44);
            cout << "3. KOCHI";
            gotoxy(25, 45);
            cout << "Choice : ";
            cin >> Kerala;
            switch (Kerala) {
                case 1:
                    gotoxy(25, 47);
                    cout << "A)THIRUVANANTHAPURAM";
                    gotoxy(25, 49);
                    cout << "(i)  Hospital - Kerala Institute Of Medical Sciences (Kims)";
                    gotoxy(25, 50);
                    cout << "     Address  - P B No 1 Kumarapuram Poonthi Road Anamukham, Thiruvananthapuram, Kerala - 695024";
                    gotoxy(25, 51);
                    cout << "     Contact  - +91 0471 244 7575, +91 0471 244 7676";
                    gotoxy(25, 53);
                    cout << "(ii) Hospital - Ananthapuri Hospitals and Research Institute (AHRI)";
                    gotoxy(25, 54);
                    cout << "     Address  - NH bypass 66, Airport Rd, near Courtyard Garden, Chackai";
                    gotoxy(25, 55);
                    cout<<"                Thiruvananthapuram, Kerala 695024";
                    gotoxy(25, 56);
                    cout << "     Contact  - +91 0471 250 7575, +91 0471 257 9900";
                    gotoxy(25, 58);
                    cout << "(iii)Hospital - Sree uthradom thirunal hospital(SUT)";
                    gotoxy(25, 59);
                    cout << "     Address  - Pattom Palace , P. O, Thiruvananthapuram, Kerala - 695004";
                    gotoxy(25, 60);
                    cout << "     Contact  - +91 0471 407 7777, +91 0471 407 7888";
                    break;
                case 2:
                    gotoxy(25, 47);
                    cout << "B)KOZHIKODE";
                    gotoxy(25, 49);
                    cout << "(i)  Hospital - Aster Malabar Institute of Medical Sciences (MIMS Hospital)";
                    gotoxy(25, 50);
                    cout << "     Address  - Mini Bypass Rd, Govindapuram, Kozhikode, Kerala 673016";
                    gotoxy(25, 51);
                    cout << "     Contact  - +91 0495 248 8000,+ 91-495- 3911 400";
                    gotoxy(25, 53);
                    cout << "(ii) Hospital - Baby Memorial Hospital";
                    gotoxy(25, 54);
                    cout << "     Address  - Indira Gandhi Rd, Arayidathupalam, Kozhikode, Kerala 673004";
                    gotoxy(25, 55);
                    cout << "     Contact  - +91 495 272 3272 , +91 495 277 7777";
                    gotoxy(25, 57);
                    cout << "(iii)Hospital - PVS Hospital";
                    gotoxy(25, 58);
                    cout << "     Address  - Railway Station Rd, near Railway Station, Palayam, Kozhikode, Kerala 673002";
                    gotoxy(25, 59);
                    cout << "     Contact  - +91 0495 270 7222, +91 0495 270 7333";
                    break;
                case 3:
                    gotoxy(25, 47);
                    cout << "C)KOCHI";
                    gotoxy(25, 49);
                    cout << "(i)  Hospital - Rajagiri Hospital";
                    gotoxy(25, 50);
                    cout << "     Address  - Near GTN Junction, Chunangamvely Aluva, Kochi, Kerala 683112";
                    gotoxy(25, 51);
                    cout << "     Contact  - +91 0484 290 5000";
                    gotoxy(25, 53);
                    cout << "(ii) Hospital - Medical Trust Hospital ";
                    gotoxy(25, 54);
                    cout << "     Address  - Mahatma Gandhi Rd, Pallimukku, Kochi, Kerala 682016";
                    gotoxy(25, 55);
                    cout << "     Contact  - +91 0484 235 8001 ";
                    gotoxy(25, 57);
                    cout << "(iii)Hospital - Lourdes Hospital";
                    gotoxy(25, 58);
                    cout << "     Address  - Lourdes hospital Road Near Ernakulam Town Railway station Pachalam";
                    gotoxy(25, 59);
                    cout << "                Kochi, Kerala 682012";
                    gotoxy(25, 60);
                    cout << "     Contact  - +91 0484 4125555, +91 0484 4121101";
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