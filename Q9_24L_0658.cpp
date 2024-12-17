#include <iostream>
using namespace std;

int main() {
    int roll_no1, roll_no2, roll_no3, roll_no4, roll_no5;
    int Student1_1, Student1_2, Student1_3, Student1_4, Student1_5; // Courses for student 1
    int Student2_1, Student2_2, Student2_3, Student2_4, Student2_5; // Courses for student 2
    int Student3_1, Student3_2, Student3_3, Student3_4, Student3_5; // Courses for student 3
    int Student4_1, Student4_2, Student4_3, Student4_4, Student4_5; // Courses for student 4
    int Student5_1, Student5_2, Student5_3, Student5_4, Student5_5; // Courses for student 5

    cout << "Enter Roll No. and Marks of 5 courses for student 1: ";
    cin >> roll_no1 >> Student1_1 >> Student1_2 >> Student1_3 >> Student1_4 >> Student1_5;
    int total1 = Student1_1 + Student1_2 + Student1_3 + Student1_4 + Student1_5;

    cout << "Enter Roll No. and Marks of 5 courses for student 2: ";
    cin >> roll_no2 >> Student2_1 >> Student2_2 >> Student2_3 >> Student2_4 >> Student2_5;
    int total2 = Student2_1 + Student2_2 + Student2_3 + Student2_4 + Student2_5;

    cout << "Enter Roll No. and Marks of 5 courses for student 3: ";
    cin >> roll_no3 >> Student3_1 >> Student3_2 >> Student3_3 >> Student3_4 >> Student3_5;
    int total3 = Student3_1 + Student3_2 + Student3_3 + Student3_4 + Student3_5;

    cout << "Enter Roll No. and Marks of 5 courses for student 4: ";
    cin >> roll_no4 >> Student4_1 >> Student4_2 >> Student4_3 >> Student4_4 >> Student4_5;
    int total4 = Student4_1 + Student4_2 + Student4_3 + Student4_4 + Student4_5;

    cout << "Enter Roll No. and Marks of 5 courses for student 5: ";
    cin >> roll_no5 >> Student5_1 >> Student5_2 >> Student5_3 >> Student5_4 >> Student5_5;
    int total5 = Student5_1 + Student5_2 + Student5_3 + Student5_4 + Student5_5;

    int highest_total = total1;
    int highest_roll_no = roll_no1;

    if (total2 > highest_total) {
        highest_total = total2;
        highest_roll_no = roll_no2;
    }
    if (total3 > highest_total) {
        highest_total = total3;
        highest_roll_no = roll_no3;
    }
    if (total4 > highest_total) {
        highest_total = total4;
        highest_roll_no = roll_no4;
    }
    if (total5 > highest_total) {
        highest_total = total5;
        highest_roll_no = roll_no5;
    }

    cout << highest_roll_no << " has the highest Aggregate of " << highest_total << endl;

    return 0;
}

