/*6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement memberfunctions to set and get the values of these variables.
*/
#include<iostream>
#include<string> 
using namespace std;
class person {
	string name;
	int age;
	string country;
	
	public :
	// setter for name
	void setName(string N) {
    name = N;
		} 
		// getter for name
	string getName(){
		return name;
	}
	// setter for age //
	void setAge(int a) {
		age = a;
	}
	// getter gor age//
	int getAge() {
		return age;
	}
	// setter for country // 
	void setCountry(string cntry){
		country = cntry;
	} 
	
	 string getCountry(){
	 	return country;
	 }
};

int main (){
	person detail;
	string name;
	int age;
	string country;
	  
	  // yha ham user se name input lekar usko set krenge or name ko  print  krenge
		cout<<"enter your name :"<<endl;
		cin>>name;
		detail.setName(name);
		cout <<"Name: "<< detail.getName()<< endl;
		
		//yha user ki age lekar usko print krenge
		cout<<"Enter your age :"<<endl;
		cin>>age;
		detail.setAge(age);
		cout<<"Age  is :"<<detail.getAge()<<endl;
		
		cout<<"Enter your Country name "<<endl;
		cin>>country;
		detail.setCountry(country);
		cout<<"your country name is :"<<detail.getCountry() <<endl;
}

