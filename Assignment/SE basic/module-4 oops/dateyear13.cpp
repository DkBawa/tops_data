/*7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/
#include<iostream>
#include<string>
using namespace std;
class Date {
	int day,month,year;
	
	public:
		void setvalue(){
			cout<<"Enter day ,month and year :"<<endl;
			cin>>day >>month >>year ;
			} 
			
		bool isValidDate () {
				 // Check for valid month
        if (month < 1 || month > 12) {
            return false;
        }

        // Check for valid day
        if (day < 1 || day > 31) {
            return false;
		}
		return true;
	}
			   void dateformat() {
        if (isValidDate()) {
            cout << "You entered a valid date: " << day << "/" << month << "/" << year << endl;
        } else {
            cout << "You entered an invalid date!" << endl;
        }
}
};
int main () {
	Date obj;
	obj.setvalue();
	obj.dateformat();
	return 0;
}
