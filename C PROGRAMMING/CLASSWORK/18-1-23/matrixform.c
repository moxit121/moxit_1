#include<stdio.h>

int main()
{
	int matrix1[3][3];
	int i,j;
	
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Enter Matrix \xB2\xB2\xB2\xB2\xB2\n");
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\tEnter element of Matrix1[%d][%d] = ",i,j);
			scanf("%d",&matrix1[i][j]);
		}
		printf("\n");
	}
	printf("\n\t\xB2\xB2\xB2\xB2\xB2 Display Matrix1 \xB2\xB2\xB2\xB2\xB2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",matrix1[i][j]);	
		}
		printf("\n");
	}
}