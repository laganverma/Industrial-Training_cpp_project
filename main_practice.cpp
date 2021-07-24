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
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
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
    cout << "7.EXIT";
    gotoxy(25, 14);
    cout << "ENTER YOUR CHOICE = ";
    cin >> main;


    switch (main) {
        case 1:
            SetConsoleTextAttribute(color, 14);
            gotoxy(25, 17);
            cout << "---------------------------------------------------------------------------";
            gotoxy(45, 18);
            cout << "BP (BLOOD PRESSURE) - CALCULATOR";
            gotoxy(25, 19);
            cout << "---------------------------------------------------------------------------";
            gotoxy(44, 21);
            SetConsoleTextAttribute(color, 15);
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
                            cout << "3.Exit";
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
                        gotoxy(25, 48);
                        cout << "Your B.M.I IS IN _Obese_ RANGE";
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
                        gotoxy(25, 48);
                        cout << "Your B.M.I IS IN _Overweight_ RANGE";
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
                        gotoxy(25, 48);
                        cout << "Your B.M.I IS IN _Optimal_ RANGE";
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
                        gotoxy(25, 48);
                        cout << "Your B.M.I IS IN _Underweight_ RANGE";
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
            break;
        case 4:
            gotoxy(25, 17);
            SetConsoleTextAttribute(color, 14);
            cout << "---------------------------------------------------------------------------";
            gotoxy(52, 18);
            cout << "COVID-19 SYMPTOMS";
            gotoxy(25, 19);
            cout << "---------------------------------------------------------------------------";
            gotoxy(25, 22);
            SetConsoleTextAttribute(color, 15);
            cout << "-- Most common symptoms:";
            gotoxy(25, 23);
            cout << "   * FEVER";
            gotoxy(25, 24);
            cout << "   * DRY COUGH";
            gotoxy(25, 25);
            cout << "   * TIREDNESS";
            gotoxy(25, 27);
            cout << "-- LESS COMMON SYMPTOMS:";
            gotoxy(25, 28);
            cout << "   * ACHES AND PAINS";
            gotoxy(25, 29);
            cout << "   * SORE THROAT";
            gotoxy(25, 30);
            cout << "   * DIARRHOEA";
            gotoxy(25, 31);
            cout << "   * CONJUNCTIVITIS";
            gotoxy(25, 32);
            cout << "   * HEADACHE";
            gotoxy(25, 33);
            cout << "   * LOSS OF TASTE AND OR SMELL";
            gotoxy(25, 34);
            cout << "   * A RASH ON SKIN, OR DISCOLOURATION OF FINGERS OR TOES ";
            gotoxy(25, 36);
            cout << "-- SERIOUS SYMPTOMS:";
            gotoxy(25, 37);
            cout << "   * DIFFICULTY BREATHING OR SHORTNESS OF BREATH";
            gotoxy(25, 38);
            cout << "   * CHEST PAIN OR PRESSURE";
            gotoxy(25, 39);
            cout << "   * LOSS OF SPEECH OR MOVEMENT";
            gotoxy(25, 43);
            cout << "Seek immediate medical attention if you have serious symptoms.Always call before visiting your ";
            gotoxy(25, 44);
            cout << "doctor or health facility.";
            gotoxy(25, 46);
            cout << "People with mild symptoms who are otherwise healthy should manage their symptoms at home.";
            gotoxy(25, 48);
            cout << "On average it takes 5 to 6 days from when someone is infected with the virus for symptoms to";
            gotoxy(25, 49);
            cout << "show,4 however it can take up to 14 days.";
        tryyes_no:
            cout << "\n\n\n\t\t\t";
            cout << "IF YOU WANT TO LOCATE A COVID-19 HOSPITAL NEAR YOU I CAN HELP YOU.";
            cout << "\n\t\t\t";
            cout << "1. YES";
            cout << "\n\t\t\t";
            cout << "2. NO";
            cout << "\n\n\t\t\t";
            cout << "CHOICE = ";
            int yes_no;
            cin >> yes_no;
            switch (yes_no) {
                case 1:
                    goto label1;
                    break;
                case 2:
                    cout << "\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n\n\n\n";
                    exit(0);
                    break;
                default:
                    cout << "\n\n\t\t\t";
                    cout << "I2NVALID INPUT ";
                    cout << "\n\t\t\t";
                    cout << "TRY AGAIN";
                    goto tryyes_no;
                    break;
            }
            break;
        case 5:
        label1:
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
            cout << "\n\n";
            cout << "\n\t\t\t";
            SetConsoleTextAttribute(color, 14);
            cout << "---------------------------------------------------------------------------";
            cout << "\n\t\t\t\t\t\t";
            cout << "     HOSPITAL LOCATOR";
            cout << "\n\t\t\t";
            cout << "---------------------------------------------------------------------------";
            cout << "\n\n\t\t\t\t\t";
            SetConsoleTextAttribute(color, 15);
            cout << "   ******Welcome to Hospital Locator******";
            cout << "\n\n\t\t\t";
            cout << "Choose Your State";
            cout << "\n\n\t\t\t";
            cout << "1.  MAHARASHTRA";
            cout << "\n\t\t\t";
            cout << "2.  KERALA";
            cout << "\n\t\t\t";
            cout << "3.  KARNATAKA";
            cout << "\n\t\t\t";
            cout << "4.  TAMIL NADU";
            cout << "\n\t\t\t";
            cout << "5.  ANDHRA PRADESH";
            cout << "\n\t\t\t";
            cout << "6.  UTTAR PRADESH";
            cout << "\n\t\t\t";
            cout << "7.  WEST BENGAL";
            cout << "\n\t\t\t";
            cout << "8.  DELHI";
            cout << "\n\t\t\t";
            cout << "9.  PUNJAB";
            cout << "\n\t\t\t";
            cout << "10. RAJASTHAN";
            cout << "\n\t\t\t";
            cout << "11. OTHERS";
            cout << "\n\t\t\t";
            cout << "12. RERUN";
            cout << "\n\t\t\t";
            cout << "13. EXIT";
            cout << "\n\n\t\t\t";

            cout << "ENTER YOUR CHOICE : ";
            cin >> states;
            switch (states) {
                case 1:
                    cout << "\n\n\t\t\t";
                    cout << "MAHARASHTRA";
                    cout << "\n\n\t\t\t";
                    cout << "Choose Your City:";
                    cout << "\n\t\t\t";
                    cout << "1. MUMBAI";
                    cout << "\n\t\t\t";
                    cout << "2. PUNE";
                    cout << "\n\t\t\t";
                    cout << "3. NASHIK";
                    cout << "\n\t\t\t";
                    cout << "4. OTHERS";
                    cout << "\n\n\t\t\t";
                    cout << "Choice : ";
                    cin >> Maharashtra;
                    switch (Maharashtra) {
                        case 1:
                            cout << "\n\n\t\t\t";
                            cout << "A)MUMBAI";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Nanavati Super Speciality Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - S.V. Road, Opposite Pavan Hans & Juhu Beach,Vileparle West, Mumbai";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 22 2626 7500 , +91 22 2626 7777";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Fortis Hospital Mulund";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Mulund Goregaon Link Road, Industrial Area,Mulund West, Mumbai";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 22 4111 4111, +91 9606 047 050";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Tata Memorial Hospital(govt.)";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Dr. E Borges Road, Parel, Mumbai 400012";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91-22- 24177000, +91-22-24146750";
                            break;
                        case 2:
                            cout << "\n\n\t\t\t";
                            cout << "B)PUNE";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Columbia Asia Hospital Pune";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 22, 2A, Mundhwa - Kharadi Rd, Near Nyati Empire, Santipur, Thite Nagar,";
                            cout << "\n\t\t\t";
                            cout << "                Kharadi, Pune, Maharashtra 411001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 20 6165 6666, +91 20 7129 0129";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Jehangir Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - 32, Sasoon Rd, Opposite Railway Station, Central Excise Colony, ";
                            cout << "\n\t\t\t";
                            cout << "                Sangamvadi, Pune, Maharashtra 411001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 20 6681 9999, +91 20 6681 9966";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Pune Adventist Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Salisbury Park, Post Box 1405, Market Yard, Gultekdi, Pune, Maharashtra 411037";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91-020 2452 6771";
                            break;
                        case 3:
                            cout << "\n\n\t\t\t";
                            cout << "C)NASHIK";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Sahyadri Super Speciality Hospital Nashik";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Mumbai-Agra Road, Wadala Rd, near Nashik, Dwarka Circle, Maharashtra 422001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 253 669 1666";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Wockhardt Hospital, Nashik";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Wani House, Mumbai - Agra National Hwy, Wadala Naka, Nashik, Maharashtra 422001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 253 662 4444, +91 253 662 4100";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - NIMS Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Gangapur Rd, Thatte Nagar, Nashik, Maharashtra 422005";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 253 231 5050";
                            break;
                        case 4:
                            cout << "\n\n\n\t\t\t";
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            cout << "\n\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 2:
                    cout << "\n\n\t\t\t";
                    cout << "KERALA";
                    cout << "\n\n\t\t\t";
                    cout << "Choose Your City:";
                    cout << "\n\t\t\t";
                    cout << "1. THIRUVANANTHAPURAM";
                    cout << "\n\t\t\t";
                    cout << "2. KOZHIKODE";
                    cout << "\n\t\t\t";
                    cout << "3. KOCHI";
                    cout << "\n\t\t\t";
                    cout << "4. OTHERS";
                    cout << "\n\n\t\t\t";
                    cout << "Choice : ";
                    cin >> Kerala;
                    switch (Kerala) {
                        case 1:
                            cout << "\n\n\t\t\t";
                            cout << "A)THIRUVANANTHAPURAM";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Kerala Institute Of Medical Sciences (Kims)";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - P B No 1 Kumarapuram Poonthi Road Anamukham, Thiruvananthapuram,";
                            cout << "\n\t\t\t";
                            cout
                                    << "                Kerala - 695024";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 0471 244 7575, +91 0471 244 7676";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Ananthapuri Hospitals and Research Institute (AHRI)";
                            cout << "\n\t\t\t";
                            cout << "     Address  - NH bypass 66, Airport Rd, near Courtyard Garden, Chackai";
                            cout << "\n\t\t\t";
                            cout << "                Thiruvananthapuram, Kerala 695024";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 0471 250 7575, +91 0471 257 9900";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Sree uthradom thirunal hospital(SUT)";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Pattom Palace , P. O, Thiruvananthapuram, Kerala - 695004";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 0471 407 7777, +91 0471 407 7888";
                            break;
                        case 2:
                            cout << "\n\n\t\t\t";
                            cout << "B)KOZHIKODE";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Aster Malabar Institute of Medical Sciences (MIMS Hospital)";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Mini Bypass Rd, Govindapuram, Kozhikode, Kerala 673016";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 0495 248 8000,+ 91-495- 3911 400";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Baby Memorial Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Indira Gandhi Rd, Arayidathupalam, Kozhikode, Kerala 673004";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 495 272 3272 , +91 495 277 7777";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - PVS Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Railway Station Rd, near Railway Station, Palayam, Kozhikode, Kerala 673002";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 0495 270 7222, +91 0495 270 7333";
                            break;
                        case 3:
                            cout << "\n\n\t\t\t";
                            cout << "C)KOCHI";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Rajagiri Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Near GTN Junction, Chunangamvely Aluva, Kochi, Kerala 683112";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 0484 290 5000";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Medical Trust Hospital ";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Mahatma Gandhi Rd, Pallimukku, Kochi, Kerala 682016";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 0484 235 8001 ";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Lourdes Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Lourdes hospital Road Near Ernakulam Town Railway station Pachalam";
                            cout << "\n\t\t\t";
                            cout << "                Kochi, Kerala 682012";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 0484 4125555, +91 0484 4121101";
                            break;
                        case 4:
                            cout << "\n\n\n\t\t\t";
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            cout << "\n\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 3:
                    cout << "\n\n\t\t\t";
                    cout << "KARNATAKA";
                    cout << "\n\n\t\t\t";
                    cout << "Choose Your City:";
                    cout << "\n\t\t\t";
                    cout << "1. BANGLORE";
                    cout << "\n\t\t\t";
                    cout << "2. MYSORE";
                    cout << "\n\t\t\t";
                    cout << "3. MANGALORE";
                    cout << "\n\t\t\t";
                    cout << "4. OTHERS";
                    cout << "\n\n\t\t\t";
                    cout << "Choice : ";
                    cin >> Karnataka;
                    switch (Karnataka) {
                        case 1:
                            cout << "\n\n\t\t\t";
                            cout << "A)BANGLORE";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Apollo Hospitals";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 154/11,Bannerghatta Road, Amalodbhavi Nagar, Panduranga Nagar,Bangalore 560076";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91-80-2630 4050";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Bangalore Baptist Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Bellary Rd, Vinayakanagar, Hebbal, Bengaluru, Karnataka 560024";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 080 2202 4700";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Divakars Speciality Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - No. 220, 9th Cross Rd, Next to Nilgiris, Jeewan Griha Colony, 2nd Phase,";
                            cout << "\n\t\t\t";
                            cout << "                J. P. Nagar, Bengaluru, Karnataka 560078";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 080 4085 3500";
                            break;
                        case 2:
                            cout << "\n\n\t\t\t";
                            cout << "B)MYSORE";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Columbia Asia Hospital Mysore";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - No. 85-86, Bangalore-Mysore Ring Road Junction Bannimantapa 'A' Layout,";
                            cout << "\n\t\t\t";
                            cout << "                Siddique Nagar, Mandi Mohalla, Mysuru, Karnataka 570015";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 821 255 5000";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Narayana Multispeciality Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - CAH/1, 3rd Phase, Devanur, 2nd Stage, R.S.Naidu Nagar, Mysuru, Karnataka 570019";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 80675 06870";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Cauvery Heart and Multispeciality Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Malavalli - Mysore Rd, Near Teresian College, Siddhartha Layout, Mysuru,";
                            cout << "\n\t\t\t";
                            cout << "                Karnataka 570011";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 98446 98446";
                            break;
                        case 3:
                            cout << "\n\n\t\t\t";
                            cout << "C)MANGALORE";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - E.S.I. HOSPITAL KADRI MANGALORE";
                            cout << "\n\t\t\t";
                            cout << "     Address  - 3rd Cross Rd, Shivabagh, Kadri, Mangalore, Karnataka 575002";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 824 221 8630";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - KMC Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Dr. B R Ambedkar Circle, opposite Jyothi Theater, Balmatta, Mangalore,";
                            cout << "\n\t\t\t";
                            cout << "                Karnataka 575001 ";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 824 222 2227";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Highland Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Highlands, Falnir, Mangalore, Karnataka 575002";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 824 2222 227";
                            break;
                        case 4:
                            cout << "\n\n\n\t\t\t";
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            cout << "\n\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 4:
                    cout << "\n\n\t\t\t";
                    cout << "TAMIL NADU";
                    cout << "\n\n\t\t\t";
                    cout << "Choose Your City:";
                    cout << "\n\t\t\t";
                    cout << "1. CHENNAI";
                    cout << "\n\t\t\t";
                    cout << "2. COIMBATORE";
                    cout << "\n\t\t\t";
                    cout << "3. MADURAI";
                    cout << "\n\t\t\t";
                    cout << "4. OTHERS";
                    cout << "\n\n\t\t\t";
                    cout << "Choice : ";
                    cin >> Tamil_Nadu;
                    switch (Tamil_Nadu) {
                        case 1:
                            cout << "\n\n\t\t\t";
                            cout << "A)CHENNAI";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Be Well Hospitals";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 5A, Vijaya Raghava Rd, Drivers Colony, T. Nagar, Chennai, Tamil Nadu 600017";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 444 211 3010";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Dr. Mehta's Hospitals";
                            cout << "\n\t\t\t";
                            cout << "     Address  - No.2, Mc Nichols Rd, Chetpet, Chennai, Tamil Nadu 600031";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 444 227 1001";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Fortis Malar Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - No. 52, 1st Main Rd, Gandhi Nagar, Adyar, Chennai, Tamil Nadu 600020";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 444 289 2222";
                            break;
                        case 2:
                            cout << "\n\n\t\t\t";
                            cout << "B)COIMBATORE";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - KG Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 5, Government Arts College Rd, Opposite Court, Gopalapuram, Coimbatore,";
                            cout << "\n\t\t\t";
                            cout << "                Tamil Nadu 641018";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 422 404 2121";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - SPT Hospitals";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 50, Vivekananda Rd, Peranaidu Layout, Ram Nagar, Coimbatore, Tamil Nadu 641009";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 422 223 2525";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Sathya medical Centre & Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - 1st St, Sivananda Colony, Tatabad, Coimbatore, Tamil Nadu 641012";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 422 249 6989";
                            break;
                        case 3:
                            cout << "\n\n\t\t\t";
                            cout << "C)MADURAI";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - SARAVANA MULTISPECIALITY HOSPITAL";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 7-A, Maruthupandiar, Nagar, Fourth Main Rd, Narimedu, Madurai,Tamil Nadu 625002";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 452 2446004";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Vadamalayan Hospitals";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Chockikulam, 15/1, Vallabh Bhai Rd, Madurai, Tamil Nadu 625002";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 452 254 5400";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Apollo Speciality Hospitals";
                            cout << "\n\t\t\t";
                            cout << "     Address  - H80 Feet Rd, KK Nagar, Tamil Nadu 625020";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 452 258 0892";
                            break;
                        case 4:
                            cout << "\n\n\n\t\t\t";
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            cout << "\n\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 5:
                    cout << "\n\n\t\t\t";
                    cout << "ANDHRA PRADESH";
                    cout << "\n\n\t\t\t";
                    cout << "Choose Your City:";
                    cout << "\n\t\t\t";
                    cout << "1. VISAKHAPATNAM";
                    cout << "\n\t\t\t";
                    cout << "2. VIJAYAWADA";
                    cout << "\n\t\t\t";
                    cout << "3. GUNTUR";
                    cout << "\n\n\t\t\t";
                    cout << "4. OTHERS";
                    cout << "\n\n\t\t\t";
                    cout << "Choice : ";
                    cin >> Andhra_Pradesh;
                    switch (Andhra_Pradesh) {
                        case 1:
                            cout << "\n\n\t\t\t";
                            cout << "A)VISAKHAPATNAM";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - MAHATMA GANDHI CANCER HOSPITAL & RESEARCH INSTITUTE";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Plot Number -1, Sector:7, Mvp Colony, MVP Colony Beside Rythu Bazar";
                            cout << "\n\t\t\t";
                            cout << "                Mvp Colony, Visakhapatnam";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91-891-2878787, +91-891-2551811";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - KIIMS HOSPITALS";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Sheela Nagar, BHPV Post, Visakhapatnam, AP 530026";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91-0891-3536379";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - APOLLO HOSPITALS";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Door No 10, Executive Court, 50-80, Waltair Main Rd, Opp. Daspalla, Ram Nagar";
                            cout << "\n\t\t\t";
                            cout << "                Visakhapatnam, AP 530002 ";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91-891-2727272";
                            break;
                        case 2:
                            cout << "\n\n\t\t\t";
                            cout << "B)VIJAYAWADA";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - KAMINENI HOSPITALS";
                            cout << "\n\t\t\t";
                            cout << "     Address  - 100 Feet New Autonagar Road, Main, Road, Tadigadapa, Vijayawada,";
                            cout << "\n\t\t\t";
                            cout << "                Andhra Pradesh 521137";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 866 246 3333";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Ramesh Hospitals ";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - MG Rd, Opposite Indira Gandhi Municipal Stadium, Labbipet, Vijayawada,";
                            cout << "\n\t\t\t";
                            cout << "                Andhra Pradesh 520010";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 866 247 2000";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Andhra Hospitals";
                            cout << "\n\t\t\t";
                            cout << "     Address  - ZP High School, Moulangar Masjid Rd Opp, Bhavanipuram, Gollapudi,";
                            cout << "\n\t\t\t";
                            cout << "                Vijayawada, Andhra Pradesh 521225";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 866 241 7577";
                            break;
                        case 3:
                            cout << "\n\n\t\t\t";
                            cout << "C)GUNTUR";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Aswini Hospitals";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Bus Stand, Besides Manipuram Fly Over, near R.T.C,";
                            cout << "\n\t\t\t";
                            cout << "                Guntur, Andhra Pradesh 522001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 863 222 7000";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Tulasi Multi Speciality Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - 5th Lane, GV Thota, Gunturvari Thota, Christian Pet, Kothapeta,";
                            cout << "\n\t\t\t";
                            cout << "                Guntur, Andhra Pradesh 522001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 863 232 3235";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Hyma Hospitals";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Pattabhipuram Rd, Pattabhipuram, Guntur, Andhra Pradesh 522006";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 863 223 1564";
                            break;
                        case 4:
                            cout << "\n\n\n\t\t\t";
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            cout << "\n\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 6:
                    cout << "\n\n\t\t\t";
                    cout << "UTTAR PRADESH";
                    cout << "\n\n\t\t\t";
                    cout << "Choose Your City:";
                    cout << "\n\t\t\t";
                    cout << "1. KANPUR";
                    cout << "\n\t\t\t";
                    cout << "2. LUCKNOW";
                    cout << "\n\t\t\t";
                    cout << "3. VARANASI";
                    cout << "\n\t\t\t";
                    cout << "4. OTHERS";
                    cout << "\n\n\t\t\t";
                    cout << "Choice : ";
                    cin >> Uttar_Pradesh;
                    switch (Uttar_Pradesh) {
                        case 1:
                            cout << "\n\n\t\t\t";
                            cout << "A)KANPUR";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - New Lakhanpur Hospital And Trauma Center";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 6-A, G.T. Road Near Gurudev Palace, Lakhanpur, Kanpur, Uttar Pradesh 208024";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 73884 26666";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Rama Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - A/1-8, Lakhanpur, (Near Kanpur University), Kanpur, Uttar Pradesh 208024";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 512 258 4223";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Krishna Super Speciality Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 363, near Tatmil Chauraha, Harris Ganj, Kanpur, Uttar Pradesh 208004";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 84003 00216";
                            break;
                        case 2:
                            cout << "\n\n\t\t\t";
                            cout << "B)LUCKNOW";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Medanta Lucknow Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Amar Shaheed Path, Golf City, Pocket - 1, Sector A, Lucknow,";
                            cout << "\n\t\t\t";
                            cout << "                Uttar Pradesh 226030";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 522 450 5050";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Shalimar hospital ";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Block A A-989 Captain Aditya Mishra Marg, near Shalimar Chauraha, Lucknow,";
                            cout << "\n\t\t\t";
                            cout << "                Uttar Pradesh 226016";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 522 231 0185";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Manas Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Ekta Nagar Chauraha, Campbell Road Near Balaganj, Ekta Nagar Chourha,";
                            cout << "\n\t\t\t";
                            cout << "                Balaganj, Lucknow - 226003";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 522 240 5450";
                            break;
                        case 3:
                            cout << "\n\n\t\t\t";
                            cout << "C)VARANASI";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Apex hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - N-2/272, A-7, DLW Rd, Nandan Nagar, Nagwa, Varanasi, Uttar Pradesh 221005";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 542 231 6782";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Pandit Deen Dayal Upadhyay Government Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - opposite Mental Hospital Road, Pandeypur, Orderly Bazar, Varanasi,";
                            cout << "\n\t\t\t";
                            cout << "                Uttar Pradesh 221002";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 542 250 8017";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Maha Bodhi Charitable Hospitall";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Dharmapala Rd, Sarnath, Varanasi, Uttar Pradesh 221007";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 542 258 5380";
                            break;
                        case 4:
                            cout << "\n\n\n\t\t\t";
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            cout << "\n\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 7:
                    cout << "\n\n\t\t\t";
                    cout << "WEST BENGAL";
                    cout << "\n\n\t\t\t";
                    cout << "Choose Your City:";
                    cout << "\n\t\t\t";
                    cout << "1. KOLKATA";
                    cout << "\n\t\t\t";
                    cout << "2. ASANSOL";
                    cout << "\n\t\t\t";
                    cout << "3. SILIGURI";
                    cout << "\n\t\t\t";
                    cout << "4. OTHERS";
                    cout << "\n\n\t\t\t";
                    cout << "Choice : ";
                    cin >> West_Bengal;
                    switch (West_Bengal) {
                        case 1:
                            cout << "\n\n\t\t\t";
                            cout << "A)KOLKATA";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - AMRI HOSPITAL";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 16 17, JC Block Lane, Central Park Road Broadway Road, stadium gate number 3,";
                            cout << "\n\t\t\t";
                            cout
                                    << "                opposite salt lake, Sector III, Bidhannagar, Kolkata, West Bengal 700098";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 33 6606 3800";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Ruby General Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 576, Anandapur, Eastern Metropolitan Bypass, Golpark, Kasba, Kolkata,";
                            cout << "\n\t\t\t";
                            cout << "                West Bengal 700107";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 33 6687 1800";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Peerless Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 360, Pancha Sayar Rd, Sahid Smirity Colony, Pancha Sayar, Kolkata,";
                            cout << "\n\t\t\t";
                            cout << "                West Bengal 700094";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 33 4011 1222";
                            break;
                        case 2:
                            cout << "\n\n\t\t\t";
                            cout << "B)ASANSOL";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - HLG Memorial Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Sen Raliegh Road, Asansol, Burdwan, West Bengal 713304";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 81700 40907";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Asansol District Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - SB Gorai Rd, Hamid Nagar, Asansol, West Bengal 713301";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 341 230 4040";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - ALMC MULTI SPECIALITY HOSPITAL";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Shristinagar, Asansol, West Bengal 713305";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 341 225 5225";
                            break;
                        case 3:
                            cout << "\n\n\t\t\t";
                            cout << "C)SILIGURI";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Siliguri District Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Ward 17, Hakim Para, Siliguri, West Bengal 734001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 353 2436526";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Kins Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Sevoke More, Hill Cart Rd, Siliguri, West Bengal 734001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 353 252 7723";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Maharaja Agrasen Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Fulbari Truck Terminus, Dist, Siliguri, West Bengal 734015";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - 1800 212 111 222";
                            break;
                        case 4:
                            cout << "\n\n\n\t\t\t";
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            cout << "\n\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 8:
                    cout << "\n\n\t\t\t";
                    cout << "DELHI";
                    cout << "\n\n\t\t\t";
                    cout << "(i)  Hospital - All India Institute Of Medical Sciences (AIIMS)";
                    cout << "\n\t\t\t";
                    cout
                            << "     Address  - Sri Aurobindo Marg, Ansari Nagar, Ansari Nagar East, New Delhi, Delhi 110029";
                    cout << "\n\t\t\t";
                    cout << "     Contact  - +91 11 2658 8500";
                    cout << "\n\n\t\t\t";
                    cout << "(ii) Hospital - Safdarjung Hospitals";
                    cout << "\n\t\t\t";
                    cout << "     Address  - Ansari Nagar East, near to AIIMS Metro Station, New Delhi, Delhi 110029";
                    cout << "\n\t\t\t";
                    cout << "     Contact  - +91 11 2673 0000";
                    cout << "\n\n\t\t\t";
                    cout << "(iii)Hospital - Lok Nayak Jai Prakash Narayan Hospital";
                    cout << "\n\t\t\t";
                    cout << "     Address  - Metro Station Central, Jawaharlal Nehru Marg, near Delhi Gate,";
                    cout << "\n\t\t\t";
                    cout << "                New Delhi, Delhi 110002";
                    cout << "\n\t\t\t";
                    cout << "     Contact  - +91 11 2323 6000";
                    cout << "\n\n\t\t\t";
                    cout << "(iv) Hospital - DR. Ram Manohar Lohia Hospital";
                    cout << "\n\t\t\t";
                    cout
                            << "     Address  - Baba Kharak Singh Rd, near Gurudwara Bangla Sahib, Ram Manohar Lohia Hospital,";
                    cout << "\n\t\t\t";
                    cout << "                Type III, Connaught Place, New Delhi, Delhi 110001";
                    cout << "\n\t\t\t";
                    cout << "     Contact  - +91 11 2336 5525";
                    cout << "\n\n\t\t\t";
                    cout << "(v)  Hospital - BLK-Max Super Speciality Hospital";
                    cout << "\n\t\t\t";
                    cout << "     Address  - Pusa Rd, Radha Soami Satsang, Rajendra Place, New Delhi, Delhi 110005";
                    cout << "\n\t\t\t";
                    cout << "     Contact  - +91 11 3040 3040";
                    cout << "\n\n\t\t\t";
                    cout << "(vi) Hospital - Indraprastha Apollo Hospitals, New Delhi";
                    cout << "\n\t\t\t";
                    cout
                            << "     Address  - Indraprastha Apollo Hospita, Mathura Rd, Jasola Vihar, New Delhi, Delhi 110076";
                    cout << "\n\t\t\t";
                    cout << "     Contact  - +91 11 7179 1090";
                    break;
                case 9:
                    cout << "\n\n\t\t\t";
                    cout << "PUNJAB";
                    cout << "\n\n\t\t\t";
                    cout << "Choose Your City:";
                    cout << "\n\t\t\t";
                    cout << "1. CHANDIGARH";
                    cout << "\n\t\t\t";
                    cout << "2. PATIALA";
                    cout << "\n\t\t\t";
                    cout << "3. LUDHIANA";
                    cout << "\n\t\t\t";
                    cout << "4. OTHERS";
                    cout << "\n\n\t\t\t";
                    cout << "Choice : ";
                    cin >> Punjab;
                    switch (Punjab) {
                        case 1:
                            cout << "\n\n\t\t\t";
                            cout << "A)CHANDIGARH";
                            cout << "\n\n\t\t\t";
                            cout
                                    << "(i)  Hospital - Post Graduate Institute of Medical Education & Research (PGIMER/PGI)";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Madhya Marg, Sector 12, Chandigarh, 160012";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 172 274 7585";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Government Medical College & Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Chandi Path, Sector 32B, 32B, Sector 32, Chandigarh, 160047";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 172 260 1023";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Government Multi Specialty Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Madhya Marg, Sector 16 A, Sector 16, Chandigarh, 160015";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 172 275 2042";
                            break;
                        case 2:
                            cout << "\n\n\t\t\t";
                            cout << "B)PATIALA";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Rajindra Hospital Patiala";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Sangrur Road, New Lal Bagh Colony, Patiala, Punjab 147001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 175 221 2542";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Amar Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Income Tax Office Rd, Bank Colony, Patiala, Punjab 147001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 175 222 2002";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Columbia Asia Hospital - Patiala";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Bhupindra Road, Near 22 No. Phatak, Patiala, Punjab 147001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 175 500 0222";
                            break;
                        case 3:
                            cout << "\n\n\t\t\t";
                            cout << "C)LUDHIANA";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Fortis Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Chandigarh Rd, near Radha Soami Satsang Bhavan, Village, Mundian Kalan,";
                            cout << "\n\t\t\t";
                            cout << "                Ludhiana, Punjab 141010";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 161 522 2333";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Dayanand Medical College (DMC) Hospital ludhiana";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Rajpura DMC Rd, Block-B, Udham Singh Nagar, Tagore Nagar,";
                            cout << "\n\t\t\t";
                            cout << "                Ludhiana, Punjab 141001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 161 468 8800";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Global Heart & Super Speciality Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Ferozepur Rd, Near Octroi Post, Lalbagh, Ludhiana, Punjab 141012";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 161 255 3095";
                            break;
                        case 4:
                            cout << "\n\n\n\t\t\t";
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            cout << "\n\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 10:
                    cout << "\n\n\t\t\t";
                    cout << "RAJASTHAN";
                    cout << "\n\n\t\t\t";
                    cout << "Choose Your City:";
                    cout << "\n\t\t\t";
                    cout << "1. JAIPUR";
                    cout << "\n\t\t\t";
                    cout << "2. JODHPUR";
                    cout << "\n\t\t\t";
                    cout << "3. KOTA";
                    cout << "\n\t\t\t";
                    cout << "4. OTHERS";
                    cout << "\n\n\t\t\t";
                    cout << "Choice : ";
                    cin >> Rajasthan;
                    switch (Rajasthan) {
                        case 1:
                            cout << "\n\n\t\t\t";
                            cout << "A)JAIPUR";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Narayana Multispeciality Hospital, Jaipur";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Kumbha Marg, Rana Sanga Marg, Sector 28, Sanganer, Pratap Nagar, Jaipur,";
                            cout << "\n\t\t\t";
                            cout << "                Rajasthan 302033";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 80675 06880";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Rungta Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Calgiri Marg, near Police Station, Jhalana Gram, Malviya Nagar,";
                            cout << "\n\t\t\t";
                            cout << "                Jaipur, Rajasthan 302017";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 89550 00333";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Apex Hospitals";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - SP-4 & 6, Central Road, Malviya Nagar Industrial Area, Malviya Nagar,";
                            cout << "\n\t\t\t";
                            cout << "                Jaipur, Rajasthan 302017";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 141 410 1111";
                            break;
                        case 2:
                            cout << "\n\n\t\t\t";
                            cout << "B)JODHPUR";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Medipulse Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - E4, MIA , Basni II Phase,Opposite, AIIMS Link Rd, Jodhpur, Rajasthan 342005";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 82393 45635";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Mathuradas Mathur Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Main Road, Sector-C, Shastri Nagar, Jodhpur, Rajasthan 342003";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 291 243 8655";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Mahatma Gandhi Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Olympic Road, Gate Circle, Jalori Bari, Jodhpur, Rajasthan 342001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 291 263 6441";
                            break;
                        case 3:
                            cout << "\n\n\t\t\t";
                            cout << "C)KOTA";
                            cout << "\n\n\t\t\t";
                            cout << "(i)  Hospital - Maitri Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - 2-A, Commerce College Rd, New Rajeev Gandhi Nagar, Sector - A, Talwandi,";
                            cout << "\n\t\t\t";
                            cout << "                Kota, Rajasthan 324001";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 96940 94659";
                            cout << "\n\n\t\t\t";
                            cout << "(ii) Hospital - Gyan Shanti Hospital";
                            cout << "\n\t\t\t";
                            cout
                                    << "     Address  - Plot No:- 9-10, Car Bazar Ke Pass, Subhash Nagar First, Transport Nagar,";
                            cout << "\n\t\t\t";
                            cout << "                Rangbari, Kota, Rajasthan 324010";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 744 242 9122";
                            cout << "\n\n\t\t\t";
                            cout << "(iii)Hospital - Bharat Vikas Parishad Hospital";
                            cout << "\n\t\t\t";
                            cout << "     Address  - Pratap Nagar, Dadabari, Kota, Rajasthan 324009";
                            cout << "\n\t\t\t";
                            cout << "     Contact  - +91 744 250 4501 ";
                            break;
                        case 4:
                            cout << "\n\n\n\t\t\t";
                            cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                            cout << "\n\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n\n";
                            exit(0);
                    }
                    break;
                case 11:
                    cout << "\n\n\n\t\t\t";
                    cout << "SORRY FOR THE INCONVENIENCE,WE ARE EXPANDING.";
                    cout << "THANK YOU\n\n\n\n\n\n\n";
                    exit(0);
                    break;
                case 12:
                    goto hospital_rerun;
                    break;
                case 13:
                    cout << "\n\n\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n\n\n\n";
                    exit(0);
                    break;
                case 14:
                    goto retry;
                default:
                    cout << "\n\n\n\t\t\t";
                    cout << "INVALID INPUT ";
                    cout << "\n\t\t\t";
                    cout << "TRY AGAIN";
                    goto hospital_rerun;
            }
            break;
        case 6:
            break;
        case 7:
            gotoxy(25, 17);
            cout << "THANK YOU\n\n\n\n\n\n\n";
            exit(0);
    }

    return 0;

}