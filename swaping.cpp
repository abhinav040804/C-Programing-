#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a and b");
	scanf("%d %d ",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("value of a and b after swaping is %d and %d",a,b);
	return 0;
}

