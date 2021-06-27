#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int sw;
    float Pound, Kg, cm, inches, feet;//
    float Pound_1 = 2.20462;
    const float kg1 = 2.20462;

    cout << "\n\n This Is The Value Convertor -----><-----\n";
    cout << "\n 1.Pound(lbs) To Kg(kg)\n 2.Kg(kg) To Pound(lbs)\n 3.Centimeter(cm) To Inches (in)"
            "\n 4.Inches (in) To Centimeter(cm)\n 5.Feet(ft) To Inches(in)\n 6.Inches(in) To Feet(ft) \n\n";
    cin >> sw;
    switch (sw) {
        case 1:

            cout << "Enter The Weight pounds\n";
            cin >> Pound;
            cout << "Weight in Kg is " << (Pound / kg1);
            break;

        case 2:
            cout << "Enter The Weight Kilogram\n";
            cin >> Kg;
            cout << "Weight in Pound is " << (Kg*Pound_1);
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