#include <stdio.h>
int main()
{
	char str[100];
	gets(str);
	printf("Length of a string is %d",strlen(str));
	return 0;
}
