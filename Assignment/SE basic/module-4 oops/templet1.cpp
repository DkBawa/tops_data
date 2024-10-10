//2. Write a program of to sort the array using templates 
#include <iostream>
using namespace std;

// Function template to sort an array using Bubble Sort
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap if the element found is greater than the next element
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display the array
template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Integer array
    int intArr[] = {5, 2, 9, 1, 5, 6};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    
    cout << "Integer array before sorting: ";
    displayArray(intArr, intSize);
    
    // Sorting integer array
    sortArray(intArr, intSize);
    
    cout << "Integer array after sorting: ";
    displayArray(intArr, intSize);
    
    // Floating-point array
    double doubleArr[] = {4.5, 2.3, 8.1, 6.4, 3.9};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    
    cout << "\nDouble array before sorting: ";
    displayArray(doubleArr, doubleSize);
    
    // Sorting double array
    sortArray(doubleArr, doubleSize);
    
    cout << "Double array after sorting: ";
    displayArray(doubleArr, doubleSize);

    // Character array
    char charArr[] = {'g', 'e', 'a', 'c', 'b'};
    int charSize = sizeof(charArr) / sizeof(charArr[0]);
    
    cout << "\nCharacter array before sorting: ";
    displayArray(charArr, charSize);
    
    // Sorting character array
    sortArray(charArr, charSize);
    
    cout << "Character array after sorting: ";
    displayArray(charArr, charSize);

    return 0;
}

