/*8. Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading */
#include<iostream>
using namespace std;

class Cal{
    public:
        // Function to take input for numbers
        void Number() {
            int num1, num2;
            cout << "Enter num1: "<<endl;
            cin >> num1;
            cout << "Enter num2: "<<endl;
            cin >> num2;
           
        }

        // Function to perform operations (Addition, Subtraction, etc.)
        void art (int num1, int num2) {
            cout << "Addition: " << add(num1, num2) << endl;
            cout << "Subtraction: " << subtract(num1, num2) << endl;
            cout << "Multiplication: " << multiply(num1, num2) << endl;
            cout << "Division: " << divide(num1, num2) << endl;
        }

        // Function overloading for mathematical operations
        int add(int a, int b) {
            return a + b;
        }

        int subtract(int a, int b) {
            return a - b;
        }

        int multiply(int a, int b) {
            return a * b;
        }

        double divide(int a, int b) {
            if (b == 0) {
                cout << "Error: Division by zero is not allowed!" << endl;
                return 0;
            }
            return static_cast<double>(a) / b;  // Cast to double for precise division
        }
};

int main() {
    Cal obj;
    obj.Number();
	obj.art(20,10);  // Take input and perform operations
    return 0;
}

