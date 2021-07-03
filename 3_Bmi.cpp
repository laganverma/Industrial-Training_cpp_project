#include<iostream>
#include <iomanip>
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
    float bmi, w, h;//weight and height
    int s;
    int s_1, s_2;
    double convert_1;
    double convert_2;
    double convert_3;
//    cout << "\n\n******Welcome to Bmi Calculator******";
//    cout << "\n\nPlease Enter your weight in \n1.Kilogram(Kg) \n2.Pound(lbs)" << endl << "Input = ";
//    cin >> s;
//    switch (s) {
//        case 1:
//            cout << "\nPlease Enter your Weight in Kg : ";
//            cin >> w;
//            cout << "\nEnter Your Height in \n 1.Cm \n 2.Inches"
//                 << endl << "Input = ";
//            cin >> s_1;
//            switch (s_1) {
//                case 1://Kg and cm (metric)
//                    cout << "Please Enter your Height in Cm : ";
//                    cin >> h;
//                    bmi = (w) / (h * h) * 10000;
//                    cout << "\nYour BMI is : " << setprecision(4) << bmi << endl;
//                    break;
//                case 2://Kg and Inches (Custom)
//                    cout
//                            << "Please Enter your Height in Inches(add inches not feet) : ";
//                    cin >> h;
//                    convert_1 = w * 2.20462;
//                    convert_2 = h;
//                    bmi = (convert_1 * 703) / (convert_2 * convert_2);
//                    cout << "\nYour BMI is : " << setprecision(4) << bmi << endl;
//                    break;
//            }
//            break;
//        case 2:
//            cout << "Please Enter your weight in Pounds : ";
//            cin >> w;
//            cout << "\nEnter Your Height in \n 1.Cm \n 2.Inches" << endl << "Input = ";
//            cin >> s_2;
//            switch (s_2) {
//                case 1://Pound and Cm (Custom)
//                    cout << "Please Enter your Height in Cm : ";
//                    cin >> h;
//                    convert_3 = w / 2.20462;
//                    bmi = (convert_3) / (h * h) * 10000;
//                    cout << "\nYour BMI is : " << setprecision(4) << bmi << endl;
//                    break;
//                case 2://Pound and Inches (english)
//                    cout << "Please Enter your Height in Inches (add inches not feet) : ";
//                    cin >> h;
//                    bmi = (w * 703) / (h * h);
//                    cout << "\n\nYour BMI is : " << setprecision(4) << bmi << endl;
//                    break;
//            }
//            break;
//    }
//    if (bmi > 25) {
//        cout << "Overweight";
//    } else if (bmi < 25 && bmi > 18.5) {
//        cout << "Optimal";
//    } else {
//        cout << "Underweight";
//    }
//    return 0;
//}
    gotoxy(25, 17);
    cout << "BMI";
    gotoxy(25, 19);
    cout << "******Welcome to Bmi Calculator******";
    gotoxy(25, 21);
    cout << "Please Enter your weight in";
    gotoxy(25, 22);
    cout << "1.Kilogram(Kg)";
    gotoxy(25, 23);
    cout << "2.Pound(lbs)";
    gotoxy(25, 24);
    cout << "Input = ";
    cin >> s;
    switch (s) {
        case 1:
            gotoxy(25, 25);
            cout << "Please Enter your Weight in Kg : ";
            cin >> w;
            gotoxy(25, 27);
            cout << "Enter Your Height in";
            gotoxy(25, 28);
            cout << "1.Cm";
            gotoxy(25, 29);
            cout << "2.Inches";
            gotoxy(25, 30);
            cout << "Input = ";
            cin >> s_1;
            switch (s_1) {
                case 1://Kg and cm (metric)
                    gotoxy(25, 31);
                    cout << "Please Enter your Height in Cm : ";
                    cin >> h;
                    bmi = (w) / (h * h) * 10000;
                    gotoxy(25, 33);
                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                    break;
                case 2://Kg and Inches (Custom)
                    gotoxy(25, 31);
                    cout << "Please Enter your Height in Inches(add inches not feet) : ";
                    cin >> h;
                    convert_1 = w * 2.20462;
                    convert_2 = h;
                    bmi = (convert_1 * 703) / (convert_2 * convert_2);
                    gotoxy(25, 33);
                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                    break;
            }
            break;
        case 2:
            gotoxy(25, 25);
            cout << "Please Enter your weight in Pounds : ";
            cin >> w;
            gotoxy(25, 28);
            cout << "1.Cm";
            gotoxy(25, 29);
            cout << "2.Inches";
            gotoxy(25, 30);
            cout << "Input = ";
            cin >> s_2;
            switch (s_2) {
                case 1://Pound and Cm (Custom)
                    gotoxy(25, 31);
                    cout << "Please Enter your Height in Cm : ";
                    cin >> h;
                    convert_3 = w / 2.20462;
                    bmi = (convert_3) / (h * h) * 10000;
                    gotoxy(25, 33);
                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                    break;
                case 2://Pound and Inches (english)
                    gotoxy(25, 31);
                    cout << "Please Enter your Height in Inches (add inches not feet) : ";
                    cin >> h;
                    bmi = (w * 703) / (h * h);
                    gotoxy(25, 33);
                    cout << "Your BMI is : " << setprecision(4) << bmi << endl;
                    break;
            }
            break;
    }
    if (bmi > 25) {
        gotoxy(25, 35);
        cout << "_Overweight_";
        int a;
        gotoxy(25, 36);
        cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN  BELOW";
        gotoxy(25, 37);
        cout << "1. DIET PLAN";
        gotoxy(25, 38);
        cout << "2. EXIT";
        cin >> a;
        switch (a) {
            case 1:
                gotoxy(25, 40);
                cout << "DIET PLAN";
                gotoxy(25, 41);
                cout << "1.Vegetarian";
                gotoxy(25, 42);
                cout << "2.Non-Vegetarian";
                int veg;
                cin >> veg;
                if (veg == 1) {
                    gotoxy(25, 45);
                    cout << "Veg food";
                } else {
                    gotoxy(25, 45);
                    cout << "non veg food";
                }


                break;
            case 2:
                gotoxy(25, 40);
                cout << "EXIT";
                break;
        }
    } else if (bmi < 25 && bmi > 18.5) {
        gotoxy(25, 35);
        cout << "_Optimal_";
    } else {
        gotoxy(25, 35);
        cout << "_Underweight_";
        int a;
        gotoxy(25, 36);
        cout << "IF YOU WANT A DIET PLAN PLZ REFER TO OPTIONS DOWN  BELOW";
        gotoxy(25, 37);
        cout << "1. DIET PLAN";
        gotoxy(25, 38);
        cout << "2. EXIT";
        cin >> a;
        switch (a) {
            case 1:
                gotoxy(25, 40);
                cout << "DIET PLAN";
                gotoxy(25, 41);
                cout << "1.Vegetarian";
                gotoxy(25, 42);
                cout << "2.Non-Vegetarian";
                int veg;
                cin >> veg;
                if (veg == 1) {
                    gotoxy(25, 45);
                    cout << "Veg food";
                } else {
                    gotoxy(25, 45);
                    cout << "non veg food";
                }
        }
    }
}