#include <iostream>

using namespace std;

class BP {
    float a, b;
public:
    void Input() {
        cout << "ENTER SYSTOLIC PRESSURE VALUES (TOP NUMBER) = ";
        cin >> a;
        cout << "\nENTER DIASTOLIC PRESSURE VALUES (BOTTOM NUMBER) = ";
        cin >> b;
    }

    void High() const {
        if (a < 120) {
            cout << "YOUR BP IS IN NORMAL RANGE(HIGH)" << endl;
        } else if (a >= 120 && a <= 129) {
            cout << "YOUR BP IS ELEVATED(HIGH)" << endl;
        } else if (a >= 130 && a <= 139) {
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 1)(HIGH)" << endl;
        } else if (a >= 140 && a <= 179) {
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 2)(HIGH)" << endl;
        } else if (a >= 180) {
            cout << "YOUR BP IS VERY HIGH(HIGH)" << endl;
        }
    }

    void Low() const {
        if (b < 79) {
            cout << "YOUR BP IS IN NORMAL RANGE(LOW)" << endl;
        } else if (b < 80) {
            cout << "YOUR BP IS ELEVATED(LOW)" << endl;
        } else if (b >= 80 && b <= 89) {
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 1)(LOW)" << endl;
        } else if (b >= 90 && b <= 119) {
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 2)(LOW)" << endl;
        } else if (b >= 120) {
            cout << "YOUR BP IS VERY HIGH(LOW)" << endl;
        }
    }
};

int main() {

    BP user_1;
    user_1.Input();
    user_1.High();
    user_1.Low();
    return 0;
}




