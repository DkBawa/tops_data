#include<iostrem>
using namespace std;
raw (int a[]) 
{
	int i ;
	for(i=0;i<4;i++) {
		cout<< "Numbers are : "<<a[i]<<endl;
	} 
} 
int a[5];
int i; 
for(i=0;i<4;i++) {
	cout<<"Enter Number : ";
	cin>>a[i];
} 
raw(a);
