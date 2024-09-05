/*15. Write a C program to determine eligibility for admission to a professional 
course based on the following criteria 
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks 
in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
Physics >=140 -------------------------------------- Input the marks obtained in 
Physics :65 Input the marks obtained in Chemistry :51 Input the marks 
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 
188 Total marks of Maths and Physics : 137 The candidate is not eligible. */
#include<stdio.h>
int main (){
	int math,chem,phy,total,mark;
	printf("Enter your maths sub no.:",math);
	scanf("%d",&math);
	
	printf("Enter your chem sub no. :",chem);
	scanf("%d",&chem);
	
	printf("Enter your phy sub no. :",phy);
	scanf("%d",&phy);
	
	total = math + chem + phy;
		printf("Total mark of math,phy and chemistry is : %d\n ",total);
		
		mark = math + phy;
		printf("Total mark of math and physics is :%d\n",mark);
		if (total >= 190 && mark >= 140){
			printf("You are eligible for addmission\n");
		} else {
			printf("your are not eligible for addmission");
		}
	return 0;
	

}
