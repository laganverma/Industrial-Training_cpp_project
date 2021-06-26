#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    float bmi, w, h;
    int s;

    cout << "Please Enter your weight in \n1.Pound(lbs) \n 2.Kilogram(Kg) : ";
    cin >> s;


//    switch (s) {
//    case 1: //pound and inches
    cout << "Please Enter your Weight in Kg : ";
    cin >> w;
    cout << "Please Enter your Height in Cm : ";
    cin >> h;
    bmi = (w) / (h * h) * 10000;

    cout << "Your BMI is : " <<setprecision(4)<< bmi << endl;
    // break;



    {
        if (bmi > 25) {
            cout << "Overweight";
        } else if (bmi < 25 && bmi > 18.5) {
            cout << "Optimal";
        } else {
            cout << "Underweight";
        }
    }


    return 0;


}