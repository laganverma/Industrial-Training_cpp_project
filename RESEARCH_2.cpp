// BMI EDIT AND MAKE IT FINAL

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


int main() {
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
            cout << "1.Kilogram(Kg)";
            gotoxy(25, 34);
            cout << "2.Pound(lbs)";
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
                            exit(0);
                            break;
                    }
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
                        gotoxy(25, 57);
                        cout << "EXIT\n\n\n\n\n";
                        break;
                }
            }
                // overweight
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
                        gotoxy(25, 57);
                        cout << "EXIT";
                        break;
                }
            }

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
                        gotoxy(25, 57);
                        cout << "EXIT";
                        break;
                }
            }

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
                                {
                                    switch (ex) {
                                        case 1:
                                            gotoxy(25, 71);
                                            cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                            break;
                                        case 2:
                                            goto run;
                                    }
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
                                {
                                    switch (ex) {
                                        case 1:
                                            gotoxy(25, 71);
                                            cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                            break;
                                        case 2:
                                            goto run;
                                    }
                                }
                                break;
                        }
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
        default:
            exit(0);
            break;


    }
}