#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
COORD coord = {0, 0};

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

class BP {
    long sys, dia;
public:
    void Input() {
        gotoxy(25, 23);
        cout << "ENTER SYSTOLIC PRESSURE VALUES (TOP NUMBER) = ";
        cin >> sys;
        gotoxy(25, 24);
        cout << "ENTER DIASTOLIC PRESSURE VALUES (BOTTOM NUMBER) = ";
        cin >> dia;
    }

    void High() const {
        if (sys <= 120 && dia <= 80) {
            gotoxy(44, 26);
            cout << "YOUR BP IS IN NORMAL RANGE" << endl;
        } else if (sys <= 129 && dia < 80) {
            gotoxy(44, 26);
            cout << "YOUR BP IS ELEVATED" << endl;
        } else if (sys <= 139 && dia <= 89) {
            gotoxy(44, 26);
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 1)" << endl;
        } else if (sys <= 179 && dia <= 119) {
            gotoxy(44, 26);
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 2)" << endl;
        } else if (sys >= 180 && dia >= 120) {
            gotoxy(44, 26);
            cout << "YOUR BP IS VERY HIGH" << endl;
        }
    }
};


int main() {
    int main;


    gotoxy(25, 0);
    cout << "\n\n\n\t\t\t"
            "Loading....\n\t\t\t";
    char x = 219;

    for (int i = 0; i < 50; i++) {
        {
            _sleep(50);

            cout << x;
        }
    }
    retry:
    gotoxy(25, 6);
    cout << "1.BP CALCULATOR";
    gotoxy(25, 7);
    cout << "2.OXYGEN CALCULATOR";
    gotoxy(25, 8);
    cout << "3.BMI(BODY MASS INDEX) - CALCULATOR";
    gotoxy(25, 9);
    cout << "4.COVID SYMPTOMS";
    gotoxy(25, 10);
    cout << "5.COVID HOSPITALS";
    gotoxy(25, 11);
    cout << "6.INFORMATION REGARDING COVID-19 VACCINE IN INDIA";
    gotoxy(25, 12);
    cout << "7.TRY AGAIN";
    gotoxy(25, 13);
    cout << "8.7EXIT";
    gotoxy(25, 15);
    cout << "ENTER YOUR CHOICE = ";
    cin >> main;


    switch (main) {
        case 1:
            gotoxy(25, 17);
            cout << "---------------------------------------------------------------------------";
            gotoxy(45, 18);
            cout << "BP (BLOOD PRESSURE) - CALCULATOR";
            gotoxy(25, 19);
            cout << "---------------------------------------------------------------------------";
            gotoxy(44, 21);
            cout << "******Welcome to Bp Calculator******";
            BP user;
            user.Input();
            user.High();
            break;
        case 2:
            gotoxy(25, 16);
            cout << "OXYGEN CALCULATOR";
            break;
        case 3:
        run:
            int main;
            float bmi, w, h;//weight and height
            int s;
            int s_1, s_2;
            int h_1;
            double convert_1;
            double convert_2;
            double convert_3;
            int x;
            int ex;
            gotoxy(25, 17);
            cout << "---------------------------------------------------------------------------";
            gotoxy(45, 18);
            cout << "BMI (BODY MASS INDEX) - CALCULATOR";
            gotoxy(25, 19);
            cout << "---------------------------------------------------------------------------";
            gotoxy(44, 21);
            cout << "******Welcome to Bmi Calculator******";
            gotoxy(25, 24);
            cout << "1. CALCULATE YOUR BMI";
            gotoxy(25, 25);
            cout << "2. BMI REFERENCE TABLE";
            gotoxy(25, 26);
            cout << "3. EXIT";
            gotoxy(25, 27);
            cout << "ENTER YOUR CHOICE : ";
            cin >> x;
            switch (x) {
                case 1:
                    gotoxy(53, 30);
                    cout << "CALCULATE YOUR BMI";
                    gotoxy(25, 32);
                    cout << "Enter your weight in : ";
                    gotoxy(25, 33);
                    cout << "1. Kilogram(Kg)";
                    gotoxy(25, 34);
                    cout << "2. Pound(lbs)";
                    gotoxy(25, 35);
                    cout << "3. Exit";
                    gotoxy(25, 36);
                    cout << "Choice = ";
                    cin >> s;
                    switch (s) {
                        case 1:
                            gotoxy(25, 37);
                            cout << "Please Enter your Weight in Kg : ";
                            cin >> w;
                            gotoxy(25, 39);
                            cout << "Enter Your Height in : ";
                            gotoxy(25, 40);
                            cout << "1.Cm";
                            gotoxy(25, 41);
                            cout << "2.Feet and Inches";
                            gotoxy(25, 42);
                            cout << "3. Exit";
                            gotoxy(25, 43);
                            cout << "Choice = ";
                            cin >> s_1;
                            switch (s_1) {
                                case 1://Kg and cm (metric)
                                    gotoxy(25, 44);
                                    cout << "Please Enter your Height in Cm : ";
                                    cin >> h;
                                    bmi = (w) / (h * h) * 10000;
                                    gotoxy(25, 46);
                                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                                    break;
                                case 2://Kg and Inches (Custom)
                                    gotoxy(25, 44);
                                    cout << "Please Enter your Height in Feet: ";
                                    cin >> h;
                                    gotoxy(25, 45);
                                    cout << "Please Enter your Height in inches: ";
                                    cin >> h_1;
                                    convert_2 = (h * 12) + h_1;
                                    convert_1 = w * 2.20462; //kg to pound  1 kg = 2.20462
                                    bmi = (convert_1 * 703) / (convert_2 * convert_2);
                                    gotoxy(25, 47);
                                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                                    break;
                                case 3:
                                    cout << "THANK YOU\n\n\n\n\n\n\n";
                                    exit(0);
                                    break;
                            }
                            break;
                        case 2:
                            gotoxy(25, 37);
                            cout << "Please Enter your weight in Pounds : ";
                            cin >> w;
                            gotoxy(25, 39);
                            cout << "Enter Your Height in : ";
                            gotoxy(25, 40);
                            cout << "1.Cm";
                            gotoxy(25, 41);
                            cout << "2.Feet and Inches";
                            gotoxy(25, 42);
                            cout << "3. Exit";
                            gotoxy(25, 43);
                            cout << "Choice = ";
                            cin >> s_2;
                            switch (s_2) {
                                case 1://Pound and Cm (Custom)
                                    gotoxy(25, 44);
                                    cout << "Please Enter your Height in Cm : ";
                                    cin >> h;
                                    convert_3 = w / 2.20462;//pound to kg
                                    bmi = (convert_3) / (h * h) * 10000;
                                    gotoxy(25, 46);
                                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                                    break;
                                case 2://Pound and Inches (english)
                                    gotoxy(25, 44);
                                    cout << "Please Enter your Height in Feet: ";
                                    cin >> h;
                                    gotoxy(25, 45);
                                    cout << "Please Enter your Height in inches: ";
                                    cin >> h_1;
                                    convert_2 = (h * 12) + h_1;
                                    bmi = (w * 703) / (convert_2 * convert_2);
                                    gotoxy(25, 47);
                                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                                    break;
                                case 3:
                                    cout << "THANK YOU\n\n\n\n\n\n\n";
                                    exit(0);
                                    break;
                            }
                        case 3:
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                            break;
                    }


                    // OBESE
                    if (bmi > 30) {
                        gotoxy(25, 49);
                        cout << "_Obese_";
                        int a;
                        gotoxy(25, 51);
                        cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN BELOW:";
                        gotoxy(25, 52);
                        cout << "1. DIET PLAN";
                        gotoxy(25, 53);
                        cout << "2. RUN AGAIN";
                        gotoxy(25, 54);
                        cout << "3. EXIT";
                        gotoxy(25, 56);
                        cout << "Choice = ";
                        cin >> a;
                        switch (a) {
                            case 1:
                                gotoxy(25, 57);
                                cout << "DIET PLAN";
                                gotoxy(25, 58);
                                cout << "1.Vegetarian";
                                gotoxy(25, 59);
                                cout << "2.Non-Vegetarian";
                                gotoxy(25, 61);
                                cout << "Choice = ";
                                int veg;
                                cin >> veg;
                                switch (veg) {
                                    case 1:
                                        gotoxy(25, 63);
                                        cout << "Plz Click On The Link For Vegetarian Diet Plan";
                                        gotoxy(25, 64);
                                        cout << "https://bit.ly/3qP1lvH";
                                        gotoxy(25, 66);
                                        cout << "1. EXIT";
                                        gotoxy(25, 67);
                                        cout << "2. CALCULATE AGAIN";
                                        gotoxy(25, 69);
                                        cout << "Choice = ";
                                        cin >> ex;
                                        switch (ex) {
                                            case 1:
                                                gotoxy(25, 71);
                                                cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                                break;
                                            case 2:
                                                goto run;
                                                break;
                                        }
                                        break;
                                    case 2:
                                        gotoxy(25, 63);
                                        cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                                        gotoxy(25, 64);
                                        cout << "https://bit.ly/3qP1lvH";
                                        gotoxy(25, 66);
                                        cout << "1. EXIT";
                                        gotoxy(25, 67);
                                        cout << "2. CALCULATE AGAIN";
                                        gotoxy(25, 69);
                                        cout << "Choice = ";
                                        cin >> ex;
                                        switch (ex) {
                                            case 1:
                                                gotoxy(25, 71);
                                                cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                                break;
                                            case 2:
                                                goto run;
                                                break;
                                        }
                                        break;
                                }
                                break;
                            case 3:
                                cout << "THANK YOU\n\n\n\n\n\n\n";
                                exit(0);
                                break;
                        }
                    }
                        // OVERWEIGHT
                    else if (bmi < 30 && bmi > 25) {
                        gotoxy(25, 49);
                        cout << "_Overweight_";
                        int a;
                        gotoxy(25, 51);
                        cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN BELOW:";
                        gotoxy(25, 52);
                        cout << "1. DIET PLAN";
                        gotoxy(25, 53);
                        cout << "2. RUN AGAIN";
                        gotoxy(25, 54);
                        cout << "3. EXIT";
                        gotoxy(25, 56);
                        cout << "Choice = ";
                        cin >> a;
                        switch (a) {
                            case 1:
                                gotoxy(25, 57);
                                cout << "DIET PLAN";
                                gotoxy(25, 58);
                                cout << "1.Vegetarian";
                                gotoxy(25, 59);
                                cout << "2.Non-Vegetarian";
                                gotoxy(25, 61);
                                cout << "Choice = ";
                                int veg;
                                cin >> veg;
                                switch (veg) {
                                    case 1:
                                        gotoxy(25, 63);
                                        cout << "Plz Click On The Link For Vegetarian Diet Plan";
                                        gotoxy(25, 65);
                                        cout << "1. https://bit.ly/3hkpOWw ";
                                        gotoxy(25, 66);
                                        cout << "2. https://bit.ly/3k3d5th ";
                                        gotoxy(25, 66);
                                        cout << "1. EXIT";
                                        gotoxy(25, 67);
                                        cout << "2. CALCULATE AGAIN";
                                        gotoxy(25, 69);
                                        cout << "Choice = ";
                                        cin >> ex;
                                        switch (ex) {
                                            case 1:
                                                gotoxy(25, 71);
                                                cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                                break;
                                            case 2:
                                                goto run;
                                                break;
                                        }
                                        break;
                                    case 2:
                                        gotoxy(25, 63);
                                        cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                                        gotoxy(25, 64);
                                        cout << "https://bit.ly/2VgfXsg ";
                                        gotoxy(25, 66);
                                        cout << "1. EXIT";
                                        gotoxy(25, 67);
                                        cout << "2. CALCULATE AGAIN";
                                        gotoxy(25, 69);
                                        cout << "Choice = ";
                                        cin >> ex;
                                        switch (ex) {
                                            case 1:
                                                gotoxy(25, 71);
                                                cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                                break;
                                            case 2:
                                                goto run;
                                                break;
                                        }
                                        break;
                                }
                                break;
                            case 3:
                                cout << "THANK YOU\n\n\n\n\n\n\n";
                                exit(0);
                                break;
                        }
                    }
                        // OPTIMAL
                    else if (bmi < 25 && bmi > 18.5) {
                        gotoxy(25, 49);
                        cout << "_Optimal_";
                        int a;
                        gotoxy(25, 51);
                        cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN BELOW:";
                        gotoxy(25, 52);
                        cout << "1. DIET PLAN";
                        gotoxy(25, 53);
                        cout << "2. RUN AGAIN";
                        gotoxy(25, 54);
                        cout << "3. EXIT";
                        gotoxy(25, 56);
                        cout << "Choice = ";
                        cin >> a;
                        switch (a) {
                            case 1:
                                gotoxy(25, 57);
                                cout << "DIET PLAN";
                                gotoxy(25, 58);
                                cout << "1.Vegetarian";
                                gotoxy(25, 59);
                                cout << "2.Non-Vegetarian";
                                gotoxy(25, 61);
                                cout << "Choice = ";
                                int veg;
                                cin >> veg;
                                switch (veg) {
                                    case 1:
                                        gotoxy(25, 63);
                                        cout << "Plz Click On The Link For Vegetarian Diet Plan";
                                        gotoxy(25, 64);
                                        cout << "We are just finding it";
                                        gotoxy(25, 66);
                                        cout << "1. EXIT";
                                        gotoxy(25, 67);
                                        cout << "2. CALCULATE AGAIN";
                                        gotoxy(25, 69);
                                        cout << "Choice = ";
                                        cin >> ex;
                                        switch (ex) {
                                            case 1:
                                                gotoxy(25, 71);
                                                cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                                break;
                                            case 2:
                                                goto run;
                                                break;
                                        }
                                        break;
                                    case 2:
                                        gotoxy(25, 63);
                                        cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                                        gotoxy(25, 64);
                                        cout << "https://bit.ly/3wm38cK";
                                        gotoxy(25, 66);
                                        cout << "1. EXIT";
                                        gotoxy(25, 67);
                                        cout << "2. CALCULATE AGAIN";
                                        gotoxy(25, 69);
                                        cout << "Choice = ";
                                        cin >> ex;
                                        switch (ex) {
                                            case 1:
                                                gotoxy(25, 71);
                                                cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                                break;
                                            case 2:
                                                goto run;
                                                break;
                                        }
                                        break;
                                }
                                break;
                            case 3:
                                cout << "THANK YOU\n\n\n\n\n\n\n";
                                exit(0);
                                break;
                        }
                    }
                        // UNDERWEIGHT
                    else {
                        gotoxy(25, 49);
                        cout << "_Underweight_";
                        int a;
                        gotoxy(25, 51);
                        cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN BELOW:";
                        gotoxy(25, 52);
                        cout << "1. DIET PLAN";
                        gotoxy(25, 53);
                        cout << "2. EXIT";
                        gotoxy(25, 54);
                        cout << "3. RUN AGAIN";
                        gotoxy(25, 56);
                        cout << "Choice = ";
                        cin >> a;
                        switch (a) {
                            case 1:
                                gotoxy(25, 57);
                                cout << "DIET PLAN";
                                gotoxy(25, 58);
                                cout << "1.Vegetarian";
                                gotoxy(25, 59);
                                cout << "2.Non-Vegetarian";
                                gotoxy(25, 61);
                                cout << "Choice = ";
                                int veg;
                                cin >> veg;
                                switch (veg) {
                                    case 1:
                                        gotoxy(25, 63);
                                        cout << "Plz Click On The Link For Vegetarian Diet Plan";
                                        gotoxy(25, 64);
                                        cout << "1. https://bit.ly/3jQL3Rl";
                                        gotoxy(25, 65);
                                        cout << "2. https://bit.ly/36mCSVc";
                                        gotoxy(25, 66);
                                        cout << "1. EXIT";
                                        gotoxy(25, 67);
                                        cout << "2. CALCULATE AGAIN";
                                        gotoxy(25, 69);
                                        cout << "Choice = ";
                                        cin >> ex;
                                        switch (ex) {
                                            case 1:
                                                gotoxy(25, 71);
                                                cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                                break;
                                            case 2:
                                                goto run;
                                                break;
                                        }
                                        break;

                                    case 2:
                                        gotoxy(25, 63);
                                        cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                                        gotoxy(25, 64);
                                        cout << "https://bit.ly/36mCSVc";
                                        gotoxy(25, 66);
                                        cout << "1. EXIT";
                                        gotoxy(25, 67);
                                        cout << "2. CALCULATE AGAIN";
                                        gotoxy(25, 69);
                                        cout << "Choice = ";
                                        cin >> ex;
                                        switch (ex) {
                                            case 1:
                                                gotoxy(25, 71);
                                                cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                                break;
                                            case 2:
                                                goto run;
                                                break;
                                        }
                                        break;
                                }
                                break;
                            case 3:
                                cout << "THANK YOU\n\n\n\n\n\n\n";
                                exit(0);
                                break;
                        }
                    }
                    break;

                case 2:
                    gotoxy(48, 30);
                    cout << "BMI REFERENCE TABLE";
                    gotoxy(28, 32);
                    cout << "_B.M.I_" << "\t\t\t\t\t" << "_WEIGHT STATUS_" << endl << endl;
                    gotoxy(25, 34);
                    cout << "1. BELOW 18.5     " << "\t" << " <---------------> " << "\t" << "UNDER_WEIGHT" << endl;
                    gotoxy(25, 35);
                    cout << "2. 18.5 - 24.9     " << "\t" << " <---------------> " << "\t" << "NORMAL OR HEALTHY_WEIGHT"
                         << endl;
                    gotoxy(25, 36);
                    cout << "3. 25.0 - 29.9     " << "\t" << " <---------------> " << "\t" << "OVER_WEIGHT" << endl;
                    gotoxy(25, 37);
                    cout << "4. 30.0 AND ABOVE" << "\t" << " <---------------> " << "\t" << "OBESE" << endl << endl;
                    break;
                case 3:
                    gotoxy(25, 30);
                    cout << "THANK YOU\n\n\n\n\n\n\n";
                    exit(0);
                    break;
            }
        case 4:
            gotoxy(25, 16);
            cout << "COVID SYMPTOMS";
            break;
        case 5:
            gotoxy(25, 16);
            cout << "COVID HOSPITALS";
            int states;
            int Maharashtra;
            int Kerala;
            int Karnataka;
            int Tamil_Nadu;
            int Andhra_Pradesh;
            int Uttar_Pradesh;
            int West_Bengal;
            int Punjab;
            int Rajasthan;

        hospital_rerun:
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
            cout << "1.  MAHARASHTRA";
            gotoxy(25, 27);
            cout << "2.  KERALA";
            gotoxy(25, 28);
            cout << "3.  KARNATAKA";
            gotoxy(25, 29);
            cout << "4.  TAMIL NADU";
            gotoxy(25, 30);
            cout << "5.  ANDHRA PRADESH";
            gotoxy(25, 31);
            cout << "6.  UTTAR PRADESH";
            gotoxy(25, 32);
            cout << "7.  WEST BENGAL";
            gotoxy(25, 33);
            cout << "8.  DELHI";
            gotoxy(25, 34);
            cout << "9.  PUNJAB";
            gotoxy(25, 35);
            cout << "10. RAJASTHAN";
            gotoxy(25, 36);
            cout << "11. OTHERS";
            gotoxy(25, 37);
            cout << "12. RERUN";
            gotoxy(25, 38);
            cout << "13. EXIT";
            gotoxy(25, 39);

            gotoxy(25, 41);
            cout << "ENTER YOUR CHOICE : ";
            cin >> states;
            switch (states) {
                case 1:
                    gotoxy(25, 43);
                    cout << "MAHARASHTRA";
                    gotoxy(25, 45);
                    cout << "Choose Your City:";
                    gotoxy(25, 46);
                    cout << "1. MUMBAI";
                    gotoxy(25, 47);
                    cout << "2. PUNE";
                    gotoxy(25, 48);
                    cout << "3. NASHIK";
                    gotoxy(25, 49);
                    cout << "4. OTHERS";
                    gotoxy(25, 51);
                    cout << "Choice : ";
                    cin >> Maharashtra;
                    switch (Maharashtra) {
                        case 1:
                            gotoxy(25, 53);
                            cout << "A)MUMBAI";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Nanavati Super Speciality Hospital";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - S.V. Road, Opposite Pavan Hans & Juhu Beach,Vileparle West, Mumbai";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 22 2626 7500 , +91 22 2626 7777";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Fortis Hospital Mulund";
                            gotoxy(25, 60);
                            cout << "     Address  - Mulund Goregaon Link Road, Industrial Area,Mulund West, Mumbai";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 22 4111 4111, +91 9606 047 050";
                            gotoxy(25, 63);
                            cout << "(iii)Hospital - Tata Memorial Hospital(govt.)";
                            gotoxy(25, 64);
                            cout << "     Address  - Dr. E Borges Road, Parel, Mumbai 400012";
                            gotoxy(25, 65);
                            cout << "     Contact  - +91-22- 24177000, +91-22-24146750";
                            break;
                        case 2:
                            gotoxy(25, 53);
                            cout << "B)PUNE";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Columbia Asia Hospital Pune";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - 22, 2A, Mundhwa - Kharadi Rd, Near Nyati Empire, Santipur, Thite Nagar, Kharadi,";
                            gotoxy(25, 57);
                            cout << "                Pune, Maharashtra 411001";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 20 6165 6666, +91 20 7129 0129";
                            gotoxy(25, 60);
                            cout << "(ii) Hospital - Jehangir Hospital";
                            gotoxy(25, 61);
                            cout << "     Address  - 32, Sasoon Rd, Opposite Railway Station, Central Excise Colony, ";
                            gotoxy(25, 62);
                            cout << "                Sangamvadi, Pune, Maharashtra 411001";
                            gotoxy(25, 63);
                            cout << "     Contact  - +91 20 6681 9999, +91 20 6681 9966";
                            gotoxy(25, 65);
                            cout << "(iii)Hospital - Pune Adventist Hospital";
                            gotoxy(25, 66);
                            cout
                                    << "     Address  - Salisbury Park, Post Box 1405, Market Yard, Gultekdi, Pune, Maharashtra 411037";
                            gotoxy(25, 67);
                            cout << "     Contact  - +91-020 2452 6771";
                            break;
                        case 3:
                            gotoxy(25, 53);
                            cout << "C)NASHIK";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Sahyadri Super Speciality Hospital Nashik";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - Mumbai-Agra Road, Wadala Rd, near Nashik, Dwarka Circle, Maharashtra 422001";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 253 669 1666";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Wockhardt Hospital, Nashik";
                            gotoxy(25, 60);
                            cout
                                    << "     Address  - Wani House, Mumbai - Agra National Hwy, Wadala Naka, Nashik, Maharashtra 422001";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 253 662 4444, +91 253 662 4100";
                            gotoxy(25, 63);
                            cout << "(iii)Hospital - NIMS Hospital";
                            gotoxy(25, 64);
                            cout << "     Address  - Gangapur Rd, Thatte Nagar, Nashik, Maharashtra 422005";
                            gotoxy(25, 65);
                            cout << "     Contact  - +91 253 231 5050";
                            break;
                        case 4:
                            gotoxy(25, 53);
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            gotoxy(25, 54);
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 2:
                    gotoxy(25, 43);
                    cout << "KERALA";
                    gotoxy(25, 45);
                    cout << "Choose Your City:";
                    gotoxy(25, 46);
                    cout << "1. THIRUVANANTHAPURAM";
                    gotoxy(25, 47);
                    cout << "2. KOZHIKODE";
                    gotoxy(25, 48);
                    cout << "3. KOCHI";
                    gotoxy(25, 49);
                    cout << "4. OTHERS";
                    gotoxy(25, 51);
                    cout << "Choice : ";
                    cin >> Kerala;
                    switch (Kerala) {
                        case 1:
                            gotoxy(25, 53);
                            cout << "A)THIRUVANANTHAPURAM";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Kerala Institute Of Medical Sciences (Kims)";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - P B No 1 Kumarapuram Poonthi Road Anamukham, Thiruvananthapuram, Kerala - 695024";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 0471 244 7575, +91 0471 244 7676";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Ananthapuri Hospitals and Research Institute (AHRI)";
                            gotoxy(25, 60);
                            cout << "     Address  - NH bypass 66, Airport Rd, near Courtyard Garden, Chackai";
                            gotoxy(25, 61);
                            cout << "                Thiruvananthapuram, Kerala 695024";
                            gotoxy(25, 62);
                            cout << "     Contact  - +91 0471 250 7575, +91 0471 257 9900";
                            gotoxy(25, 64);
                            cout << "(iii)Hospital - Sree uthradom thirunal hospital(SUT)";
                            gotoxy(25, 65);
                            cout << "     Address  - Pattom Palace , P. O, Thiruvananthapuram, Kerala - 695004";
                            gotoxy(25, 66);
                            cout << "     Contact  - +91 0471 407 7777, +91 0471 407 7888";
                            break;
                        case 2:
                            gotoxy(25, 53);
                            cout << "B)KOZHIKODE";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Aster Malabar Institute of Medical Sciences (MIMS Hospital)";
                            gotoxy(25, 56);
                            cout << "     Address  - Mini Bypass Rd, Govindapuram, Kozhikode, Kerala 673016";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 0495 248 8000,+ 91-495- 3911 400";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Baby Memorial Hospital";
                            gotoxy(25, 60);
                            cout << "     Address  - Indira Gandhi Rd, Arayidathupalam, Kozhikode, Kerala 673004";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 495 272 3272 , +91 495 277 7777";
                            gotoxy(25, 63);
                            cout << "(iii)Hospital - PVS Hospital";
                            gotoxy(25, 64);
                            cout
                                    << "     Address  - Railway Station Rd, near Railway Station, Palayam, Kozhikode, Kerala 673002";
                            gotoxy(25, 65);
                            cout << "     Contact  - +91 0495 270 7222, +91 0495 270 7333";
                            break;
                        case 3:
                            gotoxy(25, 53);
                            cout << "C)KOCHI";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Rajagiri Hospital";
                            gotoxy(25, 56);
                            cout << "     Address  - Near GTN Junction, Chunangamvely Aluva, Kochi, Kerala 683112";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 0484 290 5000";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Medical Trust Hospital ";
                            gotoxy(25, 60);
                            cout << "     Address  - Mahatma Gandhi Rd, Pallimukku, Kochi, Kerala 682016";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 0484 235 8001 ";
                            gotoxy(25, 63);
                            cout << "(iii)Hospital - Lourdes Hospital";
                            gotoxy(25, 64);
                            cout
                                    << "     Address  - Lourdes hospital Road Near Ernakulam Town Railway station Pachalam";
                            gotoxy(25, 65);
                            cout << "                Kochi, Kerala 682012";
                            gotoxy(25, 66);
                            cout << "     Contact  - +91 0484 4125555, +91 0484 4121101";
                            break;
                        case 4:
                            gotoxy(25, 53);
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            gotoxy(25, 54);
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 3:
                    gotoxy(25, 39);
                    cout << "KARNATAKA";
                    gotoxy(25, 41);
                    cout << "Choose Your City:";
                    gotoxy(25, 42);
                    cout << "1. BANGLORE";
                    gotoxy(25, 43);
                    cout << "2. MYSORE";
                    gotoxy(25, 44);
                    cout << "3. MANGALORE";
                    gotoxy(25, 45);
                    cout << "4. OTHERS";
                    gotoxy(25, 47);
                    cout << "Choice : ";
                    cin >> Karnataka;
                    switch (Karnataka) {
                        case 1:
                            gotoxy(25, 49);
                            cout << "A)BANGLORE";
                            gotoxy(25, 51);
                            cout << "(i)  Hospital - Apollo Hospitals";
                            gotoxy(25, 52);
                            cout
                                    << "     Address  - 154/11,Bannerghatta Road, Amalodbhavi Nagar, Panduranga Nagar,Bangalore 560076";
                            gotoxy(25, 53);
                            cout << "     Contact  - +91-80-2630 4050";
                            gotoxy(25, 55);
                            cout << "(ii) Hospital - Bangalore Baptist Hospital";
                            gotoxy(25, 56);
                            cout << "     Address  - Bellary Rd, Vinayakanagar, Hebbal, Bengaluru, Karnataka 560024";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 080 2202 4700";
                            gotoxy(25, 59);
                            cout << "(iii)Hospital - Divakars Speciality Hospital";
                            gotoxy(25, 60);
                            cout
                                    << "     Address  - No. 220, 9th Cross Rd, Next to Nilgiris, Jeewan Griha Colony, 2nd Phase,";
                            gotoxy(25, 61);
                            cout << "                J. P. Nagar, Bengaluru, Karnataka 560078";
                            gotoxy(25, 62);
                            cout << "     Contact  - +91 080 4085 3500";
                            break;
                        case 2:
                            gotoxy(25, 49);
                            cout << "B)MYSORE";
                            gotoxy(25, 51);
                            cout << "(i)  Hospital - Columbia Asia Hospital Mysore";
                            gotoxy(25, 52);
                            cout
                                    << "     Address  -  No. 85-86, Bangalore-Mysore Ring Road Junction Bannimantapa 'A' Layout,";
                            gotoxy(25, 53);
                            cout << "                 Siddique Nagar, Mandi Mohalla, Mysuru, Karnataka 570015";
                            gotoxy(25, 54);
                            cout << "     Contact  - +91 821 255 5000";
                            gotoxy(25, 56);
                            cout << "(ii) Hospital - Narayana Multispeciality Hospital";
                            gotoxy(25, 57);
                            cout
                                    << "     Address  - CAH/1, 3rd Phase, Devanur, 2nd Stage, R.S.Naidu Nagar, Mysuru, Karnataka 570019";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 80675 06870";
                            gotoxy(25, 60);
                            cout << "(iii)Hospital - Cauvery Heart and Multispeciality Hospital";
                            gotoxy(25, 61);
                            cout
                                    << "     Address  - Malavalli - Mysore Rd, Near Teresian College, Siddhartha Layout, Mysuru,";
                            gotoxy(25, 62);
                            cout << "                Karnataka 570011";
                            gotoxy(25, 63);
                            cout << "     Contact  - +91 98446 98446";
                            break;
                        case 3:
                            gotoxy(25, 49);
                            cout << "C)MANGALORE";
                            gotoxy(25, 51);
                            cout << "(i)  Hospital - E.S.I. HOSPITAL KADRI MANGALORE";
                            gotoxy(25, 52);
                            cout << "     Address  - 3rd Cross Rd, Shivabagh, Kadri, Mangalore, Karnataka 575002";
                            gotoxy(25, 53);
                            cout << "     Contact  - +91 824 221 8630";
                            gotoxy(25, 55);
                            cout << "(ii) Hospital - KMC Hospital";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - Dr. B R Ambedkar Circle, opposite Jyothi Theater, Balmatta, Mangalore,";
                            gotoxy(25, 57);
                            cout << "                Karnataka 575001 ";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 824 222 2227";
                            gotoxy(25, 60);
                            cout << "(iii)Hospital - Highland Hospital";
                            gotoxy(25, 61);
                            cout << "     Address  - Highlands, Falnir, Mangalore, Karnataka 575002";
                            gotoxy(25, 62);
                            cout << "     Contact  - +91 824 2222 227";
                            break;
                        case 4:
                            gotoxy(25, 53);
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            gotoxy(25, 54);
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 4:
                    gotoxy(25, 43);
                    cout << "TAMIL NADU";
                    gotoxy(25, 45);
                    cout << "Choose Your City:";
                    gotoxy(25, 46);
                    cout << "1. CHENNAI";
                    gotoxy(25, 47);
                    cout << "2. COIMBATORE";
                    gotoxy(25, 48);
                    cout << "3. MADURAI";
                    gotoxy(25, 49);
                    cout << "4. OTHERS";
                    gotoxy(25, 51);
                    cout << "Choice : ";
                    cin >> Tamil_Nadu;
                    switch (Tamil_Nadu) {
                        case 1:
                            gotoxy(25, 53);
                            cout << "A)CHENNAI";
                            gotoxy(25, 54);
                            cout << "(i)  Hospital - Be Well Hospitals";
                            gotoxy(25, 55);
                            cout
                                    << "     Address  - 5A, Vijaya Raghava Rd, Drivers Colony, T. Nagar, Chennai, Tamil Nadu 600017";
                            gotoxy(25, 56);
                            cout << "     Contact  - +91 444 211 3010";
                            gotoxy(25, 58);
                            cout << "(ii) Hospital - Dr. Mehta's Hospitals";
                            gotoxy(25, 59);
                            cout << "     Address  - No.2, Mc Nichols Rd, Chetpet, Chennai, Tamil Nadu 600031";
                            gotoxy(25, 60);
                            cout << "     Contact  - +91 444 227 1001";
                            gotoxy(25, 62);
                            cout << "(iii)Hospital - Fortis Malar Hospital";
                            gotoxy(25, 63);
                            cout
                                    << "     Address  - No. 52, 1st Main Rd, Gandhi Nagar, Adyar, Chennai, Tamil Nadu 600020";
                            gotoxy(25, 64);
                            cout << "     Contact  - +91 444 289 2222";
                            break;
                        case 2:
                            gotoxy(25, 53);
                            cout << "B)COIMBATORE";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - KG Hospital";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - 5, Government Arts College Rd, Opposite Court, Gopalapuram, Coimbatore,";
                            gotoxy(25, 57);
                            cout << "                Tamil Nadu 641018";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 422 404 2121";
                            gotoxy(25, 60);
                            cout << "(ii) Hospital - SPT Hospitals";
                            gotoxy(25, 61);
                            cout
                                    << "     Address  - 50, Vivekananda Rd, Peranaidu Layout, Ram Nagar, Coimbatore, Tamil Nadu 641009";
                            gotoxy(25, 62);
                            cout << "     Contact  - +91 422 223 2525";
                            gotoxy(25, 64);
                            cout << "(iii)Hospital - Sathya medical Centre & Hospital";
                            gotoxy(25, 65);
                            cout << "     Address  - 1st St, Sivananda Colony, Tatabad, Coimbatore, Tamil Nadu 641012";
                            gotoxy(25, 66);
                            cout << "     Contact  - +91 422 249 6989";
                            break;
                        case 3:
                            gotoxy(25, 53);
                            cout << "C)MADURAI";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - SARAVANA MULTISPECIALITY HOSPITAL";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - 7-A, Maruthupandiar, Nagar, Fourth Main Rd, Narimedu, Madurai,Tamil Nadu 625002";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 452 2446004";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Vadamalayan Hospitals";
                            gotoxy(25, 60);
                            cout << "     Address  - Chockikulam, 15/1, Vallabh Bhai Rd, Madurai, Tamil Nadu 625002";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 452 254 5400";
                            gotoxy(25, 63);
                            cout << "(iii)Hospital - Apollo Speciality Hospitals";
                            gotoxy(25, 64);
                            cout << "     Address  - H80 Feet Rd, KK Nagar, Tamil Nadu 625020";
                            gotoxy(25, 65);
                            cout << "     Contact  - +91 452 258 0892";
                            break;
                        case 4:
                            gotoxy(25, 53);
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            gotoxy(25, 54);
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 5:
                    gotoxy(25, 43);
                    cout << "ANDHRA PRADESH";
                    gotoxy(25, 45);
                    cout << "Choose Your City:";
                    gotoxy(25, 46);
                    cout << "1. VISAKHAPATNAM";
                    gotoxy(25, 47);
                    cout << "2. VIJAYAWADA";
                    gotoxy(25, 48);
                    cout << "3. GUNTUR";
                    gotoxy(25, 49);
                    cout << "4. OTHERS";
                    gotoxy(25, 51);
                    cout << "Choice : ";
                    cin >> Andhra_Pradesh;
                    switch (Andhra_Pradesh) {
                        case 1:
                            gotoxy(25, 53);
                            cout << "A)VISAKHAPATNAM";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - MAHATMA GANDHI CANCER HOSPITAL & RESEARCH INSTITUTE";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - Plot Number -1, Sector:7, Mvp Colony, MVP Colony Beside Rythu Bazar";
                            gotoxy(25, 57);
                            cout << "                Mvp Colony, Visakhapatnam";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91-891-2878787, +91-891-2551811";
                            gotoxy(25, 60);
                            cout << "(ii) Hospital - KIIMS HOSPITALS";
                            gotoxy(25, 61);
                            cout << "     Address  - Sheela Nagar, BHPV Post, Visakhapatnam, AP 530026";
                            gotoxy(25, 62);
                            cout << "     Contact  - +91-0891-3536379";
                            gotoxy(25, 64);
                            cout << "(iii)Hospital - APOLLO HOSPITALS";
                            gotoxy(25, 65);
                            cout
                                    << "     Address  - Door No 10, Executive Court, 50-80, Waltair Main Rd, Opp. Daspalla, Ram Nagar";
                            gotoxy(25, 66);
                            cout << "                Visakhapatnam, AP 530002 ";
                            gotoxy(25, 67);
                            cout << "     Contact  - +91-891-2727272";
                            break;
                        case 2:
                            gotoxy(25, 53);
                            cout << "B)VIJAYAWADA";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - KAMINENI HOSPITALS";
                            gotoxy(25, 56);
                            cout << "     Address  - 100 Feet New Autonagar Road, Main, Road, Tadigadapa, Vijayawada,";
                            gotoxy(25, 57);
                            cout << "                Andhra Pradesh 521137";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 866 246 3333";
                            gotoxy(25, 60);
                            cout << "(ii) Hospital - Ramesh Hospitals ";
                            gotoxy(25, 61);
                            cout
                                    << "     Address  - MG Rd, Opposite Indira Gandhi Municipal Stadium, Labbipet, Vijayawada,";
                            gotoxy(25, 62);
                            cout << "                Andhra Pradesh 520010";
                            gotoxy(25, 63);
                            cout << "     Contact  - +91 866 247 2000";
                            gotoxy(25, 65);
                            cout << "(iii)Hospital - Andhra Hospitals";
                            gotoxy(25, 66);
                            cout << "     Address  - ZP High School, Moulangar Masjid Rd Opp, Bhavanipuram, Gollapudi,";
                            gotoxy(25, 67);
                            cout << "                Vijayawada, Andhra Pradesh 521225";
                            gotoxy(25, 68);
                            cout << "     Contact  - +91 866 241 7577";
                            break;
                        case 3:
                            gotoxy(25, 53);
                            cout << "C)GUNTUR";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Aswini Hospitals";
                            gotoxy(25, 56);
                            cout << "     Address  - Bus Stand, Besides Manipuram Fly Over, near R.T.C,";
                            gotoxy(25, 57);
                            cout << "                Guntur, Andhra Pradesh 522001";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 863 222 7000";
                            gotoxy(25, 60);
                            cout << "(ii) Hospital - Tulasi Multi Speciality Hospital";
                            gotoxy(25, 61);
                            cout << "     Address  - 5th Lane, GV Thota, Gunturvari Thota, Christian Pet, Kothapeta,";
                            gotoxy(25, 62);
                            cout << "                Guntur, Andhra Pradesh 522001";
                            gotoxy(25, 63);
                            cout << "     Contact  - +91 863 232 3235";
                            gotoxy(25, 65);
                            cout << "(iii)Hospital - Hyma Hospitals";
                            gotoxy(25, 66);
                            cout << "     Address  - Pattabhipuram Rd, Pattabhipuram, Guntur, Andhra Pradesh 522006";
                            gotoxy(25, 67);
                            cout << "     Contact  - +91 863 223 1564";
                            break;
                        case 4:
                            gotoxy(25, 53);
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            gotoxy(25, 54);
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 6:
                    gotoxy(25, 43);
                    cout << "UTTAR PRADESH";
                    gotoxy(25, 45);
                    cout << "Choose Your City:";
                    gotoxy(25, 46);
                    cout << "1. KANPUR";
                    gotoxy(25, 47);
                    cout << "2. LUCKNOW";
                    gotoxy(25, 48);
                    cout << "3. VARANASI";
                    gotoxy(25, 49);
                    cout << "4. OTHERS";
                    gotoxy(25, 51);
                    cout << "Choice : ";
                    cin >> Uttar_Pradesh;
                    switch (Uttar_Pradesh) {
                        case 1:
                            gotoxy(25, 53);
                            cout << "A)KANPUR";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - New Lakhanpur Hospital And Trauma Center";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - 6-A, G.T. Road Near Gurudev Palace, Lakhanpur, Kanpur, Uttar Pradesh 208024";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 73884 26666";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Rama Hospital";
                            gotoxy(25, 60);
                            cout
                                    << "     Address  - A/1-8, Lakhanpur, (Near Kanpur University), Kanpur, Uttar Pradesh 208024";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 512 258 4223";
                            gotoxy(25, 63);
                            cout << "(iii)Hospital - Krishna Super Speciality Hospital";
                            gotoxy(25, 64);
                            cout
                                    << "     Address  - 363, near Tatmil Chauraha, Harris Ganj, Kanpur, Uttar Pradesh 208004";
                            gotoxy(25, 65);
                            cout << "     Contact  - +91 84003 00216";
                            break;
                        case 2:
                            gotoxy(25, 53);
                            cout << "B)LUCKNOW";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Medanta Lucknow Hospital";
                            gotoxy(25, 56);
                            cout << "     Address  - Amar Shaheed Path, Golf City, Pocket - 1, Sector A, Lucknow,";
                            gotoxy(25, 57);
                            cout << "                Uttar Pradesh 226030";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 522 450 5050";
                            gotoxy(25, 60);
                            cout << "(ii) Hospital - Shalimar hospital ";
                            gotoxy(25, 61);
                            cout
                                    << "     2Address  - Block A A-989 Captain Aditya Mishra Marg, near Shalimar Chauraha, Lucknow,";
                            gotoxy(25, 62);
                            cout << "                Uttar Pradesh 226016";
                            gotoxy(25, 63);
                            cout << "     Contact  - +91 522 231 0185";
                            gotoxy(25, 65);
                            cout << "(iii)Hospital - Manas Hospital";
                            gotoxy(25, 66);
                            cout
                                    << "     Address  - Ekta Nagar Chauraha, Campbell Road Near Balaganj, Ekta Nagar Chourha,";
                            gotoxy(25, 67);
                            cout << "                Balaganj, Lucknow - 226003";
                            gotoxy(25, 68);
                            cout << "     Contact  - +91 522 240 5450";
                            break;
                        case 3:
                            gotoxy(25, 53);
                            cout << "C)VARANASI";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Apex hospital";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - N-2/272, A-7, DLW Rd, Nandan Nagar, Nagwa, Varanasi, Uttar Pradesh 221005";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 542 231 6782";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Pandit Deen Dayal Upadhyay Government Hospital";
                            gotoxy(25, 60);
                            cout
                                    << "     Address  - opposite Mental Hospital Road, Pandeypur, Orderly Bazar, Varanasi,";
                            gotoxy(25, 61);
                            cout << "                Uttar Pradesh 221002";
                            gotoxy(25, 62);
                            cout << "     Contact  - +91 542 250 8017";
                            gotoxy(25, 64);
                            cout << "(iii)Hospital - Maha Bodhi Charitable Hospitall";
                            gotoxy(25, 65);
                            cout << "     Address  - Dharmapala Rd, Sarnath, Varanasi, Uttar Pradesh 221007";
                            gotoxy(25, 66);
                            cout << "     Contact  - +91 542 258 5380";
                            break;
                        case 4:
                            gotoxy(25, 53);
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            gotoxy(25, 54);
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 7:
                    gotoxy(25, 43);
                    cout << "WEST BENGAL";
                    gotoxy(25, 45);
                    cout << "Choose Your City:";
                    gotoxy(25, 46);
                    cout << "1. KOLKATA";
                    gotoxy(25, 47);
                    cout << "2. ASANSOL";
                    gotoxy(25, 48);
                    cout << "3. SILIGURI";
                    gotoxy(25, 49);
                    cout << "4. OTHERS";
                    gotoxy(25, 51);
                    cout << "Choice : ";
                    cin >> West_Bengal;
                    switch (West_Bengal) {
                        case 1:
                            gotoxy(25, 53);
                            cout << "A)KOLKATA";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - AMRI HOSPITAL";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - 16 17, JC Block Lane, Central Park Road Broadway Road, stadium gate number 3,";
                            gotoxy(25, 57);
                            cout
                                    << "                opposite salt lake, Sector III, Bidhannagar, Kolkata, West Bengal 700098";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 33 6606 3800";
                            gotoxy(25, 60);
                            cout << "(ii) Hospital - Ruby General Hospital";
                            gotoxy(25, 61);
                            cout
                                    << "     Address  - 576, Anandapur, Eastern Metropolitan Bypass, Golpark, Kasba, Kolkata,";
                            gotoxy(25, 62);
                            cout << "                West Bengal 700107";
                            gotoxy(25, 63);
                            cout << "     Contact  - +91 33 6687 1800";
                            gotoxy(25, 65);
                            cout << "(iii)Hospital - Peerless Hospital";
                            gotoxy(25, 66);
                            cout
                                    << "     Address  - 360, Pancha Sayar Rd, Sahid Smirity Colony, Pancha Sayar, Kolkata,";
                            gotoxy(25, 67);
                            cout << "                West Bengal 700094";
                            gotoxy(25, 68);
                            cout << "     Contact  - +91 33 4011 1222";
                            break;
                        case 2:
                            gotoxy(25, 53);
                            cout << "B)ASANSOL";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - HLG Memorial Hospital";
                            gotoxy(25, 56);
                            cout << "     Address  - Sen Raliegh Road, Asansol, Burdwan, West Bengal 713304";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 81700 40907";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Asansol District Hospital";
                            gotoxy(25, 60);
                            cout << "     Address  - SB Gorai Rd, Hamid Nagar, Asansol, West Bengal 713301";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 341 230 4040";
                            gotoxy(25, 63);
                            cout << "(iii)Hospital - ALMC MULTI SPECIALITY HOSPITAL";
                            gotoxy(25, 64);
                            cout << "     Address  - Shristinagar, Asansol, West Bengal 713305";
                            gotoxy(25, 65);
                            cout << "     Contact  - +91 341 225 5225";
                            break;
                        case 3:
                            gotoxy(25, 53);
                            cout << "C)SILIGURI";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Siliguri District Hospital";
                            gotoxy(25, 56);
                            cout << "     Address  - Ward 17, Hakim Para, Siliguri, West Bengal 734001";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 353 2436526";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Kins Hospital";
                            gotoxy(25, 60);
                            cout << "     Address  - Sevoke More, Hill Cart Rd, Siliguri, West Bengal 734001";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 353 252 7723";
                            gotoxy(25, 62);
                            cout << "(iii)Hospital - Maharaja Agrasen Hospital";
                            gotoxy(25, 63);
                            cout << "     Address  - Fulbari Truck Terminus, Dist, Siliguri, West Bengal 734015";
                            gotoxy(25, 64);
                            cout << "     Contact  - 1800 212 111 222";
                            break;
                        case 4:
                            gotoxy(25, 53);
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            gotoxy(25, 54);
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 8:
                    gotoxy(25, 43);
                    cout << "DELHI";
                    gotoxy(25, 45);
                    cout << "(i)  Hospital - All India Institute Of Medical Sciences (AIIMS)";
                    gotoxy(25, 46);
                    cout
                            << "     Address  - Sri Aurobindo Marg, Ansari Nagar, Ansari Nagar East, New Delhi, Delhi 110029";
                    gotoxy(25, 47);
                    cout << "     Contact  - +91 11 2658 8500";
                    gotoxy(25, 49);
                    cout << "(ii) Hospital - Safdarjung Hospitals";
                    gotoxy(25, 50);
                    cout << "     Address  - Ansari Nagar East, near to AIIMS Metro Station, New Delhi, Delhi 110029";
                    gotoxy(25, 51);
                    cout << "     Contact  - +91 11 2673 0000";
                    gotoxy(25, 53);
                    cout << "(iii)Hospital - Lok Nayak Jai Prakash Narayan Hospital";
                    gotoxy(25, 54);
                    cout << "     Address  - Metro Station Central, Jawaharlal Nehru Marg, near Delhi Gate,";
                    gotoxy(25, 55);
                    cout << "                New Delhi, Delhi 110002";
                    gotoxy(25, 56);
                    cout << "     Contact  - +91 11 2323 6000";
                    gotoxy(25, 58);
                    cout << "(iv) Hospital - DR. Ram Manohar Lohia Hospital";
                    gotoxy(25, 59);
                    cout
                            << "     Address  - Baba Kharak Singh Rd, near Gurudwara Bangla Sahib, Ram Manohar Lohia Hospital,";
                    gotoxy(25, 60);
                    cout << "                Type III, Connaught Place, New Delhi, Delhi 110001";
                    gotoxy(25, 61);
                    cout << "     Contact  - +91 11 2336 5525";
                    gotoxy(25, 63);
                    cout << "(v)  Hospital - BLK-Max Super Speciality Hospital";
                    gotoxy(25, 64);
                    cout << "     Address  - Pusa Rd, Radha Soami Satsang, Rajendra Place, New Delhi, Delhi 110005";
                    gotoxy(25, 65);
                    cout << "     Contact  - +91 11 3040 3040";
                    gotoxy(25, 67);
                    cout << "(vi) Hospital - Indraprastha Apollo Hospitals, New Delhi";
                    gotoxy(25, 68);
                    cout
                            << "     Address  - Indraprastha Apollo Hospita, Mathura Rd, Jasola Vihar, New Delhi, Delhi 110076";
                    gotoxy(25, 69);
                    cout << "     Contact  - +91 11 7179 1090";
                    break;
                case 9:
                    gotoxy(25, 43);
                    cout << "PUNJAB";
                    gotoxy(25, 45);
                    cout << "Choose Your City:";
                    gotoxy(25, 46);
                    cout << "1. CHANDIGARH";
                    gotoxy(25, 47);
                    cout << "2. PATIALA";
                    gotoxy(25, 48);
                    cout << "3. LUDHIANA";
                    gotoxy(25, 49);
                    cout << "4. OTHERS";
                    gotoxy(25, 51);
                    cout << "Choice : ";
                    cin >> Punjab;
                    switch (Punjab) {
                        case 1:
                            gotoxy(25, 53);
                            cout << "A)CHANDIGARH";
                            gotoxy(25, 55);
                            cout
                                    << "(i)  Hospital - Post Graduate Institute of Medical Education & Research (PGIMER/PGI)";
                            gotoxy(25, 56);
                            cout << "     Address  - Madhya Marg, Sector 12, Chandigarh, 160012";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 172 274 7585";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Government Medical College & Hospital";
                            gotoxy(25, 60);
                            cout << "     Address  - Chandi Path, Sector 32B, 32B, Sector 32, Chandigarh, 160047";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 172 260 1023";
                            gotoxy(25, 63);
                            cout << "(iii)Hospital - Government Multi Specialty Hospital";
                            gotoxy(25, 64);
                            cout << "     Address  - Madhya Marg, Sector 16 A, Sector 16, Chandigarh, 160015";
                            gotoxy(25, 65);
                            cout << "     Contact  - +91 172 275 2042";
                            break;
                        case 2:
                            gotoxy(25, 53);
                            cout << "B)PATIALA";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Rajindra Hospital Patiala";
                            gotoxy(25, 56);
                            cout << "     Address  - Sangrur Road, New Lal Bagh Colony, Patiala, Punjab 147001";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 175 221 2542";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Amar Hospital";
                            gotoxy(25, 60);
                            cout << "     Address  - Income Tax Office Rd, Bank Colony, Patiala, Punjab 147001";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 175 222 2002";
                            gotoxy(25, 63);
                            cout << "(iii)Hospital - Columbia Asia Hospital - Patiala";
                            gotoxy(25, 64);
                            cout << "     Address  - Bhupindra Road, Near 22 No. Phatak, Patiala, Punjab 147001";
                            gotoxy(25, 65);
                            cout << "     Contact  - +91 175 500 0222";
                            break;
                        case 3:
                            gotoxy(25, 53);
                            cout << "C)LUDHIANA";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Fortis Hospital";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - Chandigarh Rd, near Radha Soami Satsang Bhavan, Village, Mundian Kalan,";
                            gotoxy(25, 57);
                            cout << "                Ludhiana, Punjab 141010";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 161 522 2333";
                            gotoxy(25, 60);
                            cout << "(ii) Hospital - Dayanand Medical College (DMC) Hospital ludhiana";
                            gotoxy(25, 61);
                            cout << "     Address  - Rajpura DMC Rd, Block-B, Udham Singh Nagar, Tagore Nagar,";
                            gotoxy(25, 62);
                            cout << "                Ludhiana, Punjab 141001";
                            gotoxy(25, 63);
                            cout << "     Contact  - +91 161 468 8800";
                            gotoxy(25, 65);
                            cout << "(iii)Hospital - Global Heart & Super Speciality Hospital";
                            gotoxy(25, 66);
                            cout << "     Address  - Ferozepur Rd, Near Octroi Post, Lalbagh, Ludhiana, Punjab 141012";
                            gotoxy(25, 67);
                            cout << "     Contact  - +91 161 255 3095";
                            break;
                        case 4:
                            gotoxy(25, 53);
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            gotoxy(25, 54);
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 10:
                    gotoxy(25, 43);
                    cout << "RAJASTHAN";
                    gotoxy(25, 45);
                    cout << "Choose Your City:";
                    gotoxy(25, 46);
                    cout << "1. JAIPUR";
                    gotoxy(25, 47);
                    cout << "2. JODHPUR";
                    gotoxy(25, 48);
                    cout << "3. KOTA";
                    gotoxy(25, 49);
                    cout << "4. OTHERS";
                    gotoxy(25, 51);
                    cout << "Choice : ";
                    cin >> Rajasthan;
                    switch (Rajasthan) {
                        case 1:
                            gotoxy(25, 53);
                            cout << "A)JAIPUR";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Narayana Multispeciality Hospital, Jaipur";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - Kumbha Marg, Rana Sanga Marg, Sector 28, Sanganer, Pratap Nagar, Jaipur,";
                            gotoxy(25, 57);
                            cout << "                Rajasthan 302033";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 80675 06880";
                            gotoxy(25, 60);
                            cout << "(ii) Hospital - Rungta Hospital";
                            gotoxy(25, 61);
                            cout << "     Address  - Calgiri Marg, near Police Station, Jhalana Gram, Malviya Nagar,";
                            gotoxy(25, 62);
                            cout << "                Jaipur, Rajasthan 302017";
                            gotoxy(25, 63);
                            cout << "     Contact  - +91 89550 00333";
                            gotoxy(25, 65);
                            cout << "(iii)Hospital - Apex Hospitals";
                            gotoxy(25, 66);
                            cout
                                    << "     Address  - SP-4 & 6, Central Road, Malviya Nagar Industrial Area, Malviya Nagar,";
                            gotoxy(25, 67);
                            cout << "                Jaipur, Rajasthan 302017";
                            gotoxy(25, 68);
                            cout << "     Contact  - +91 141 410 1111";
                            break;
                        case 2:
                            gotoxy(25, 53);
                            cout << "B)JODHPUR";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Medipulse Hospital";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - E4, MIA , Basni II Phase,Opposite, AIIMS Link Rd, Jodhpur, Rajasthan 342005";
                            gotoxy(25, 57);
                            cout << "     Contact  - +91 82393 45635";
                            gotoxy(25, 59);
                            cout << "(ii) Hospital - Mathuradas Mathur Hospital";
                            gotoxy(25, 60);
                            cout << "     Address  - Main Road, Sector-C, Shastri Nagar, Jodhpur, Rajasthan 342003";
                            gotoxy(25, 61);
                            cout << "     Contact  - +91 291 243 8655";
                            gotoxy(25, 63);
                            cout << "(iii)Hospital - Mahatma Gandhi Hospital";
                            gotoxy(25, 64);
                            cout << "     Address  - Olympic Road, Gate Circle, Jalori Bari, Jodhpur, Rajasthan 342001";
                            gotoxy(25, 65);
                            cout << "     Contact  - +91 291 263 6441";
                            break;
                        case 3:
                            gotoxy(25, 53);
                            cout << "C)KOTA";
                            gotoxy(25, 55);
                            cout << "(i)  Hospital - Maitri Hospital";
                            gotoxy(25, 56);
                            cout
                                    << "     Address  - 2-A, Commerce College Rd, New Rajeev Gandhi Nagar, Sector - A, Talwandi,";
                            gotoxy(25, 57);
                            cout << "                Kota, Rajasthan 324001";
                            gotoxy(25, 58);
                            cout << "     Contact  - +91 96940 94659";
                            gotoxy(25, 60);
                            cout << "(ii) Hospital - Gyan Shanti Hospital";
                            gotoxy(25, 61);
                            cout
                                    << "     Address  - Plot No:- 9-10, Car Bazar Ke Pass, Subhash Nagar First, Transport Nagar,";
                            gotoxy(25, 62);
                            cout << "                Rangbari, Kota, Rajasthan 324010";
                            gotoxy(25, 63);
                            cout << "     Contact  - +91 744 242 9122";
                            gotoxy(25, 65);
                            cout << "(iii)Hospital - Bharat Vikas Parishad Hospital";
                            gotoxy(25, 66);
                            cout << "     Address  - Pratap Nagar, Dadabari, Kota, Rajasthan 324009";
                            gotoxy(25, 67);
                            cout << "     Contact  - +91 744 250 4501 ";
                            break;
                        case 4:
                            gotoxy(25, 53);
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            gotoxy(25, 54);
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 11:
                    gotoxy(25, 43);
                    cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                    gotoxy(25, 44);
                    cout << "THANK YOU\n\n\n\n\n\n\n";
                    exit(0);
                    break;
                case 12:
                    cout << "\n\n\n\n\t\t\t\t ENTER THE STATE FROM ABOVE";
                    goto hospital_rerun;
                    break;
                case 13:
                    gotoxy(25, 43);
                    cout << "THANK YOU\n\n\n\n\n\n\n";
                    exit(0);
                    break;
            }
            break;
        case 6:
            break;
        case 7:
            goto retry;
        case 8:
            gotoxy(25, 17);
            cout << "THANK YOU\n\n\n\n\n\n\n";
            exit(0);
            break;

    }
    return 0;
}