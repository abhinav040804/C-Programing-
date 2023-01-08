#include <stdio.h>
int main()
{
	float c,fh;
	printf("enter temperature in fahrenheit\n");
	scanf("%f",&fh);
	c= (fh-32)/1.8;
	printf("temperature in degree celcius is %f\n" , c);
	return 0 ;
}
