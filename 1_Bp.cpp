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
        if (sys < 120) {
            cout << "YOUR BP IS IN NORMAL RANGE(HIGH)" << endl;
        } else if (sys >= 120 && sys <= 129) {
            cout << "YOUR BP IS ELEVATED(HIGH)" << endl;
        } else if (sys >= 130 && sys <= 139) {
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 1)(HIGH)" << endl;
        } else if (sys >= 140 && sys <= 179) {
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 2)(HIGH)" << endl;
        } else if (sys >= 180) {
            cout << "YOUR BP IS VERY HIGH(HIGH)" << endl;
        }
    }

    void Low() const {
        if (dia < 79) {
            cout << "YOUR BP IS IN NORMAL RANGE(LOW)" << endl;
        } else if (dia < 80) {
            cout << "YOUR BP IS ELEVATED(LOW)" << endl;
        } else if (dia >= 80 && dia <= 89) {
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 1)(LOW)" << endl;
        } else if (dia >= 90 && dia <= 119) {
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 2)(LOW)" << endl;
        } else if (dia
                   >= 120) {
            cout << "YOUR BP IS VERY HIGH(LOW)" << endl;
        }
    }
};

int main() {

    BP user{};
    user.Input();
    user.High();
    user.Low();
    return 0;
}




