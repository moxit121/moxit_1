#include<stdio.h>

int add(int d,int g)
{
	printf("\n\t Inside UDF A = %d, B = %d",d,g);
	return d+g;
}
int main()
{
	int a,b,sum;
	
	printf("\n\t Take input from user nd pass value in UDF:");
	printf("\n\t Enter A = ");
	scanf("%d",&a);
	printf("\t Enter B = ");
	scanf("%d",&b);
	
	printf("\n\t --------------------------------------------");
	printf("\n\t Start Function");
	sum = add(a,b);
	printf("\n\t Addition = %d",sum);
	if(sum%2==0)
	{
		printf("\n\t It is Even.");
	}
	else{
		printf("\n\t It is Odd.");
	}
	printf("\n\t Stop Function");
	printf("\n\t--------------------------------------------");
	
}