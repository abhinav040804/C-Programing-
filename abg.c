#include <stdio.h>
int main()
{
	char s1[100];
	int i,alpha,beta,gamma;
	gets(s1);
	for(i=0;s1[i]!='/0';i++)
	{
		if((s1[i]>=0)&&(s1[i]<=9)){
		alpha++;
	}else if(s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z')
	{
		beta++;
	}else{
		gamma++;
	}
	}
	printf("Number of digits is %d",alpha);
		printf("Number of aplhabets is %d",beta);
			printf("Number of special char is %d",gamma);
			return 0;
}
