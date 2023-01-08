#include<stdio.h>
int main()
{
	int units;float bill;
	printf("enter units");
	scanf("%d",&units);
	if(units<=50)
	bill=units*0.50;
	else if(units>50&&units<=150)
	bill=50*0.50+ (units-50)*0.75;
	else if(units>150&&units<=250)
	bill=50*0.50+0.75*100+(units-150)*1.20;
	else if(units>250)
	bill=50*0.50+0.75*100+100*1.20+(units-250)*1.50;
	bill=bill*1.2;
	printf("bill=%f",bill);
	return 0;
 }

// case to change lower case in upper case and upper case in lower case//   











