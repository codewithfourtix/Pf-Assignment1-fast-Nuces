#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float X1, Y1, X2, Y2, X3, Y3;
    float Largest_Dis, Not_Largest1, Not_Largest2;
    cout << "Enter the X1 and Y1 of Point1: ";
    cin >> X1 >> Y1;
    cout << "Enter the X2 and Y2 of Point2: ";
    cin >> X2 >> Y2;
    cout << "Enter the X3 and Y3 of Point3: ";
    cin >> X3 >> Y3;
   if (X1 == X2 && X2 == X3 && Y1 == Y2 && Y2 == Y3) {
    cout << "All points are the same, not a triangle" << endl;
} else {
    float d1 = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));  
    float d2 = sqrt(pow(X3 - X2, 2) + pow(Y3 - Y2, 2));  
    float d3 = sqrt(pow(X3 - X1, 2) + pow(Y3 - Y1, 2));  

    if (d1 == d2 && d2 == d3) {
        cout << "Equilateral Triangle" << endl;
    } else if (d1 == d2 || d2 == d3 || d1 == d3) {
        cout << "Isosceles Triangle" << endl;
    } else {
    if (d1 >= d2 && d1 >= d3) {
        Largest_Dis = d1;
        Not_Largest1 = d2;
        Not_Largest2 = d3;
    } else if (d2 >= d1 && d2 >= d3) {
        Largest_Dis = d2;
        Not_Largest1 = d1;
        Not_Largest2 = d3;
    } else {
        Largest_Dis = d3;
        Not_Largest1 = d1;
        Not_Largest2 = d2;
    }
    if (pow(Largest_Dis, 2) == pow(Not_Largest1, 2) + pow(Not_Largest2, 2)) {
        cout << "Right-angled Triangle" << endl;
    } else {
        cout << "Not a Right-angled Triangle" << endl;
    }
}
}
    return 0;
}

