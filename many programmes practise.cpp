/*#include<stdio.h>
int main()
{
	int a,b,c;
	a=5;b=7,c=a+b;
	printf("sum of a and b is %d",c);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	int sum;
	printf("sum of a and b is %d",sum);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int side;
	printf("enter side");
	scanf("%d",&side);
	printf("area of square is %d",side*side);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("enter a and b");
	scanf("%d%d",&a,&b);
	printf("sum of a and b is %d",sum=a+b);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a=(int)1.99999;
	printf("%d\n",a);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	printf("%d\n",!((5>2)||(6>9)));
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int a=8,b=5;
	printf("%d\n",a%=b);
	return 0;
}*/

//wrap to check if a no. is divisible by 2 or not.
/*#include<stdio.h>
int main()
{
	int a;
	printf("enter digit");
	scanf("%d",&a);
	printf("%d",!(a%2==0));
	return 0;
}*/

//are the following valid or not.
/*#include<stdio.h>
int main()
{
	printf("%d",8^7);
	return 0;
}*/

//
/*#include<stdio.h>
int main()
{
	char stars=;
	printf("%d\n",&stars);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int issunday=0;
	int issnowing=1;
	printf("%d\n",issunday && issnowing);
	return 0;
}*/

/*#include<stdio.h>
int main()
{
	int ismonday=0;
	int israining=1;
	printf("%d",ismonday || israining);
	return 0;
}*/

//if a no. is greater than 9 and less than 100.

/*#include<stdio.h>
int main()
{
	int a;
	printf("enter number");
	scanf("%d",&a);
	printf("%d\n",(a>9)&&(a<100));
	return 0;
	
	return 0;
}*/

//wacp to check given no. is even or odd.
/*#include<stdio.h>
int main()
{
	int a;
	//even=1
	//odd=0
	printf("enter digit");
	scanf("%d",&a);
	printf("%d",a%2==0);
	return 0;
}*/

//wacp to print the average of three numbers.
/*#include<stdio.h>
int main()
{
    int a,b,c,d;
	printf("enter digits");
	scanf("%d%d%d",&a,&b,&c);
	printf("the average of three digits is %d",c=(a+b+c)/3);
	return 0;
}*/

//WACP to check that a person is adult or not by his age.
/*#include<stdio.h>
int main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    
    if(age>=18)
    {
    	printf("adult\n");
    	printf("they can vote\n");
    	printf("they can drive\n");
	}
	
	else
	{
		printf("not adult\n");
	}
}*/

/*#include<stdio.h>
int main()
{
    int age;
    printf("enter age");
    scanf("%d",&age);
    
    if(age>=18)
    {
    	printf("adult\n");
    	printf("they can vote\n");
    	printf("they can drive\n");
	}
	
	else
	{
		printf("not adult\n");
	}
    
    printf("thanku for run my program");
}*/

//WACP to upper case age wala in else if condition.

/*#include<stdio.h>
int main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("adult\n");
	}
	
	else if(age>13 && age<18)
	{printf("teenager/n");
	}
	
	else
	{
		printf("child\n");
	}
}*/

//nested if question for a digit is -ve or +ve and if +ve then it even or odd.
/*#include<stdio.h>
int main()
{
	int number;
	printf("enter number");
	scanf("%d",&number);
	
	if(number>=0)
	{
		printf("positive\n");
		
		if(number%2==0)
		{
		printf("even number\n");
	}else{
		printf("odd number\n");
	}}
	else {
		printf("negative");
	}
	 
}*/

// age in ternery operator ? :

/*#include<stdio.h>
int main()
{
	int age;
	printf("enter age");
	scanf("%d",&age);
	
	age>=18? printf("adult\n") : printf("not adult");
}*/

//WACP TO CHECK DAY OF WEEK BY SWITCH CASE.
/*#include<stdio.h>
int main()
{
	int day;//1-mon,2-tue,3-wed,4-thrus,5-fri,6-sat,7-sun
	printf("enter day(1-7)");
	scanf("%d",&day);
	
	switch(day)
	{
		    case 1:printf("monday\n");
		    break;
			case 2:printf("tuesday\n");
		    break;
			case 3:printf("wednesday\n");
		    break;
			case 4:printf("thrusday\n");
		    break;
			case 5:printf("friday\n");
		    break;
			case 6:printf("saturday\n");
		    break;
			case 7:printf("sunday\n");
		    break;
		
		    default:printf("not a valid day!\n");
	}
}*/

