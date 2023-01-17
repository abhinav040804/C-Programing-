#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	char s1[100],s2[100];
	gets(s1);
	gets(s2);
	value= strcmp(s1,s2);
	if(value==0)
	{
	printf("same");
	}else{
		printf("not");
	}

	return 0;
}
