#include<iostream>
#include <iomanip>

using namespace std;

int main() {
    float bmi, w, h;//weight and height
    int s;
    int s_1, s_2;
    double convert_1;
    double convert_2;
    double convert_3;
    cout << "\n\n******Welcome to Bmi Calculator******";
    cout << "\n\nPlease Enter your weight in \n1.Kilogram(Kg) \n2.Pound(lbs)" << endl << "Input = ";
    cin >> s;
    switch (s) {
        case 1:
            cout << "\nPlease Enter your Weight in Kg : ";
            cin >> w;
            cout << "\nEnter Your Height in \n 1.Cm \n 2.Inches"
                 << endl << "Input = ";
            cin >> s_1;
            switch (s_1) {
                case 1://Kg and cm (metric)
                    cout << "Please Enter your Height in Cm : ";
                    cin >> h;
                    bmi = (w) / (h * h) * 10000;
                    cout << "\nYour BMI is : " << setprecision(4) << bmi << endl;
                    break;
                case 2://Kg and Inches (Custom)
                    cout
                            << "Please Enter your Height in Inches(add inches not feet) : ";
                    cin >> h;
                    convert_1 = w * 2.20462;
                    convert_2 = h;
                    bmi = (convert_1 * 703) / (convert_2 * convert_2);
                    cout << "\nYour BMI is : " << setprecision(4) << bmi << endl;
                    break;
            }
            break;
        case 2:
            cout << "Please Enter your weight in Pounds : ";
            cin >> w;
            cout << "\nEnter Your Height in \n 1.Cm \n 2.Inches" << endl << "Input = ";
            cin >> s_2;
            switch (s_2) {
                case 1://Pound and Cm (Custom)
                    cout << "Please Enter your Height in Cm : ";
                    cin >> h;
                    convert_3 = w / 2.20462;
                    bmi = (convert_3) / (h * h) * 10000;
                    cout << "\nYour BMI is : " << setprecision(4) << bmi << endl;
                    break;
                case 2://Pound and Inches (english)
                    cout << "Please Enter your Height in Inches (add inches not feet) : ";
                    cin >> h;
                    bmi = (w * 703) / (h * h);
                    cout << "\n\nYour BMI is : " << setprecision(4) << bmi << endl;
                    break;
            }
            break;
    }
    if (bmi > 25) {
        cout << "Overweight";
    } else if (bmi < 25 && bmi > 18.5) {
        cout << "Optimal";
    } else {
        cout << "Underweight";
    }
    return 0;
}