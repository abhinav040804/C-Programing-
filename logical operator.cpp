#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks(0-100)");
	scanf("%d",&marks);
	
	30<=marks && marks<=100? printf("PASSED") : printf("FAILED");
	return 0; 
}
