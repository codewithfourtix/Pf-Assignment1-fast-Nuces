#include <iostream>
using namespace std;

int main() {
    int Number;
    cout << "Enter a Six Digit Number: ";
    cin >> Number;
    
    if (Number > 999999) {
        cout << "Wrong input" << endl;
        return 0;
    }

    int Sixth_Digit = Number % 10;
    int Fifth_Digit = (Number / 10) % 10;
    int Fourth_Digit = (Number / 100) % 10;
    int Third_Digit = (Number / 1000) % 10;
    int Second_Digit = (Number / 10000) % 10;
    int First_Digit = (Number / 100000) % 10;

    bool leadingZeroSkipped = false; // to skip leading zeros

    if (First_Digit > 0) {
        leadingZeroSkipped = true;
        if (First_Digit == 1) cout << "One";
        else if (First_Digit == 2) cout << "Two";
        else if (First_Digit == 3) cout << "Three";
        else if (First_Digit == 4) cout << "Four";
        else if (First_Digit == 5) cout << "Five";
        else if (First_Digit == 6) cout << "Six";
        else if (First_Digit == 7) cout << "Seven";
        else if (First_Digit == 8) cout << "Eight";
        else if (First_Digit == 9) cout << "Nine";
    }

    if (leadingZeroSkipped || Second_Digit > 0) {
        leadingZeroSkipped = true;
        if (Second_Digit == 1) cout << " One";
        else if (Second_Digit == 2) cout << " Two";
        else if (Second_Digit == 3) cout << " Three";
        else if (Second_Digit == 4) cout << " Four";
        else if (Second_Digit == 5) cout << " Five";
        else if (Second_Digit == 6) cout << " Six";
        else if (Second_Digit == 7) cout << " Seven";
        else if (Second_Digit == 8) cout << " Eight";
        else if (Second_Digit == 9) cout << " Nine";
        else if (Second_Digit == 0) cout << " Zero";
    }

    if (leadingZeroSkipped || Third_Digit > 0) {
        leadingZeroSkipped = true;
        if (Third_Digit == 1) cout << " One";
        else if (Third_Digit == 2) cout << " Two";
        else if (Third_Digit == 3) cout << " Three";
        else if (Third_Digit == 4) cout << " Four";
        else if (Third_Digit == 5) cout << " Five";
        else if (Third_Digit == 6) cout << " Six";
        else if (Third_Digit == 7) cout << " Seven";
        else if (Third_Digit == 8) cout << " Eight";
        else if (Third_Digit == 9) cout << " Nine";
        else if (Third_Digit == 0) cout << " Zero";
    }

    if (leadingZeroSkipped || Fourth_Digit > 0) {
        leadingZeroSkipped = true;
        if (Fourth_Digit == 1) cout << " One";
        else if (Fourth_Digit == 2) cout << " Two";
        else if (Fourth_Digit == 3) cout << " Three";
        else if (Fourth_Digit == 4) cout << " Four";
        else if (Fourth_Digit == 5) cout << " Five";
        else if (Fourth_Digit == 6) cout << " Six";
        else if (Fourth_Digit == 7) cout << " Seven";
        else if (Fourth_Digit == 8) cout << " Eight";
        else if (Fourth_Digit == 9) cout << " Nine";
        else if (Fourth_Digit == 0) cout << " Zero";
    }

    if (leadingZeroSkipped || Fifth_Digit > 0) {
        leadingZeroSkipped = true;
        if (Fifth_Digit == 1) cout << " One";
        else if (Fifth_Digit == 2) cout << " Two";
        else if (Fifth_Digit == 3) cout << " Three";
        else if (Fifth_Digit == 4) cout << " Four";
        else if (Fifth_Digit == 5) cout << " Five";
        else if (Fifth_Digit == 6) cout << " Six";
        else if (Fifth_Digit == 7) cout << " Seven";
        else if (Fifth_Digit == 8) cout << " Eight";
        else if (Fifth_Digit == 9) cout << " Nine";
        else if (Fifth_Digit == 0) cout << " Zero";
    }

    if (leadingZeroSkipped || Sixth_Digit >= 0) {
        if (Sixth_Digit == 1) cout << " One";
        else if (Sixth_Digit == 2) cout << " Two";
        else if (Sixth_Digit == 3) cout << " Three";
        else if (Sixth_Digit == 4) cout << " Four";
        else if (Sixth_Digit == 5) cout << " Five";
        else if (Sixth_Digit == 6) cout << " Six";
        else if (Sixth_Digit == 7) cout << " Seven";
        else if (Sixth_Digit == 8) cout << " Eight";
        else if (Sixth_Digit == 9) cout << " Nine";
        else if (Sixth_Digit == 0) cout << " Zero";
    }

    return 0;
}

