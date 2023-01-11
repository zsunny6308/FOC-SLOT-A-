#include<stdio.h>
int main()
{
	int a;
	printf("Enter An Integer: ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d Is A Positive Number...",a);
	}
	else
	{
		printf("%d Is A Negative Number",a);
	}
}
