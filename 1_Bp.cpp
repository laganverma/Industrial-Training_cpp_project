#include <iostream>

using namespace std;

int main() {
    float a, b;

    cout << "ENTER YOUR HIGH BP VALUE'S" << endl;
    cin >> a;
    cout << "ENTER YOUR LOW BP VALUE'S" << endl;
    cin >> b;
    if (a >= 120 && a <= 140) {
        cout << "YOUR BP IS IN NORMAL RANGE" << endl;
    } else if (a < 120) {
        cout << "YOUR BP IS LOW" << endl;
    } else {
        cout << "YOUR BP IS HIGH" << endl;
    }
    if (b >= 120 && b <= 140) {
        cout << "YOUR BP IS IN NORMAL RANGE" << endl;
    } else if (b < 120) {
        cout << "YOUR BP IS LOW" << endl;
    } else {
        cout << "YOUR BP IS HIGH" << endl;
    }
    return 0;
}