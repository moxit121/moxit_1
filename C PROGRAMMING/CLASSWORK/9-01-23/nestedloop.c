#include<stdio.h>

/*
	for(initialization;condition;updation)
	{
		for(initialization;condition;updation)
		{
		
		}	
	}

*/


void main()
{
	int i,j;
	
	for(i=2;i<=7;i++)
	{
		printf("Table of %d\n",i);
		printf("-----------\n");
		for(j=1;j<=10;j++)
		{
			printf("%d X %d = %d\n",i,j,(i*j));
		}
		printf("\v");	
	}	
	
}