// day in switch for char.
/*#include<stdio.h>
int main()
{
	char day;//m-mon,b-tue,c-wed,d-thrus,e-fri,f-sat,g-sun
	printf("enter day(a-g)");
	scanf("%s",&day);
	
	switch(day)
	{
		    case'a':printf("monday\n");
		    break;
			case'b':printf("tuesday\n");
		    break;
			case'c':printf("wednesday\n");
		    break;
			case'd':printf("thrusday\n");
		    break;
			case'e':printf("friday\n");
		    break;
			case'f':printf("saturday\n");
		    break;
			case'g':printf("sunday\n");
		    break;
		
		    default:printf("not a valid day!\n");
	}
}*/

/*WAP to check if a student passed or failed.
 marks>30 is PASS.
 marks<=30 is FAIL.
 nested  if applied.
*/
/*#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks(0-100):");
	scanf("%d",&marks);
	
	if(marks>=30 && marks<=100)
	{
		printf("PASSED\n");
	}
	
	else if(marks<30)
	{
		printf("FAILED");
	}
	
	else{
		printf("WRONG MARKS");
	}
}*/
/*WAP to check if a student passed or failed.
 marks>30 is PASS.
 marks<=30 is FAIL.
 by applied ternery .
*/
/*#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks");
	scanf("%d",&marks);
	
	marks>=30 && marks<=100? printf("PASSED\n") : printf("FAILED");
}*/

/*write a program to give grades to a student
marks<30 is C
30<=marks<70 is B
70<=marks<90 is A
90<=marks<=100 is A+*/

/*#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks(0-100)");
	scanf("%d",&marks);
	
	if(marks<30)
	{
	printf("GRADE-C");
	}
	
	else if(marks>=30 && marks<70)
   {
   	printf("GRADE-B");
   }
   
   else if (marks>=70 && marks<90)
  {
    printf("GRADE-A");
  }
   
   else
   printf("GRADE-A+");
   
   return 0;
}*/

//WACP to check that a given no. is magic no. or not.

/*#include<stdio.h>
int main()
{
	int a;
	printf("enter no.");
	scanf("%d",&a);
	
	if(a%9==1)
	printf("magic number");
	
	else
	printf("not");
	
	return 0;
}
*/

//WACP to check that a character enter by a user is upper case or not.
/*#include<stdio.h>
int main()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	
	if(ch>= 'A' && ch<= 'Z')
	{
		printf("UPPER CASE");
	}
	
	else if(ch>='a' && ch<='z')
	{
		printf("LOWER CASE");
	}
	
	else
	{
		printf("not a english letter");
	}
  return 0;
}*/

//WACP to check that a given no. is armstrong number or not.

/*#include<stdio.h>
int main()
{
	int n,n= number;
	printf("enter the number");
	scanf("%d",&number);
	if()
}
*/


// STARTING OF FOR LOOP//

//print hello world 5 times//
/*

//WACP to print numbers from 1 to 100//
/*#include<stdio.h>
int main()
{
	for(int i=40;i>=1;i= i-1)
	{
		printf("%d\n",i);
	}
	return 0;
}*/

//print the number from 0 to 10.
/*#include<stdio.h>
int main()
{
	for(int i=0;i<=10;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}*/


//i++ = use then increase//
//++i = increase then use//

//BY ++i
/*#include<stdio.h>
int main()
{
	int i=0;
	printf("%d\n",++i);
	return 0;
}
*/
// increament operator//
//++i(pre-increament)
//i++(post-increament)

//decreament operator//
//--i(pre-decreament)
//i--(post-decreament)

/*#include<stdio.h>
int main()
{
	int i=0;
	printf("%d\n",--i);
	return 0;
}*/

//LOOP COUNTER CAN BE FLOAT OR EVEN CHARACTER//

/*#include<stdio.h>
int main()
{
	for(float i=1.5;i<=5;i++){
	printf("%f\n",i);
    }
    return 0;
}*/

//LOOP COUNTER ON ASCII VALUE//

/*#include<stdio.h>
int main()
{
	for(char ch='S';ch<='Z';ch++)
	{
		printf("%c\n",ch);
	}
	return 0;
}*/

//STARTING OF WHILE LOOP//

//WACP OF WHILE LOOP TO PRINT 1 TO 5 DIGITS//

/*#include<stdio.h>
int main()
{
	int i=1;
	while(i<=5)
	{
		printf("A.K. JOSHI\n",i);
		i++;
	}
	return 0;
}*/

