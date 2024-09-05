//array ascending and dicanding//
#include<stdio.h>
main () {
	int i,n,j,temp;
	printf("Enter Value you want : ");
	scanf("%d",&n);
	int arr[n];
	
	for (i=0;i<n;i++) 
	{
		printf("Enter value for %d index\n :",i);
		scanf("%d",&arr[i]);
}
	printf("\nThis is array before sorting :\n");

	for (i=0;i<n;i++) 
	{
	printf("%d\t",arr[i]);
	
     for (i=0;i<n;i++) 
	{
    	for (j=i+1; j<n;j++) 
		{
    		if (arr[i] > arr[j]) 
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
    			
			}
		}
	}
	printf("\nafter sorting array is\n");
{
	for(i=0;i<n;i++)
	
		printf("%d\t",arr[i]);
	}
	return 0;

}
}


