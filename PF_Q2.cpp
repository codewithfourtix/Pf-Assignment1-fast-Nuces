#include <iostream>
using namespace std;

int main() {
    int Code, Currency_Code;
    float Quantity, Price_Per_Kg, Meal_Price, Sales_Tax, Total_Amount;

    cout << "Code\t\tMeal\t\tPer Kg Price In Pakistani Rupees\n";
    cout << " 1\t   Chicken Hanadi\t\t1800\n";
    cout << " 2\t   Chicken Karahi\t\t2000\n";
    cout << " 3\t   Chicken Tikka\t\t2200\n";
    cout << " 4\t   Chicken Haleem\t\t500\n";
    cout << " 5\t   Creamy Chicken\t\t2500\n";
    cout << "Enter the Code to Select the Meal: ";
    cin >> Code;
    if (Code == 1) {
        Price_Per_Kg = 1800;
    } else if (Code == 2) {
        Price_Per_Kg = 2000;
    } else if (Code == 3) {
        Price_Per_Kg = 2200;
    } else if (Code == 4) {
        Price_Per_Kg = 500;
    } else if (Code == 5) {
        Price_Per_Kg = 2500;
    } else {
        cout << "Invalid Meal Code";
        return 1;
    }
    cout << "Ohh! That's Great. So you would like to have ";
    if (Code == 1) {
        cout << "Chicken Hanadi\n";
    } else if (Code == 2) {
        cout << "Chicken Karahi\n";
    } else if (Code == 3) {
        cout << "Chicken Tikka\n";
    } else if (Code == 4) {
        cout << "Chicken Haleem\n";
    } else if (Code == 5) {
        cout << "Creamy Chicken\n";
    }

    cout << "Enter the Amount(in kgs) that you want: ";
    cin >> Quantity;

    if (Quantity <= 0) {
        cout << "Invalid Quantity!";
        return 0;
    }

    cout << "Select the Currency: \n";
    cout << "Code\t\tCurrency\n";
    cout << "1\t\tPakistani Rupee\n";
    cout << "2\t\tEuro\n";
    cout << "3\t\tDollar\n";
    cout << "Select Currency That You would like to Pay In: ";
    cin >> Currency_Code;

    Meal_Price = Quantity * Price_Per_Kg;

    if (Meal_Price <= 1000) {
        Sales_Tax = 0;
    } else if (Meal_Price <= 3000) {
        Sales_Tax = 0.02 * Meal_Price;
    } else {
        Sales_Tax = 0.05 * Meal_Price;
    }

    Total_Amount = Meal_Price + Sales_Tax;

    if (Currency_Code == 1) { 
        cout << "Meal Price : PKR" << Meal_Price << endl;
        cout << "Sales Tax : PKR" << Sales_Tax << endl;
        cout << "Total Price : PKR" << Total_Amount << endl;
    } else if (Currency_Code == 2) { 
        float euroConversionRate = 193;
        cout << "Meal Price : €" << Meal_Price / euroConversionRate << endl;
        cout << "Sales Tax : €" << Sales_Tax / euroConversionRate << endl;
        cout << "Total Price : €" << Total_Amount / euroConversionRate << endl;
    } else if (Currency_Code == 3) {
        float dollarConversionRate = 165;
        cout << "Meal Price : $" << Meal_Price / dollarConversionRate << endl;
        cout << "Sales Tax : $" << Sales_Tax / dollarConversionRate << endl;
        cout << "Total Price : $" << Total_Amount / dollarConversionRate << endl;
    } else {
        cout << "Invalid Currency Selection";
    }

    return 0;
}

