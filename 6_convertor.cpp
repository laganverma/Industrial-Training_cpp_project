#include <iostream>

using namespace std;

int main() {
    int sw;
    float Pound, Kg, Cm, Inches, Feet;//
    float Pound_1 = 2.20462;
    float Kg_1 = 2.20462;
    float Cm_1 = 2.54;
    float Inches_1 = 2.54;
    float Feet_1 = 12;
    float Feet_2 = 30.48;

    cout << "\n\n This Is The Value Convertor -----><-----\n";
    cout << "\n 1.Pound(lbs) To Kg(kg)\n 2.Kg(kg) To Pound(lbs)\n 3.Centimeter(cm) To Inches (in)"
            "\n 4.Inches (in) To Centimeter(cm)\n 5.Feet(ft) To Inches(in)\n 6.Feet(ft) To Centimeter(cm) \n\n";
    cin >> sw;
    switch (sw) {
        case 1:
            cout << "Enter The Weight Pounds(lbs)\n";
            cin >> Pound;
            cout << "Weight in Kg is " << (Pound / Kg_1);
            break;
        case 2:
            cout << "Enter The Weight Kilogram(Kg)\n";
            cin >> Kg;
            cout << "Weight in Pound(lbs) is " << (Kg * Pound_1);
            break;
        case 3:
            cout << "Enter The Height in Centimeter(Cm)\n";
            cin >> Cm;
            cout << "Height in Inches(in) Is =  " << (Cm / Inches_1);
            break;
        case 4:
            cout << "Enter The Height in Inches(in)\n";
            cin >> Inches;
            cout << "Height in Centimeter(Cm) Is =  " << (Inches * Cm_1);
            break;
        case 5:
            cout << "Enter The Height in Feet(ft)\n";
            cin >> Feet;
            cout << "Height in Inches(in) Is =  " << (Feet * Feet_1);
            break;
        case 6:
            cout << "Enter The Height in Feet(ft)\n";
            cin >> Feet;
            cout << "Height in Centimeter(Cm) Is =  " << (Feet * Feet_2);
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