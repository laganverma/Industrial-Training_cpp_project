#include <iostream>

using namespace std;

int main() {
    int age, contact;
    char name, medical_condition, address;
    int main;
    cout << "1.BP CALCULATOR" << endl;
    cout << "2.OXYGEN CALCULATOR" << endl;
    cout << "3.COVID SYMPTOMS" << endl;
    cout << "4.COVID HOSPITALS" << endl << endl;
    cout << "ENTER YOUR CHOICE = " << endl;
    cin >> main;


    switch (main) {
        case 1:
            cout << "BP CALCULATOR";
            break;
        case 2:
            cout << "OXYGEN CALCULATOR";
            break;
        case 3:
            cout << "COVID SYMPTOMS";
            break;
        case 4:
            cout << "COVID HOSPITALS";
            break;
    }

}