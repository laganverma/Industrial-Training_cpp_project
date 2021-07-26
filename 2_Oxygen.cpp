#include <iostream>
#include <windows.h>
#include <iomanip>

HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;

class SPO2 {
    long SpO2;
public:
    void Input() {
        SetConsoleTextAttribute(color, 15);
        cout << "\n\n\t\t\t";
        cout << "ENTER SYSTOLIC PRESSURE VALUES (TOP NUMBER) = ";
        cin >> SpO2;

    }

    void High() const {
        SetConsoleTextAttribute(color, 15);
        if ((95 <= SpO2) && (SpO2 < 100)) {
            cout << "\n\n\t\t\t";
            SetConsoleTextAttribute(color, 2);
            cout << "NORMAL";
            SetConsoleTextAttribute(color, 15);
            cout << "BLOOD OXYGEN LEVELS ";
            cout << endl;
        } else if ((91 <= SpO2) && (SpO2 < 94)) {
            cout << "\n\n\t\t\t";
            SetConsoleTextAttribute(color, 6);
            cout << "CONCERNING";
            SetConsoleTextAttribute(color, 15);
            cout << "BLOOD OXYGEN LEVELS";
            cout << endl;
        } else if ((86 <= SpO2) && (SpO2 < 90)) {
            cout << "\n\n\t\t\t";
            SetConsoleTextAttribute(color, 14);
            cout << "LOW";
            SetConsoleTextAttribute(color, 15);
            cout << "HYPOXIC BLOOD OXYGEN LEVELS";
            cout << endl;
        } else if ((80 <= SpO2) && (SpO2 < 85)) {
            cout << "\n\n\t\t\t";
            SetConsoleTextAttribute(color, 4);
            cout << "LOW OXYGEN SATURATION AFFECTS YOUR BRAIN";
            SetConsoleTextAttribute(color, 15);
            cout << endl;
        } else if (SpO2 <= 67) {
            cout << "\n\n\t\t\t";
            SetConsoleTextAttribute(color, 12);
            cout << "CYANOSIS";
            SetConsoleTextAttribute(color, 15);
            cout << endl;
        }
    }

    void table() {
        cout << "\n\n\t\t\t\t";
        SetConsoleTextAttribute(color, 14);
        cout << "         OXYGEN REFERENCE TABLE";
        SetConsoleTextAttribute(color, 15);
        cout << "\n\n\t\t\t";
        cout << "OXYGEN CATEGORY" << "\t\t\t\t" << "   SpO2" << endl << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 2);
        cout << "1. NORMAL - HEALTHY" << "\t\t\t" << "95% to 100% " << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 6);
        cout << "2. NORMAL - COPD" << "\t\t\t" << "90% to 95% " << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 14);
        cout << "3. HYPOXIC" << "\t\t\t" << "        88% to 83% " << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 4);
        cout << "4. SEVERELY HYPOXIC" << "\t\t" << "       LESS THAN 83% " << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 12);
        cout << "5. CYANOSIS" << "\t\t\t" << "       LESS THAN 79%" << endl;
        SetConsoleTextAttribute(color, 15);
    }
};

