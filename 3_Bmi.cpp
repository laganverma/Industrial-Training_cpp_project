#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
COORD coord = {0, 0};

//void nt y) {
//    COORD coord;
//    coord.X = x;
//    coord.Y = y;
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//}
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

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
    int x, p;
    int ex;
    cout << "\n\n\n\t\t\t";
    cout << "---------------------------------------------------------------------------";
    cout << "\n\t\t\t\t\t";
    SetConsoleTextAttribute(color, 14);
    cout << "     BMI (BODY MASS INDEX) - CALCULATOR";
    cout << "\n\t\t\t";
    SetConsoleTextAttribute(color, 15);
    cout << "---------------------------------------------------------------------------";
    cout << "\n\n\t\t\t\t\t";
    SetConsoleTextAttribute(color, 14);
    cout << "    ******Welcome to Bmi Calculator******";
    cout << "\n\n\n\t\t\t";
    SetConsoleTextAttribute(color, 15);
    cout << "1. CALCULATE YOUR BMI";
    cout << "\n\t\t\t";
    cout << "2. BMI REFERENCE TABLE";
    cout << "\n\t\t\t";
    cout << "3. EXIT";
    cout << "\n\t\t\t";
    cout << "ENTER YOUR CHOICE : ";
    cin >> x;
    switch (x) {
        case 1:
            cout << "\n\n\t\t\t\t\t\t";
            SetConsoleTextAttribute(color, 14);
            cout << "    CALCULATE YOUR BMI";
            cout << "\n\n\t\t\t";
            SetConsoleTextAttribute(color, 15);
            cout << "Enter your weight in : ";
            cout << "\n\t\t\t";
            cout << "1. Kilogram(Kg)";
            cout << "\n\t\t\t";
            cout << "2. Pound(lbs)";
            cout << "\n\t\t\t";
            cout << "Choice = ";
            cin >> s;
            switch (s) {
                case 1:
                    cout << "\n\t\t\t";
                    cout << "Please Enter your Weight in Kg : ";
                    cin >> w;
                    cout << "\n\n\t\t\t";
                    cout << "Enter Your Height in : ";
                    cout << "\n\t\t\t";
                    cout << "1.Cm";
                    cout << "\n\t\t\t";
                    cout << "2.Feet and Inches";
                    cout << "\n\t\t\t";
                    cout << "Choice = ";
                    cin >> s_1;
                    switch (s_1) {
                        case 1://Kg and cm (metric)
                            cout << "\n\t\t\t";
                            cout << "Please Enter your Height in Cm : ";
                            cin >> h;
                            bmi = (w) / (h * h) * 10000;
                            cout << "\n\n\t\t\t";
                            cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                            break;
                        case 2://Kg and Inches (Custom)
                            cout << "\n\t\t\t";
                            cout << "Please Enter your Height in Feet: ";
                            cin >> h;
                            cout << "\n\t\t\t";
                            cout << "Please Enter your Height in inches: ";
                            cin >> h_1;
                            convert_2 = (h * 12) + h_1;
                            convert_1 = w * 2.20462; //kg to pound  1 kg = 2.20462
                            bmi = (convert_1 * 703) / (convert_2 * convert_2);
                            cout << "\n\n\t\t\t";
                            cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                            break;
                    }
                    break;
                case 2:
                    cout << "\n\t\t\t";
                    cout << "Please Enter your weight in Pounds : ";
                    cin >> w;
                    cout << "\n\n\t\t\t";
                    cout << "Enter Your Height in : ";
                    cout << "\n\t\t\t";
                    cout << "1.Cm";
                    cout << "\n\t\t\t";
                    cout << "2.Feet and Inches";
                    cout << "\n\t\t\t";
                    cout << "Choice = ";
                    cin >> s_2;
                    switch (s_2) {
                        case 1://Pound and Cm (Custom)
                            cout << "\n\t\t\t";
                            cout << "Please Enter your Height in Cm : ";
                            cin >> h;
                            convert_3 = w / 2.20462;//pound to kg
                            bmi = (convert_3) / (h * h) * 10000;
                            cout << "\n\n\t\t\t";
                            cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                            break;
                        case 2://Pound and Inches (english)
                            cout << "\n\t\t\t";
                            cout << "Please Enter your Height in Feet: ";
                            cin >> h;
                            cout << "\n\t\t\t";
                            cout << "Please Enter your Height in inches: ";
                            cin >> h_1;
                            convert_2 = (h * 12) + h_1;
                            bmi = (w * 703) / (convert_2 * convert_2);
                            cout << "\n\n\t\t\t";
                            cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                            break;
                    }
                case 3:
                    cout << "\n\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n";
                    exit(0);
                    break;
            }

            // OBESE
            if (bmi > 30) {
                cout << "\n\t\t\t";
                cout << "_Obese_";
                int a;
                cout << "\n\n\n\t\t\t";
                cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN BELOW:";
                cout << "\n\t\t\t";
                cout << "1. DIET PLAN";
                cout << "\n\t\t\t";
                cout << "2. RUN AGAIN";
                cout << "\n\t\t\t";
                cout << "3. EXIT";
                cout << "\n\n\t\t\t";
                cout << "Choice = ";
                cin >> a;
                switch (a) {
                    case 1:
                        cout << "\n\t\t\t";
                        cout << "DIET PLAN";
                        cout << "\n\t\t\t";
                        cout << "1.Vegetarian";
                        cout << "\n\t\t\t";
                        cout << "2.Non-Vegetarian";
                        cout << "\n\n\t\t\t";
                        cout << "Choice = ";
                        int veg;
                        cin >> veg;
                        switch (veg) {
                            case 1:
                                cout << "\n\n\t\t\t";
                                cout << "Plz Click On The Link For Vegetarian Diet Plan";
                                cout << "\n\t\t\t";
                                cout << "https://bit.ly/3qP1lvH";
                                cout << "\n\n\t\t\t";
                                cout << "1. EXIT";
                                cout << "\n\t\t\t";
                                cout << "2. CALCULATE AGAIN";
                                cout << "\n\n\t\t\t";
                                cout << "Choice = ";
                                cin >> ex;
                                switch (ex) {
                                    case 1:
                                        cout << "\n\n\t\t\t";
                                        cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                        break;
                                    case 2:
                                        goto run;
                                        break;
                                }
                                break;
                            case 2:
                                cout << "\n\n\t\t\t";
                                cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                                cout << "\n\t\t\t";
                                cout << "https://bit.ly/3qP1lvH";
                                cout << "\n\n\t\t\t";
                                cout << "1. EXIT";
                                cout << "\n\t\t\t";
                                cout << "2. CALCULATE AGAIN";
                                cout << "\n\n\t\t\t";
                                cout << "Choice = ";
                                cin >> ex;
                                switch (ex) {
                                    case 1:
                                        cout << "\n\n\t\t\t";
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
                        cout << "\n\n\t\t\t";
                        cout << "THANK YOU\n\n\n\n";
                        exit(0);
                        break;
                }
            }
                // OVERWEIGHT
            else if (bmi < 30 && bmi > 25) {
                cout << "\n\t\t\t";
                cout << "_Overweight_";
                int a;
                cout << "\n\n\n\t\t\t";
                cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN BELOW:";
                cout << "\n\t\t\t";
                cout << "1. DIET PLAN";
                cout << "\n\t\t\t";
                cout << "2. RUN AGAIN";
                cout << "\n\t\t\t";
                cout << "3. EXIT";
                cout << "\n\n\t\t\t";
                cout << "Choice = ";
                cin >> a;
                switch (a) {
                    case 1:
                        cout << "\n\t\t\t";
                        cout << "DIET PLAN";
                        cout << "\n\t\t\t";
                        cout << "1.Vegetarian";
                        cout << "\n\t\t\t";
                        cout << "2.Non-Vegetarian";
                        cout << "\n\n\t\t\t";
                        cout << "Choice = ";
                        int veg;
                        cin >> veg;
                        switch (veg) {
                            case 1:
                                cout << "\n\n\t\t\t";
                                cout << "Plz Click On The Link For Vegetarian Diet Plan";
                                cout << "\n\t\t\t";
                                cout << "1. https://bit.ly/3hkpOWw ";
                                cout << "\n\t\t\t";
                                cout << "2. https://bit.ly/3k3d5th ";
                                cout << "\n\n\t\t\t";
                                cout << "1. EXIT";
                                cout << "\n\t\t\t";
                                cout << "2. CALCULATE AGAIN";
                                cout << "\n\n\t\t\t";
                                cout << "Choice = ";
                                cin >> ex;
                                switch (ex) {
                                    case 1:
                                        cout << "\n\n\t\t\t";
                                        cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                        break;
                                    case 2:
                                        goto run;
                                        break;
                                }
                                break;
                            case 2:
                                cout << "\n\n\t\t\t";
                                cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                                cout << "\n\t\t\t";
                                cout << "https://bit.ly/2VgfXsg ";
                                cout << "\n\n\t\t\t";
                                cout << "1. EXIT";
                                cout << "\n\t\t\t";
                                cout << "2. CALCULATE AGAIN";
                                cout << "\n\n\t\t\t";
                                cout << "Choice = ";
                                cin >> ex;
                                switch (ex) {
                                    case 1:
                                        cout << "\n\n\t\t\t";
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
                        cout << "\n\n\t\t\t";
                        cout << "THANK YOU\n\n\n\n";
                        exit(0);
                        break;
                }
            }
                // OPTIMAL
            else if (bmi < 25 && bmi > 18.5) {
                cout << "\n\t\t\t";
                cout << "_Optimal_";
                int a;
                cout << "\n\n\n\t\t\t";
                cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN BELOW:";
                cout << "\n\t\t\t";
                cout << "1. DIET PLAN";
                cout << "\n\t\t\t";
                cout << "2. RUN AGAIN";
                cout << "\n\t\t\t";
                cout << "3. EXIT";
                cout << "\n\n\t\t\t";
                cout << "Choice = ";
                cin >> a;
                switch (a) {
                    case 1:
                        cout << "\n\t\t\t";
                        cout << "DIET PLAN";
                        cout << "\n\t\t\t";
                        cout << "1.Vegetarian";
                        cout << "\n\t\t\t";
                        cout << "2.Non-Vegetarian";
                        cout << "\n\n\t\t\t";
                        cout << "Choice = ";
                        int veg;
                        cin >> veg;
                        switch (veg) {
                            case 1:
                                cout << "\n\n\t\t\t";
                                cout << "Plz Click On The Link For Vegetarian Diet Plan";
                                cout << "\n\t\t\t";
                                cout << "We are just finding it";
                                cout << "\n\n\t\t\t";
                                cout << "1. EXIT";
                                cout << "\n\t\t\t";
                                cout << "2. CALCULATE AGAIN";
                                cout << "\n\n\t\t\t";
                                cout << "Choice = ";
                                cin >> ex;
                                switch (ex) {
                                    case 1:
                                        cout << "\n\n\t\t\t";
                                        cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                        break;
                                    case 2:
                                        goto run;
                                        break;
                                }
                                break;
                            case 2:
                                cout << "\n\n\t\t\t";
                                cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                                cout << "\n\t\t\t";
                                cout << "https://bit.ly/3wm38cK";
                                cout << "\n\n\t\t\t";
                                cout << "1. EXIT";
                                cout << "\n\t\t\t";
                                cout << "2. CALCULATE AGAIN";
                                cout << "\n\n\t\t\t";
                                cout << "Choice = ";
                                cin >> ex;
                                switch (ex) {
                                    case 1:
                                        cout << "\n\n\t\t\t";
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
                        cout << "\n\n\t\t\t";
                        cout << "THANK YOU\n\n\n\n";
                        exit(0);
                        break;
                }
            }
                // UNDERWEIGHT
            else {
                cout << "\n\t\t\t";
                cout << "_Underweight_";
                int a;
                cout << "\n\n\n\t\t\t";
                cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN BELOW:";
                cout << "\n\t\t\t";
                cout << "1. DIET PLAN";
                cout << "\n\t\t\t";
                cout << "2. EXIT";
                cout << "\n\t\t\t";
                cout << "3. RUN AGAIN";
                cout << "\n\n\t\t\t";
                cout << "Choice = ";
                cin >> a;
                switch (a) {
                    case 1:
                        cout << "\n\t\t\t";
                        cout << "DIET PLAN";
                        cout << "\n\t\t\t";
                        cout << "1.Vegetarian";
                        cout << "\n\t\t\t";
                        cout << "2.Non-Vegetarian";
                        cout << "\n\n\t\t\t";
                        cout << "Choice = ";
                        int veg;
                        cin >> veg;
                        switch (veg) {
                            case 1:
                                cout << "\n\n\t\t\t";
                                cout << "Plz Click On The Link For Vegetarian Diet Plan";
                                cout << "\n\t\t\t";
                                cout << "1. https://bit.ly/3jQL3Rl";
                                cout << "\n\t\t\t";
                                cout << "2. https://bit.ly/36mCSVc";
                                cout << "\n\n\t\t\t";
                                cout << "1. EXIT";
                                cout << "\n\t\t\t";
                                cout << "2. CALCULATE AGAIN";
                                cout << "\n\n\t\t\t";
                                cout << "Choice = ";
                                cin >> ex;
                                switch (ex) {
                                    case 1:
                                        cout << "\n\n\t\t\t";
                                        cout << "THANK YOU!!\n\n\n\n\n\n\n";
                                        break;
                                    case 2:
                                        goto run;
                                        break;
                                }
                                break;
                            case 2:
                                cout << "\n\n\t\t\t";
                                cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                                cout << "\n\t\t\t";
                                cout << "https://bit.ly/36mCSVc";
                                cout << "\n\n\t\t\t";
                                cout << "1. EXIT";
                                cout << "\n\t\t\t";
                                cout << "2. CALCULATE AGAIN";
                                cout << "\n\n\t\t\t";
                                cout << "Choice = ";
                                cin >> ex;
                                switch (ex) {
                                    case 1:
                                        cout << "\n\n\t\t\t";
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
                        cout << "\n\n\t\t\t";
                        cout << "THANK YOU\n\n\n\n";
                        exit(0);
                        break;
                }
            }
            break;

        case 2:
        rerunbmi:
            cout << "\n\n\t\t\t\t\t\t";
            SetConsoleTextAttribute(color, 14);
            cout << "    BMI REFERENCE TABLE";
            SetConsoleTextAttribute(color, 15);
            cout << "\n\n\t\t\t";
            cout << "   _B.M.I_" << "\t\t\t\t\t" << "    _WEIGHT STATUS_" << endl << endl;
            cout << "\n\t\t\t";
            cout << "1. BELOW 18.5     " << "\t" << "    <---------------> " << "\t" << "    UNDER_WEIGHT" << endl;
            cout << "\n\t\t\t";
            cout << "2. 18.5 - 24.9     " << "\t" << "    <---------------> " << "\t" << "    NORMAL OR HEALTHY_WEIGHT"
                 << endl;
            cout << "\n\t\t\t";
            cout << "3. 25.0 - 29.9     " << "\t" << "    <---------------> " << "\t" << "    OVER_WEIGHT" << endl;
            cout << "\n\t\t\t";
            cout << "4. 30.0 AND ABOVE" << "\t" << "    <---------------> " << "\t" << "    OBESE" << endl << endl;
            cout << "\n\n\n\t\t\t";
            cout << "1. RUN AGAIN";
            cout << "\n\t\t\t";
            cout << "2. EXIT";
            cout << "\n\n\t\t\t";
            cout << "CHOICE : ";
            cin >> p;
            switch (p) {
                case 1:
                    goto rerunbmi;
                    break;
                case 2:
                    cout << "\n\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n";
                    exit(0);
                    break;
            }
            break;
        case 3:
            cout << "\n\n\t\t\t";
            cout << "THANK YOU\n\n\n\n";
            exit(0);
            break;
    }
}
