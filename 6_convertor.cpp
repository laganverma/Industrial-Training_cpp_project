#include <iostream>

using namespace std;

int main() {
    int sw;
    float Pound, kg, cm, inches, feet;
    cout << "\n\n This Is The Value Convertor -----><-----\n";
    cout << "\n 1.Pound(lbs) To Kg(kg)\n 2.Kg(kg) To Pound(lbs)\n 3.Centimeter(cm) To Inches (in)"
            "\n 4.Inches (in) To Centimeter(cm)\n 5.Feet(ft) To Inches(in)\n 6.Inches(in) To Feet(ft) \n\n";
    cin >> sw;
    switch (sw) {
        case 1:
            const float kg = 2.20462;
            cout << "Enter The Weight pounds\n";
            cin >> Pound;
            cout << "Weight in Kg is " << (Pound / kg);
            break;
    }


    return 0;
}


/* Pound to Kg
 * kg to pound
 * cm to inches
 * inches to cm
 * feet to inches
 * feet to cm
 */