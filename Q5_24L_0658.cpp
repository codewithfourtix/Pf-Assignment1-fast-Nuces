#include <iostream>
using namespace std;

int main() {
    float X1, X2, X3, X4, Y1, Y2, Y3, Y4, X, Y;
    float MinX, MinY, MaxX, MaxY;

    cout << "Enter the X1 and Y1: ";
    cin >> X1 >> Y1;
    cout << "\nEnter the X2 and Y2: ";
    cin >> X2 >> Y2;
    cout << "\nEnter the X3 and Y3: ";
    cin >> X3 >> Y3;
    cout << "\nEnter the X4 and Y4: ";
    cin >> X4 >> Y4;
    cout << "\nEnter the X and Y for Point: ";
    cin >> X >> Y;

    MinX = X1;
    MaxX = X1;

    if (X2 < MinX) MinX = X2;
    if (X2 > MaxX) MaxX = X2;
    if (X3 < MinX) MinX = X3;
    if (X3 > MaxX) MaxX = X3;
    if (X4 < MinX) MinX = X4;
    if (X4 > MaxX) MaxX = X4;

    MinY = Y1;
    MaxY = Y1;

    if (Y2 < MinY) MinY = Y2;
    if (Y2 > MaxY) MaxY = Y2;
    if (Y3 < MinY) MinY = Y3;
    if (Y3 > MaxY) MaxY = Y3;
    if (Y4 < MinY) MinY = Y4;
    if (Y4 > MaxY) MaxY = Y4;

    if (X >= MinX && X <= MaxX && Y >= MinY && Y <= MaxY) {
        cout << "\nP lies inside the Rectangle" << endl;
    } else {
        cout << "P lies outside the Rectangle" << endl;
    }

    return 0;
}

