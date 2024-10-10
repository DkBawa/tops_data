/*9. Write a Program of Two 1D Matrix Addition using Operator Overloading */
#include <iostream>
using namespace std;

class Matrix {
    int size;
    int *arr;

public:
    // Constructor to initialize matrix
    Matrix(int s) : size(s) {
        arr = new int[size];
    }

    // Destructor to free memory
    ~Matrix() {
        delete[] arr;
    }

    // Function to input matrix elements
    void input() {
        cout << "Enter elements of the matrix: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    // Operator overloading for matrix addition
    Matrix operator+(const Matrix& m) {
        Matrix temp(size);
        for (int i = 0; i < size; ++i) {
            temp.arr[i] = this->arr[i] + m.arr[i];
        }
        return temp;
    }

    // Function to display matrix elements
    void display() const {
        cout << "Matrix: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;

    // Input the size of the matrices
    cout << "Enter the size of the matrices: ";
    cin >> size;

    // Creating two matrices of the same size
    Matrix m1(size), m2(size);

    // Input elements for both matrices
    m1.input();
    m2.input();

    // Adding the two matrices
    Matrix result = m1 + m2;

    // Displaying the result
    result.display();

    return 0;
}

