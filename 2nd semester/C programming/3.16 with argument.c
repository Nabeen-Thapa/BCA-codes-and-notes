//with argument but no return
#include<stdio.h>
void sum(int,int);
int main()
{
	int a,b;
	printf("enter any two numbers: ");
	scanf("%d %d",&a,&b);
	sum(a,b);
	return 0;
}
void sum(int a, int b)
{
	int s;
	s=a+b;
	printf("the sum is %d",s);
	
}
