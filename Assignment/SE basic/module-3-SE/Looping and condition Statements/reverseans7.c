//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 //
int main (){
	int n, rev=0,rem; 
	printf("Enter a Value :",n);
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
	    rev=rev * 10 + rem;
	    n=n/10;
		}printf("reverse no is :%d",rev);
	return 0;
}
