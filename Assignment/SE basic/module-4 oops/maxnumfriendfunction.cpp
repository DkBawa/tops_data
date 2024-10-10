/* 13. Write a program to find the max number from given two numbers 
using friend function */
#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b;

public:
    // Constructor to initialize the numbers
    Numbers(int x, int y) : a(x), b(y) {}

    // Friend function declaration to find the maximum number
    friend int findMax(Numbers num);

    // Function to display the numbers (optional)
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

// Friend function definition to find the maximum of two numbers
int findMax(Numbers num) {
    if (num.a > num.b)
        return num.a;
    else
        return num.b;
}

int main() {
    // Creating an object of Numbers class and initializing values
    Numbers num(25, 42);

    cout << "The given numbers are: ";
    num.display();

    // Finding and displaying the maximum number
    cout << "The maximum number is: " << findMax(num) << endl;

    return 0;
}

