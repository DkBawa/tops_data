// 5. WAP to take two Array input from user and sort them in ascending or 
// descending order as per user’s choice 
#include<stdio.h>
int main()
{
	int n,i,temp,j;
	printf(" enter how many values u want");
	scanf("%d",&n);
	int arr[n];

	for(i=0;i<n;i++)
	{
		printf("enter value for %d index",i);
		scanf("%d",&arr[i]);
	}
	printf("\nbefore sorting array is\n");

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] =arr[j];
				arr[j] =temp;
			}
		}
	}
		printf("\n after sorting array is\n");
		
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}

    
