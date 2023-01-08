#include<stdio.h>
int main()
{
	int a,b;
	a=3;
	b=a;
	printf("b=%d",b);
	b=4;
	a=b;
	printf("a=%d",a);
	return 0;
}
