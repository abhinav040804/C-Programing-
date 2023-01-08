/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=a*(a>b)+b*(b>a);
	printf("%d",c);
	return 0;
}*/

#include <stdio.h>

int main()
{
    int marks;
    printf("enter mareks(0-100)");
    scanf("%d",&marks);
    
    if(marks>0 && marks<30)
    {
        printf("grade C");
    }
    else if(marks>=30 && marks<70)
    {
        printf("grade B");
    }
    elseif(marks>=70 && marks<90)
   {
       printf("grade A");
   }
   else(marks>=90 && marks<=100)
   {
       printf("grade A+")
   }
    return 0;
}

