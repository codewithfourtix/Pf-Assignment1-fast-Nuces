#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float X1, Y1, X2, Y2, X3, Y3;
    cout << "Enter the X1 and Y1 of Point1: ";
    cin >> X1 >> Y1;
    cout << "Enter the X2 and Y2 of Point2: ";
    cin >> X2 >> Y2;
    cout << "Enter the X3 and Y3 of Point3: ";
    cin >> X3 >> Y3;
    
    
    float d1 = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));  
    float d2 = sqrt(pow(X3 - X2, 2) + pow(Y3 - Y2, 2));  
    float d3 = sqrt(pow(X3 - X1, 2) + pow(Y3 - Y1, 2));  
    
    if (X1 == X2 && X2 == X3 && Y1 == Y2 && Y2 == Y3) {
        cout << "All points are the same, not a triangle" << endl;
    } else {
        if (d1 == d2 && d2 == d3) {
            cout << "Equilateral Triangle" << endl;
        }
        else if (d1 == d2 || d2 == d3 || d1 == d3) {
            cout << "Isosceles Triangle" << endl;
        }
        if (pow(d1, 2) == pow(d2, 2) + pow(d3, 2) || 
            pow(d2, 2) == pow(d1, 2) + pow(d3, 2) || 
            pow(d3, 2) == pow(d1, 2) + pow(d2, 2)) {
            cout << "Right-angled Triangle" << endl;
        }
        if (d1 != d2 && d2 != d3 && d1 != d3) {
            cout << "Scalene Triangle" << endl;
        }
    }

    return 0;
}

