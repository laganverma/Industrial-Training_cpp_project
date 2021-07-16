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

    void Facts() {
        cout << "\n\n\nWhy High Blood Pressure is a \"Silent Killer\"?";
        cout << "\n\n\n Most of the time, high blood pressure (HBP, or hypertension) has no obvious symptoms \n"
                "to indicate that something is wrong. The best ways to protect yourself are being aware of \n "
                "the risks and making changes that matter.\n"
                "\n"
                "         A few facts to be aware of:\n"
                "* Many people with high blood pressure don’t even know they have it. Often the signs and symptoms are misunderstood.\n"
                "* High blood pressure develops slowly over time and can be related to many causes.\n"
                "* High blood pressure cannot be cured. But it can be managed effectively through \n"
                "lifestyle changes and, when needed, medication.";

    }
};

int main() {
    BP user{};
    user.Input();
    user.High();
    user.Facts();
    return 0;
}




