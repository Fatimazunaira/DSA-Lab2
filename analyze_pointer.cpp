#include <iostream>
using namespace std;

// Function to analyze pointer
void analyze_pointer(int *ptr) {
    cout << "Memory Location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
    // Stack allocation with user input
    int iValue;
    cout << "Enter a value for stack variable: ";
    cin >> iValue;
    cout << "\nAnalyzing stack variable:" << endl;
    analyze_pointer(&iValue);

    cout << endl;

    // Heap allocation with user input
    int *hValue = new int;
    cout << "Enter a value for heap variable: ";
    cin >> *hValue;
    cout << "\nAnalyzing heap variable:" << endl;
    analyze_pointer(hValue);

    // Free heap memory
    delete hValue;

    return 0;
}
