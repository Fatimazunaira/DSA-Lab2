#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int size;
    cout << "Enter the length of the string: ";
    cin >> size;

    // Dynamic allocation (size + 1 for null terminator)
    char *str = new char[size + 1];

    cout << "Enter a string: ";
    cin >> str;  // user input string

    // Reverse string
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    cout << "Reversed string: " << str << endl;

    // Free memory
    delete[] str;

    return 0;
}
