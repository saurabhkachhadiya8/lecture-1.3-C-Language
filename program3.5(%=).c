#include<stdio.h>

main()
{
	
	int a , b;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%D",&b);
	
	a %= b;
	printf("%d",a);
	
}
