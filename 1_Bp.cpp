#include <iostream>

using namespace std;

class BP {
    long sys, dia;
public:
    void Input() {
        cout << "ENTER SYSTOLIC PRESSURE VALUES (TOP NUMBER) = ";
        cin >> sys;
        cout << "\nENTER DIASTOLIC PRESSURE VALUES (BOTTOM NUMBER) = ";
        cin >> dia;
    }

    void High() const {
        if (sys <= 120 && dia <= 80) {
            cout << "YOUR BP IS IN NORMAL RANGE" << endl;
        } else if (sys <= 129 && dia < 80) {
            cout << "YOUR BP IS ELEVATED" << endl;
        } else if (sys <= 139 && dia <= 89) {
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 1)" << endl;
        } else if (sys <= 179 && dia <= 119) {
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 2)" << endl;
        } else if (sys >= 180 && dia >= 120) {
            cout << "YOUR BP IS VERY HIGH" << endl;
        }
    }
};


int main() {
    BP user{};
    user.Input();
    user.High();
    return 0;
}