//WACP to print the numbers from 0 to n given by user//

/*BY WHILE LOOP*/
/*#include<stdio.h>
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    
    int i=1;
    while(i<=n)
    {
    printf("%d\n",i);
    i++;
	}
    return 0;
	}

*/
/*BY FOR LOOP*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	
	for(int i=0;i<=n;i++)
	{
		printf("%d\n",i);
	}
	return 0;
}*/

/*BY DO WHILE LOOP*/

/*#include<stdio.h>
int main()
{
	int i=1;
	
	do{
		printf("%d\n",i);
		i++;
	}
	
	while(i<=9);
	return 0;
}*/

//WACP to print sum of first n natural numbers in forward//

/*#include<stdio.h>
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	
	int i=0,sum=0;
	while(i<=n)
	{
		sum=sum+i;
		printf("Sum is=%d\n",sum);
		i++;
	}
	
	
	return 0;
}*/

//WACP to print sum of first n natural numbers in reverse//
/*
#include<stdio.h>
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	
	int i=5,sum=0;
	while(i>=n)
	{
		sum=sum+i;
		i--;
	}
	
	printf("sum is %d",sum);
	return 0;
}
*/
/*#include<stdio.h>
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	
	int sum=0;
	for(int i=1,j=n;i<=n && j>=1;i++,j--)
	{
		sum=sum+i;
		printf("%d",j);
	}
	printf("sum is %d",sum);
	return 0;
}*/

//PRINT THE TABLE OF A NUMBER GIVEN BY USER//

/*#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the digit");
	scanf("%d",&n);
	
	for(int i=1;i<=10;i++)
	{
	printf("%d\n",n*i);	
	}
	return 0;
}
*/

// BREAK USE IN LOOP//
/*#include<stdio.h>
#include<math.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		if(i==3)
		{
			break;
		}
		printf("%d\n",i);
	}
	printf("end");
	return 0;
}
*/

/*#include<stdio.h>
#include<math.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		if(i==3)
		{
			break;
		}
		printf("%d\n",i);
	}
	printf("end");
	return 0;
}*/
//WACP to keep takingnumbers as input from user until user enters an odd number//
/*#include<stdio.h>
int main()
{
	int n;
	do{
		scanf("%d",&n);
		printf("%d\n",n);
		
		if(n%2==1)
		break;
	}
	while(1);
	printf("thanku");
	return 0;
	
}*/

//KEEP TAKING NO. FROM USER UNTIL USER ENTERS A NUMBER WHICH IS MULTIPLE OF 7//
/*#include<stdio.h>
int main()
{
	do{
	int n;
	scanf("%d",&n);
	printf("enter number",n);
	
	if(n%7==0)
	{
		break;
	}
}

    while(1);
    printf("thank u");
    return 0;
	
}*/

/*#include<stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		if(i==3){
			continue;
		}
		printf("%d\n",i);
		}
		return 0;
}
*/

//WACP TO PRINT TABLE OF 7 BUT NOT PRINT 35 IN THAT TABLE//
/*#include<stdio.h>
int main()
{
	int n=7;
	printf("enter the digit\n",n);
	
	for(int i=1;i<=10;i++)
	{
		if(i==5)
		{
			continue;
		}
		printf("%d\n",n*i);
	}
	return 0;
}*/

// PRINT ALL NUMBERS FROM 1 TO 10 EXCEPT 6.//
/*#include<stdio.h>
int main()
{
	for(int i=1;i<=10;i++)
	{
		if(i==6)
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}*/

//PRINT ALL odd NUMBERS FROM 5 TO 50//
/*#include<stdio.h>
int main()
{
	for(int i=5;i<=50;i++)
	{
		if(i%2==1)
		{
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}*/

//PRINT THE FACTORIAL OF 'n'//
/*#include<stdio.h>
int main()
{
    int n;
	scanf("%d",&n);
	printf("enter the number");
	
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
		}	
		printf("%d\n",fact);
		 
		 return 0;
}*/

//WACP to print max. score a batsman can score in a match of 50 overs//
/*
#include<stdio.h>
int main()
{
	int runs,overs;
	printf("enter overs");
	scanf("%d",&overs);
	runs=33*(overs-1)+36;
	printf("%d",runs);
	return 0;
}
*/
//

#include<stdio.h>
int main()
{
	int runs,overs;
	printf("enter overs");
	scanf("%d",&overs);
	
}











