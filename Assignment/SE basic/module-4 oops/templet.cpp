// 1. Write a program of to swap the two values using template 
#include <iostream>
using namespace std;

// Function template to swap two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;  // Temporary variable to hold one value
    a = b;
    b = temp;
}

int main() {
    // Swapping integers
    int x = 10, y = 20;
    cout << "Before swapping (int): x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping (int): x = " << x << ", y = " << y << endl;

    // Swapping floating-point numbers
    double p = 1.5, q = 2.5;
    cout << "Before swapping (double): p = " << p << ", q = " << q << endl;
    swapValues(p, q);
    cout << "After swapping (double): p = " << p << ", q = " << q << endl;

    // Swapping characters
    char c1 = 'A', c2 = 'B';
    cout << "Before swapping (char): c1 = " << c1 << ", c2 = " << c2 << endl;
    swapValues(c1, c2);
    cout << "After swapping (char): c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}

