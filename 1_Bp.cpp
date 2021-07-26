#include <iostream>
#include <windows.h>
#include <iomanip>


using namespace std;
HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

class BP {
    long sys, dia;
public:
    void Input() {
        SetConsoleTextAttribute(color, 15);
        cout << "\n\n\t\t\t";
        cout << "ENTER SYSTOLIC PRESSURE VALUES (TOP NUMBER) = ";
        cin >> sys;
        cout << "\n\t\t\t";
        cout << "ENTER DIASTOLIC PRESSURE VALUES (BOTTOM NUMBER) = ";
        cin >> dia;
    }

    void High() const {
        SetConsoleTextAttribute(color, 15);
        if (sys <= 120 && dia <= 80) {
            cout << "\n\n\t\t\t";
            cout << "YOUR BP IS IN NORMAL RANGE" << endl;
        } else if (sys <= 129 && dia < 80) {
            cout << "\n\n\t\t\t";
            cout << "YOUR BP IS ELEVATED" << endl;
        } else if (sys <= 139 && dia <= 89) {
            cout << "\n\n\t\t\t";
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 1)" << endl;
        } else if (sys <= 179 && dia <= 119) {
            cout << "\n\n\t\t\t";
            cout << "YOUR BP IS HIGH (HYPERTENSION STAGE 2)" << endl;
        } else if (sys >= 180 && dia >= 120) {
            cout << "\n\n\t\t\t";
            cout << "YOUR BP IS VERY HIGH" << endl;
        }
    }

    void table() {
        cout << "\n\n\t\t\t\t\t\t";
        SetConsoleTextAttribute(color, 14);
        cout << "          BP REFERENCE TABLE";
        SetConsoleTextAttribute(color, 15);
        cout << "\n\n\t\t\t";
        cout << "BLOOD PRESSURE CATEGORY" << "\t\t" << "SYSTOLIC (upper number)" << "\t\t" << "DIASTOLIC (lower number)"
             << endl << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 2);
        cout << "1. NORMAL       " << "\t\t" << "    LESS THAN 120 " << "\t" << " -AND-" << "        LOWER THAN 80"
             << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 6);
        cout << "2. ELEVATED     " << "\t\t" << "      120 - 129 " << "\t" << " -AND-" << "        LESS THAN 80"
             << endl;
        cout << "\n\n\t\t\t";
        SetConsoleTextAttribute(color, 14);
        cout << "3. HIGH BLOOD PRESSURE" << "\t\t" << "      130 - 139 " << "\t" << "  -OR-" << "           80 - 89"
             << endl;
        cout << "\t\t\t";
        cout << "   (HYPERTENSION) STAGE1";
        cout << "\n\n\n\t\t\t";
        SetConsoleTextAttribute(color, 4);
        cout << "4. HIGH BLOOD PRESSURE" << "\t\t" << "    140 OR HIGHER " << "\t" << "  -OR-"
             << "         90 OR HIGHER"
             << endl;
        cout << "\t\t\t";
        SetConsoleTextAttribute(color, 4);
        cout << "   (HYPERTENSION) STAGE2";
        cout << "\n\n\n\t\t\t";
        SetConsoleTextAttribute(color, 12);
        cout << "5. HYPERTENSIVE CRISIS" << "\t\t" << "   HIGHER THAN 180" << "\t" << "-AND/OR-"
             << "     HIGHER THAN 120"
             << endl;
        SetConsoleTextAttribute(color, 12);
        cout << "\t\t\t";
        cout << "   (consult you doctor\n\t\t\t    immediately)";
        SetConsoleTextAttribute(color, 15);
    }

    void facts() {
        SetConsoleTextAttribute(color, 15);
        cout << "\n\n\n\t\t\t";
        cout << "Blood pressure categories\n\n\t\t\t";
        SetConsoleTextAttribute(color, 2);
        cout << "Normal\n\t\t\t";
        SetConsoleTextAttribute(color, 15);
        cout << "Blood pressure numbers of less than 120/80 mm Hg are considered within the normal range.\n\t\t\t"
                "If your results fall into this category, stick with heart-healthy habits like following\n\t\t\t"
                "a balanced diet and getting regular exercise.\n";
        cout << "\n\t\t\t";
        SetConsoleTextAttribute(color, 6);
        cout << "Elevated\n\t\t\t";
        SetConsoleTextAttribute(color, 15);
        cout << "Elevated blood pressure is when readings consistently range from 120-129 systolic\n\t\t\t"
                "and less than 80 mm Hg diastolic. People with elevated blood pressure are likely to\n\t\t\t"
                "develop high blood pressure unless steps are taken to control the condition.\n\t\t\t";
        cout << "\n\t\t\t";
        SetConsoleTextAttribute(color, 14);
        cout << "Hypertension Stage 1\n\t\t\t";
        SetConsoleTextAttribute(color, 15);
        cout << "Hypertension Stage 1 is when blood pressure consistently ranges from 130-139 systolic\n\t\t\t"
                "or 80-89 mm Hg diastolic. At this stage of high blood pressure, doctors are likely to\n\t\t\t"
                "prescribe lifestyle changes and may consider adding blood pressure medication based\n\t\t\t"
                "on your risk of atherosclerotic cardiovascular disease (ASCVD), \n\t\t\t"
                "such as heart attack or stroke.\n";
        cout << "\n\t\t\t";
        SetConsoleTextAttribute(color, 4);
        cout << "Hypertension Stage 2\n\t\t\t";
        SetConsoleTextAttribute(color, 15);
        cout << "Hypertension Stage 2 is when blood pressure consistently ranges at 140/90 mm Hg or higher.\n\t\t\t"
                "At this stage of high blood pressure, doctors are likely to prescribe a combination of\n\t\t\t"
                "blood pressure medications and lifestyle changes.\n\t\t\t";
        cout << "\n\t\t\t";
        SetConsoleTextAttribute(color, 12);
        cout << "Hypertensive crisis\n\t\t\t";
        SetConsoleTextAttribute(color, 15);
        cout << "This stage of high blood pressure requires medical attention. \n\t\t\t"
                "If your blood pressure readings suddenly exceed 180/120 mm Hg, wait \n\t\t\t"
                "five minutes and then test your blood pressure again. If your readings \n\t\t\t"
                "are still unusually high, contact your doctor immediately.\n\t\t\t"
                "You could be experiencing a hypertensive crisis.\n\t\t\t"
                "If your blood pressure is higher than 180/120 mm Hg and you are\n\t\t\t"
                "experiencing signs of possible organ damage such as chest pain,\n\t\t\t"
                "shortness of breath, back pain, numbness/weakness, change in vision\n\t\t\t"
                "or difficulty speaking, do not wait to see if your\n\t\t\t"
                "pressure comes down on its own.";
    }
};