int main() {
    SetConsoleTextAttribute(color, 15);
    cout << "\n\n\n\t\t\t";
    cout << "---------------------------------------------------------------------------";
    cout << "\n\t\t\t\t\t\t";
    SetConsoleTextAttribute(color, 14);
    cout << "  OXYGEN - CALCULATOR";
    cout << "\n\t\t\t";
    SetConsoleTextAttribute(color, 15);
    cout << "---------------------------------------------------------------------------";
    Spo2rerun:
    cout << "\n\n\t\t\t\t\t";
    SetConsoleTextAttribute(color, 14);
    cout << "******Welcome to Oxygen Calculator******";
    SetConsoleTextAttribute(color, 15);
    cout << "\n\n\t\t\t";
    cout << "1. CALCULATE YOUR SpO2 (blood oxygen levels) ";
    cout << "\n\t\t\t";
    cout << "2. Sp02 REFERENCE TABLE";
    cout << "\n\t\t\t";
    cout << "3. RETURN TO MAIN MENU";
    cout << "\n\t\t\t";
    cout << "4. EXIT";
    cout << "\n\n\t\t\t";
    cout << "ENTER YOUR CHOICE : ";
    SPO2 user;
    int SpO2_calci;
    cin >> SpO2_calci;
    switch (SpO2_calci) {
        case 1:
            user.Input();
            user.High();
            cout << "\n\n\n\t\t\t";
            cout << "1. GO TO BP REFERENCE TABLE";
            cout << "\n\t\t\t";
            cout << "2. RETURN TO SpO2 MENU";
            cout << "\n\t\t\t";
            cout << "3. RETURN TO MAIN MENU";
            cout << "\n\t\t\t";
            cout << "4. EXIT";
            cout << "\n\n\t\t\t";
            cout << "ENTER YOUR CHOICE : ";
            int SpO2_calci_readings;
            cin >> SpO2_calci_readings;
            switch (SpO2_calci_readings) {
                case 1:
                    user.table();
                    cout << "\n";
                    cout << "\n\t\t\t";
                    cout << "1. RETURN TO SpO2 MENU";
                    cout << "\n\t\t\t";
                    cout << "2. RETURN TO MAIN MENU";
                    cout << "\n\t\t\t";
                    cout << "3. EXIT";
                    cout << "\n\n\t\t\t";
                    cout << "ENTER YOUR CHOICE : ";
                    int SpO2_calci_reference_table;
                    cin >> SpO2_calci_reference_table;
                    switch (SpO2_calci_reference_table) {
                        case 1:
                            goto Spo2rerun;
                            break;
                        case 2:
                            cout << "\n\n\n\t\t\t";
                            SetConsoleTextAttribute(color, 14);
                            cout << "   ******MAIN MENU******\n\n\n\n";
                            SetConsoleTextAttribute(color, 15);
                            // goto exit;
                        case 3:
                            cout << "\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n";
                            exit(0);
                            break;
                    }

                    break;
                case 2:
                    goto Spo2rerun;
                    break;
                case 3:
                    cout << "\n\n\n\t\t\t";
                    SetConsoleTextAttribute(color, 14);
                    cout << "   ******MAIN MENU******\n\n\n\n";
                    SetConsoleTextAttribute(color, 15);
                    // goto exit;
                case 4:
                    cout << "\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n\n\n";
                    exit(0);
            }
            break;
        case 2:
            user.table();
            cout << "\n";
            cout << "\n\t\t\t";
            cout << "1. RETURN TO SpO2 MENU";
            cout << "\n\t\t\t";
            cout << "2. RETURN TO MAIN MENU";
            cout << "\n\t\t\t";
            cout << "3. EXIT";
            cout << "\n\n\t\t\t";
            cout << "ENTER YOUR CHOICE : ";
            int SpO2_calci_reference_table;
            cin >> SpO2_calci_reference_table;
            switch (SpO2_calci_reference_table) {
                case 1:
                    goto Spo2rerun;
                    break;
                case 2:
                    cout << "\n\n\n\t\t\t";
                    SetConsoleTextAttribute(color, 14);
                    cout << "   ******MAIN MENU******\n\n\n\n";
                    SetConsoleTextAttribute(color, 15);
                    // goto exit;
                case 3:
                    cout << "\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n\n\n";
                    exit(0);
                    break;
            }
        case 3:
            cout << "\n\n\n\t\t\t";
            SetConsoleTextAttribute(color, 14);
            cout << "   ******MAIN MENU******\n\n\n\n";
            SetConsoleTextAttribute(color, 15);
            //goto exit;
        case 4:
            cout << "\n\t\t\t";
            cout << "THANK YOU\n\n\n\n\n\n";
            exit(0);
            break;
        default:
            break;
    }

}