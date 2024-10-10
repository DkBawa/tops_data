#include<iostream>
#include<string>
using namespace std;

class publicc {
    public:
        int number;
        void num() {
            cout << "Enter number: ";
            cin >> number;
        }
};

class Student : public publicc {
    private:
        string name;

    public:
        void setName(string n) {
            name = n;
        }

        string getName() {
            return name;
        }

        void display() {
            cout << "Name: " << getName() << endl;
            cout << "Number: " << number << endl;
        }
};

int main() {
    Student obj;
    obj.setName("Dinesh"); // Public method, accessible from main
    obj.num();             // Method from parent class, accessible from main
    obj.display();         // Display the values

    return 0;
}

