#include <iostream>

using namespace std;

int main() {
    int age, contact;
    char name, medical_condition, address;
    cout << "ENTER YOUR DETAILS FOR CREATING YOUR ACCOUNT IN OUR SYSTEM" << endl << endl;
    cout << "ENTER YOUR NAME = " << endl;
    cin >> name;
    cout << "\nENTER YOUR AGE = ";
    cin >> age;
    cout << "\nENTER YOUR CONTACT NO = ";
    cin >> contact;
    cout << "\nENTER YOUR ADDRESS = ";
    cin >> address;
    cout << "\nENTER , IF YOU HAVE ANY MEDICAL CONDITION = ";
    cin >> medical_condition;
    cout << name << endl;
    cout << age << endl;
    cout << contact << endl;
    cout << address << endl;
    cout << medical_condition << endl;


    return 0;
}