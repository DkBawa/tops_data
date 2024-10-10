/*12. Write a program to swap the two numbers using friend function 
without using third variable */
#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b;

public:
    // Constructor to initialize the numbers
    Numbers(int x, int y) : a(x), b(y) {}

    // Friend function declaration to swap values
    friend void swapNumbers(Numbers &num);

    // Function to display the numbers
    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

// Friend function definition to swap numbers without using third variable
void swapNumbers(Numbers &num) {
    num.a = num.a + num.b;
    num.b = num.a - num.b;
    num.a = num.a - num.b;
}

int main() {
    // Create an object of Numbers and initialize it
    Numbers num(10, 20);

    cout << "Before swapping: ";
    num.display();

    // Swap the numbers
    swapNumbers(num);

    cout << "After swapping: ";
    num.display();

    return 0;
}
