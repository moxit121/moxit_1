#include<stdio.h>

void main()
{
	int age;
	
	printf("\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
	printf("\n\t Enter Your Age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n\t You Are Eligible for Voting.");
	}
	else
	{
		printf("\n\t You Are Not Eligible for Voting.");	
	}
}