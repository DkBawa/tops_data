/* 9. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
*/
#include<iostream>
#include<string>
using namespace std;

class car {  //creating class
	private:
		string company;
	    int model;
		int year;
		// creating setter and getter function
		public:
			void setCompany(string com) {
			company = com;
		}
		string getCompany() {
			return company;
		}
		
		void setModel(int mod) {
			model = mod;
		} 
	     int getModel() {
			return model;
		}
		
		void setYear(int yer) {
			year = yer;
		} 
		int getYear() {
			return year;
		}
};


int main (){
	car obj;  // creating object
	string company;
	int model;
	int year;

	
		cout<<"Enter Company Name :"<<endl;  // input name from user 
	    cin>>company;
	    obj.setCompany(company); //calling setter and getter function 
	    cout <<"Company Name is : "<< obj.getCompany()<< endl;
	    
	    cout<<"Enter car model no :"<<endl;
	    cin>>model;
	    obj.setModel(model);
	    cout<<"Car model no is :"<<obj.getModel() <<endl;
	    
	    cout<<"Enter Year :"<<endl;
	    cin>>year;
	    obj.setYear(year);
	    cout<<"year of is :"<<obj.getYear() <<endl;
	    
	    
	    return 0;
	    
	    }
