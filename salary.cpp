#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter number of employees: ";
    cin >> size;

    // Dynamic allocation
    int *salArray = new int[size];

    // Input salaries
    cout << "Enter salaries of employees:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Employee " << i + 1 << ": ";
        cin >> *(salArray + i);   // pointer access instead of array
    }

    // Display salaries
    cout << "\nEmployee Salaries:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Employee " << i + 1 << ": " << *(salArray + i) << endl;
    }

    // Calculate total and average
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += *(salArray + i);
    }

    double average = (size > 0) ? (double) total / size : 0;

    cout << "\nTotal Salary = " << total << endl;
    cout << "Average Salary = " << average << endl;

    // Free allocated memory
    delete[] salArray;

    return 0;
}
