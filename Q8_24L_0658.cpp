#include <iostream>
using namespace std;

int main() {
    int Number_1, Number_2;

    cout << "Enter two Numbers : ";
    cin >> Number_1 >> Number_2;

    if (Number_1 % Number_2 == 0) {
        cout << Number_1 << " is a multiple of " << Number_2 << endl;
    }else if (Number_2 % Number_1 == 0) {
        cout << Number_2 << " is a multiple of " << Number_1 << endl;
    }else {
        cout << "NON" << endl;
    }
    return 0;
}

