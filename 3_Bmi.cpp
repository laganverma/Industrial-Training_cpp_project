#include<iostream>
#include <iomanip>
using namespace std;
int main() {
    float bmi, w, h;
    int s;
    cout << "Please Enter your weight in \n1.Kilogram(Kg) \n2.Pound(lbs) " << endl;
    cin >> s;
    switch (s) {
        case 1: //Kg and cm (metric)
            cout << "Please Enter your Weight in Kg : ";
            cin >> w;
            cout << "Please Enter your Height in Cm : ";
            cin >> h;
            bmi = (w) / (h * h) * 10000;
            cout << "Your BMI is : " << setprecision(4) << bmi << endl;
            break;
        case 2: //Pound and Inches (english)
            cout << "Please Enter your weight in Pounds : ";
            cin >> w;
            cout << "Please Enter your Height in Inches : ";
            cin >> h;
            bmi = (w * 703) / (h * h);
            cout << "Your BMI is : " << setprecision(4) << bmi << endl;
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

