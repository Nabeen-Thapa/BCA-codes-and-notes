#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
	for(k=0;k<=i-1;k++)
		{
			printf(" ");
		}
		for(j=1;j<=6-i;j++)
		{
		printf("%c",96+j);	
	}
	printf("\n");
	}

return 0;
}