int main() {

    //
    //
    //  case 1:


    SetConsoleTextAttribute(color, 15);
    cout << "\n\n\n\t\t\t";
    cout << "---------------------------------------------------------------------------";
    cout << "\n\t\t\t\t\t";
    SetConsoleTextAttribute(color, 14);
    cout << "  BP (BLOOD PRESSURE) - CALCULATOR";
    cout << "\n\t\t\t";
    SetConsoleTextAttribute(color, 15);
    cout << "---------------------------------------------------------------------------";
    bprerun:
    cout << "\n\n\t\t\t\t\t";
    SetConsoleTextAttribute(color, 14);
    cout << "******Welcome to Bp Calculator******";
    SetConsoleTextAttribute(color, 15);
    cout << "\n\n\t\t\t";
    cout << "1. CALCULATE YOUR BP";
    cout << "\n\t\t\t";
    cout << "2. BP REFERENCE TABLE";
    cout << "\n\t\t\t";
    cout << "3. UNDERSTAND BP READINGS AND VALUES";
    cout << "\n\t\t\t";
    cout << "4. RETURN TO MAIN MENU";
    cout << "\n\t\t\t";
    cout << "5. EXIT";
    cout << "\n\n\t\t\t";
    cout << "ENTER YOUR CHOICE : ";
    BP user;
    int bp;
    cin >> bp;
    switch (bp) {
        case 1:
            user.Input();
            user.High();
            cout << "\n\n\n\t\t\t";
            cout << "1. GO TO BP REFERENCE TABLE";
            cout << "\n\t\t\t";
            cout << "2. RETURN TO BP MENU";
            cout << "\n\t\t\t";
            cout << "3. RETURN TO MAIN MENU";
            cout << "\n\t\t\t";
            cout << "4. EXIT";
            cout << "\n\n\t\t\t";
            cout << "ENTER YOUR CHOICE : ";
            int bp_calci;
            cin >> bp_calci;
            switch (bp_calci) {
                case 1:
                    user.table();
                    cout << "\n";
                    cout << "\n\n\t\t\t";
                    cout << "DO YOU WANT TO UNDERSTAND BP READINGS AND VALUES";
                    cout << "\n\t\t\t";
                    cout << "1. YES";
                    cout << "\n\t\t\t";
                    cout << "2. RETURN TO MAIN MENU";
                    cout << "\n\t\t\t";
                    cout << "3. EXIT";
                    cout << "\n\n\t\t\t";
                    cout << "ENTER YOUR CHOICE : ";
                    int bp_calci_reference_table;
                    cin >> bp_calci_reference_table;
                    switch (bp_calci_reference_table) {
                        case 1:
                            user.facts();
                            cout << "\n\n\n\t\t\t";
                            cout << "1. RETURN TO BP MENU";
                            cout << "\n\t\t\t";
                            cout << "2. RETURN TO MAIN MENU";
                            cout << "\n\t\t\t";
                            cout << "3. EXIT";
                            cout << "\n\n\t\t\t";
                            cout << "ENTER YOUR CHOICE : ";
                            int bpfacts;
                            cin >> bpfacts;
                            switch (bpfacts) {
                                case 1:
                                    goto bprerun;
                                    break;
                                case 2:
                                    cout << "\n\n\n\t\t\t";
                                    SetConsoleTextAttribute(color, 14);
                                    cout << "   ******MAIN MENU******\n\n\n\n";
                                    SetConsoleTextAttribute(color, 15);
                                    //  goto exit;
                                case 3:
                                    cout << "\n\t\t\t";
                                    cout << "THANK YOU\n\n\n\n\n\n";
                                    exit(0);
                                    break;
                            }
                    }
                    break;
                case 2:
                    goto bprerun;
                    break;
                case 3:
                    cout << "\n\n\n\t\t\t";
                    SetConsoleTextAttribute(color, 14);
                    cout << "   ******MAIN MENU******\n\n\n\n";
                    SetConsoleTextAttribute(color, 15);
                    //  goto exit;
                case 4:
                    cout << "\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n\n\n";
                    exit(0);
                    break;
            }
            break;
        case 2:
            user.table();
            cout << "\n";
            cout << "\n\n\t\t\t";
            cout << "DO YOU WANT TO UNDERSTAND BP READINGS AND VALUES";
            cout << "\n\t\t\t";
            cout << "1. YES";
            cout << "\n\t\t\t";
            cout << "2. RETURN TO MAIN MENU";
            cout << "\n\t\t\t";
            cout << "3. EXIT";
            cout << "\n\n\t\t\t";
            cout << "ENTER YOUR CHOICE : ";
            int understand_bp_values;
            cin >> understand_bp_values;
            switch (understand_bp_values) {
                case 1:
                    user.facts();
                    cout << "\n\n\n\t\t\t";
                    cout << "1. RETURN TO BP MENU";
                    cout << "\n\t\t\t";
                    cout << "2. RETURN TO MAIN MENU";
                    cout << "\n\t\t\t";
                    cout << "3. EXIT";
                    cout << "\n\n\t\t\t";
                    cout << "ENTER YOUR CHOICE : ";
                    int bpfacts;
                    cin >> bpfacts;
                    switch (bpfacts) {
                        case 1:
                            goto bprerun;
                            break;
                        case 2:
                            cout << "\n\n\n\t\t\t";
                            SetConsoleTextAttribute(color, 14);
                            cout << "   ******MAIN MENU******\n\n\n\n";
                            SetConsoleTextAttribute(color, 15);
                            //  goto exit;
                        case 3:
                            cout << "\n\t\t\t";
                            cout << "THANK YOU\n\n\n\n\n\n";
                            exit(0);
                            break;
                    }
                    break;
                case 2:
                    cout << "\n\n\n\t\t\t";
                    SetConsoleTextAttribute(color, 14);
                    cout << "   ******MAIN MENU******\n\n\n\n";
                    SetConsoleTextAttribute(color, 15);
                    //  goto exit;
                case 3:
                    cout << "\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n\n\n";
                    exit(0);
            }
            break;
        case 3:
            user.facts();
            cout << "\n\n\n\t\t\t";
            cout << "1. RETURN TO BP MENU";
            cout << "\n\t\t\t";
            cout << "2. RETURN TO MAIN MENU";
            cout << "\n\t\t\t";
            cout << "3. EXIT";
            cout << "\n\n\t\t\t";
            cout << "ENTER YOUR CHOICE : ";
            int bpfacts;
            cin >> bpfacts;
            switch (bpfacts) {
                case 1:
                    goto bprerun;
                    break;
                case 2:
                    cout << "\n\n\n\t\t\t";
                    SetConsoleTextAttribute(color, 14);
                    cout << "   ******MAIN MENU******\n\n\n\n";
                    SetConsoleTextAttribute(color, 15);
                    //  goto exit;
                case 3:
                    cout << "\n\t\t\t";
                    cout << "THANK YOU\n\n\n\n\n\n";
                    exit(0);
                    break;
            }
        case 4:
            cout << "\n\n\n\t\t\t";
            SetConsoleTextAttribute(color, 14);
            cout << "   ******MAIN MENU******\n\n\n\n";
            SetConsoleTextAttribute(color, 15);
            //  goto exit;
        case 5:
            cout << "\n\t\t\t";
            cout << "THANK YOU\n\n\n\n\n\n";
            exit(0);
    }
}
