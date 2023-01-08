#include <stdio.h>
int main()
{
	float fh,c;
	printf("Enter temperature in celcius\n");
	scanf("%f" , &c);
	fh= c*(1.8)+32;
	printf("Temperature in fahrenheit %f\n" , fh);
	return 0;
}
