#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	printf("enter string to reverse");
	gets(s1);
	printf("reverse is %s",strrev(s1));
	return 0;
}
