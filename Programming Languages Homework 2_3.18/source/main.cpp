#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sales;
    double salary;

    cout << fixed << setprecision(2);

    cout << "Enter sales in dollars (-1 to end): ";
    cin >> sales;

    while (sales != -1) {
        salary = 200 + sales * 0.09;

        cout << "Salary is: $" << salary << endl;

        cout << "\nEnter sales in dollars (-1 to end): ";
        cin >> sales;
    }
	system("pause");
    return 0;
}