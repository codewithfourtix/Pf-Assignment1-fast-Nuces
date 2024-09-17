#include <iostream>
using namespace std;

int main()
{
  int Num1, Num2, Num3;
  cout << "Enter the Value of three integers :";
  cin >> Num1 >> Num2 >> Num3;
  cout << endl;
  // For Ascending
  if (Num1 > Num2 && Num2 > Num3)
  {
    cout << "The Ascending order is :" << Num3 << " " << Num2 << " " << Num1;
  }
  else if (Num1 > Num3 && Num3 > Num2)
  {
    cout << "The Ascending order is :" << Num2 << " " << Num3 << " " << Num1;
  }
  else if (Num2 > Num1 && Num1 > Num3)
  {
    cout << "The Ascending order is :" << Num3 << " " << Num1 << " " << Num2;
  }
  else if (Num2 > Num3 && Num3 > Num1)
  {
    cout << "The Ascending order is :" << Num1 << " " << Num3 << " " << Num2;
  }
  else if (Num3 > Num1 && Num1 > Num2)
  {
    cout << "The Ascending order is :" << Num2 << " " << Num1 << " " << Num3;
  }
  else
  {
    cout << "The Ascending order is :" << Num1 << " " << Num2 << " " << Num3;
  }
  cout << endl;
  // For Decending
  if (Num1 > Num2 && Num2 > Num3)
  {
    cout << "The Decending Order is :" << Num1 << " " << Num2 << " " << Num3;
  }
  else if (Num1 > Num3 && Num3 > Num2)
  {
    cout << "The Decending Order is :" << Num1 << " " << Num3 << " " << Num2;
  }
  else if (Num2 > Num1 && Num1 > Num3)
  {
    cout << "The Decending Order is :" << Num2 << " " << Num1 << " " << Num3;
  }
  else if (Num2 > Num3 && Num3 > Num1)
  {
    cout << "The Decending Order is :" << Num2 << " " << Num3 << " " << Num1;
  }
  else if (Num3 > Num1 && Num1 > Num2)
  {
    cout << "The Decending Order is :" << Num3 << " " << Num1 << " " << Num2;
  }
  else
  {
    cout << "The Decending Order is :" << Num3 << " " << Num2 << " " << Num1;
  }
}