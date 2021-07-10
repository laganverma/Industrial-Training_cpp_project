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
    int main;
    float bmi, w, h;//weight and height
    int s;
    int s_1, s_2;
    int h_1;
    double convert_1;
    double convert_2;
    double convert_3;
    gotoxy(25, 17);
    cout << "---------------------------------------------------------------------------";
    gotoxy(45, 18);
    cout << "BMI (BODY MASS INDEX) - CALCULATOR";
    gotoxy(25, 19);
    cout << "---------------------------------------------------------------------------";
    gotoxy(25, 21);
    cout << "******Welcome to Bmi Calculator******";
    gotoxy(25, 23);
    cout << "Enter your weight in : ";
    gotoxy(25, 24);
    cout << "1.Kilogram(Kg)";
    gotoxy(25, 25);
    cout << "2.Pound(lbs)";
    gotoxy(25, 26);
    cout << "Choice = ";
    cin >> s;
    switch (s) {
        case 1:
            gotoxy(25, 27);
            cout << "Please Enter your Weight in Kg : ";
            cin >> w;
            gotoxy(25, 29);
            cout << "Enter Your Height in";
            gotoxy(25, 30);
            cout << "1.Cm";
            gotoxy(25, 31);
            cout << "2.Feet and Inches";
            gotoxy(25, 32);
            cout << "Choice = ";
            cin >> s_1;
            switch (s_1) {
                case 1://Kg and cm (metric)
                    gotoxy(25, 33);
                    cout << "Please Enter your Height in Cm : ";
                    cin >> h;
                    bmi = (w) / (h * h) * 10000;
                    gotoxy(25, 34);
                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                    break;
                case 2://Kg and Inches (Custom)
                    gotoxy(25, 33);
                    cout << "Please Enter your Height in Feet: ";
                    cin >> h;
                    gotoxy(25, 34);
                    cout << "Please Enter your Height in inches: ";
                    cin >> h_1;
                    convert_2 = (h * 12) + h_1;
                    convert_1 = w * 2.20462;
                    bmi = (convert_1 * 703) / (convert_2 * convert_2);
                    gotoxy(25, 35);
                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                    break;
            }
            break;
        case 2:
            gotoxy(25, 27);
            cout << "Please Enter your weight in Pounds : ";
            cin >> w;
            gotoxy(25, 29);
            cout << "Enter Your Height in";
            gotoxy(25, 30);
            cout << "1.Cm";
            gotoxy(25, 31);
            cout << "2.Feet and Inches";
            gotoxy(25, 32);
            cout << "Choice = ";
            cin >> s_2;
            switch (s_2) {
                case 1://Pound and Cm (Custom)
                    gotoxy(25, 33);
                    cout << "Please Enter your Height in Cm : ";
                    cin >> h;
                    convert_3 = w / 2.20462;
                    bmi = (convert_3) / (h * h) * 10000;
                    gotoxy(25, 34);
                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                    break;
                case 2://Pound and Inches (english)
                    gotoxy(25, 33);
                    cout << "Please Enter your Height in Feet: ";
                    cin >> h;
                    gotoxy(25, 34);
                    cout << "Please Enter your Height in inches: ";
                    cin >> h_1;
                    convert_2 = (h * 12) + h_1;
                    bmi = (w * 703) / (convert_2 * convert_2);
                    gotoxy(25, 35);
                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                    break;
            }
            break;
    }

    // OBESE
    if (bmi > 30) {
        gotoxy(25, 37);
        cout << "_Obese_";
        int a;
        gotoxy(25, 39);
        cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN BELOW:";
        gotoxy(25, 40);
        cout << "1. DIET PLAN";
        gotoxy(25, 41);
        cout << "2. RUN AGAIN";
        gotoxy(25, 42);
        cout << "3. EXIT";
        gotoxy(25, 43);
        cout << "Choice = ";
        cin >> a;
        switch (a) {
            case 1:
                gotoxy(25, 45);
                cout << "DIET PLAN";
                gotoxy(25, 46);
                cout << "1.Vegetarian";
                gotoxy(25, 47);
                cout << "2.Non-Vegetarian";
                int veg;
                cin >> veg;
                if (veg == 1) {
                    gotoxy(25, 49);
                    cout << "Plz Click On The Link For Vegetarian Diet Plan";
                    gotoxy(25, 50);
                    cout << "https://bit.ly/3qP1lvH\n\n\n\n\n";
                } else {
                    gotoxy(25, 49);
                    cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                    gotoxy(25, 50);
                    cout << "https://bit.ly/3qP1lvH\n\n\n\n\n";
                }
                break;
            case 3:
                gotoxy(25, 46);
                cout << "EXIT\n\n\n\n\n";
                break;
        }

        //OVERWEIGHT
    } else if (bmi < 30 && bmi > 25) {
        gotoxy(25, 37);
        cout << "_Overweight_";
        int a;
        gotoxy(25, 39);
        cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN  BELOW:";
        gotoxy(25, 40);
        cout << "1. DIET PLAN";
        gotoxy(25, 41);
        cout << "2. RUN AGAIN";
        gotoxy(25, 42);
        cout << "3. EXIT";
        gotoxy(25, 43);
        cout << "Choice = ";
        cin >> a;
        switch (a) {
            case 1:
                gotoxy(25, 45);
                cout << "DIET PLAN";
                gotoxy(25, 46);
                cout << "1.Vegetarian";
                gotoxy(25, 47);
                cout << "2.Non-Vegetarian";
                int veg;
                cin >> veg;
                if (veg == 1) {
                    gotoxy(25, 49);
                    cout << "Plz Click On The Link For Vegetarian Diet Plan";
                    gotoxy(25, 50);
                    cout << "1. https://bit.ly/3hkpOWw \n\n\n\n\n";
                    gotoxy(25, 51);
                    cout << "2. https://bit.ly/3k3d5th \n\n\n\n\n";
                } else {
                    gotoxy(25, 49);
                    cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                    gotoxy(25, 50);
                    cout << "https://bit.ly/2VgfXsg \n\n\n\n\n";
                }
                break;
            case 3:
                gotoxy(25, 46);
                cout << "EXIT";
                break;
        }

        //OPTIMAL
    } else if (bmi < 25 && bmi > 18.5) {
        gotoxy(25, 35);
        cout << "_Optimal_";
        int a;
        gotoxy(25, 39);
        cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN  BELOW:";
        gotoxy(25, 40);
        cout << "1. DIET PLAN";
        gotoxy(25, 41);
        cout << "2. RUN AGAIN";
        gotoxy(25, 42);
        cout << "3. EXIT";
        gotoxy(25, 43);
        cout << "Choice = ";
        cin >> a;
        switch (a) {
            case 1:
                gotoxy(25, 45);
                cout << "DIET PLAN";
                gotoxy(25, 46);
                cout << "1.Vegetarian";
                gotoxy(25, 47);
                cout << "2.Non-Vegetarian";
                int veg;
                cin >> veg;
                if (veg == 1) {
                    gotoxy(25, 49);
                    cout << "Plz Click On The Link For Vegetarian Diet Plan";
                    gotoxy(25, 50);
                    cout << "We are just finding it\n\n\n\n\n";
                } else {
                    gotoxy(25, 49);
                    cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                    gotoxy(25, 50);
                    cout << "https://bit.ly/3wm38cK\n\n\n\n\n";
                }
            case 3:
                gotoxy(25, 46);
                cout << "EXIT\n\n\n\n\n";
                break;
        }

        //UNDERWEIGHT
    } else {
        gotoxy(25, 37);
        cout << "_Underweight_";
        int a;
        gotoxy(25, 39);
        cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN  BELOW:";
        gotoxy(25, 40);
        cout << "1. DIET PLAN";
        gotoxy(25, 41);
        cout << "2. RUN AGAIN";
        gotoxy(25, 42);
        cout << "3. EXIT";
        gotoxy(25, 43);
        cout << "Choice = ";
        cin >> a;
        switch (a) {
            case 1:
                gotoxy(25, 45);
                cout << "DIET PLAN";
                gotoxy(25, 46);
                cout << "1.Vegetarian";
                gotoxy(25, 47);
                cout << "2.Non-Vegetarian";
                int veg;
                cin >> veg;
                if (veg == 1) {
                    gotoxy(25, 49);
                    cout << "Plz Click On The Link For Vegetarian Diet Plan";
                    gotoxy(25, 50);
                    cout << "1. https://bit.ly/3jQL3Rl\n\n\n\n\n";
                    gotoxy(25, 51);
                    cout << "2. https://bit.ly/36mCSVc\n\n\n\n\n";
                } else {
                    gotoxy(25, 49);
                    cout << "Plz Click On The Link For Non-Vegetarian Diet Plan";
                    gotoxy(25, 50);
                    cout << "https://bit.ly/36mCSVc\n\n\n\n\n";
                }
            case 3:
                gotoxy(25, 46);
                cout << "EXIT\n\n\n\n\n";
                break;
        }
    }
}