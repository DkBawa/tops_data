// 17.WAP to show difference between Structure and Union. //
#include<stdio.h>
#include<string.h>
struct student {
	int s_roll_no;
	char s_name[100];
	};
	union student1 {
		int u_roll_no;
		char s_name[100];
	};
     int main ()
	  {
		struct student s1 ={101, "Rajput"	};
		printf("\n-----------------------------structure----\n");
		printf("%d %s \n", s1.s_roll_no,s1.s_name);
		printf("size of structure variable is :%d\n",sizeof(s1));
		printf("--------------------union-----------\n");
		union student1 u1;
		u1.u_roll_no =102;
		printf("%d \n",u1.u_roll_no);
		strcpy(u1.s_name,"Dinesh");
		printf("%s",u1.s_name);
		printf("\nsize of union variable is :%d ",sizeof(u1));
	 return 0;
	}

