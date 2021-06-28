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
//    int age, contact;
//    char name, medical_condition, address;
    int main;
    float bmi, w, h;//weight and height
    int s;
    int s_1, s_2;
    double convert_1;
    double convert_2;
    double convert_3;200

    gotoxy(20, 0);
    cout << "\n\n\n\n\n\t\t\t"
            " Loading";
    char x = 219;

    for (int i = 0; i < 50; i++) {
        {
            _sleep(50);

            cout << x;
        }
    }
    retry:
    cout << endl << endl << endl << endl << endl;
    gotoxy(25, 9);
    cout << "1.BP CALCULATOR" << endl;
    gotoxy(25, 10);
    cout << "2.OXYGEN CALCULATOR" << endl;
    gotoxy(25, 11);
    cout << "3.BMI" << endl;
    gotoxy(25, 12);
    cout << "4.COVID SYMPTOMS" << endl;
    gotoxy(25, 13);
    cout << "5.COVID HOSPITALS" << endl << endl;
    gotoxy(25, 14);
    cout << "6.TRY AGAIN" << endl << endl;
    gotoxy(25, 15);
    cout << "ENTER YOUR CHOICE = ";
    cin >> main;


    switch (main) {
        case 1:
            gotoxy(25, 17);
            cout << "BP CALCULATOR";
            break;
        case 2:
            gotoxy(25, 17);
            cout << "OXYGEN CALCULATOR";
            break;
        case 3:
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
            } else if (bmi < 25 && bmi > 18.5) {
                gotoxy(25, 35);
                cout << "_Optimal_";
            } else {
                gotoxy(25, 35);
                cout << "_Underweight_";
            }
            break;
        case 4:
            gotoxy(25, 16);
            cout << "COVID SYMPTOMS";
            break;
        case 5:
            gotoxy(25, 16);
            cout << "COVID HOSPITALS";
            break;
        case 6:
            goto retry;

    }
    return 0;
}