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

    void show() {
        int a;
        cout << "\n\ndekh pradhan\n in my life you are so valuable that "
                "i cant even think about losing you.\n so i give you 365 days to fell in love with me\n\n";
        cout << "1. thik hai\n 2. nahi\n\n";
        cout << "enter your choice = ";
        cin >> a;
        switch (a) {
            case 1:
                cout << "love you\n signal par bata diyo.";
                break;

            case 2:
                cout << "nautanki nahi , sach bol raha hun\n\n\n";
                break;
        }

    }
};


int main() {
    BP user{};
    user.show();
    return 0;
}






