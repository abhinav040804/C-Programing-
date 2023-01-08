/*
#include<stdio.h>
int main()
{
	int marks[3];
	
	printf("enter phy: ");
	scanf("%d",&marks[0]);
	
	printf("enter chem: ");
	scanf("%d",&marks[1]);
	
	printf("enter math: ");
	scanf("%d",&marks[2]);
	
	printf("phy=%d,chem=%d,math=%d",marks[0],marks[1],marks[2]);
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	float price[3];
	printf("enter price: ");
	scanf("%f",&price[0]);
	scanf("%f",&price[1]);
	scanf("%f",&price[2]);
	
	printf("price of 1st item :%f",price[0]+0.18*price[0]);
	printf("price of 2ndt item %f:",price[1]+0.18*price[1]);
	printf("price of 3rd item :%f",price[2]+0.18*price[2]);
	
	return 0;
}
*/
//INITIALISATION OF ARRAY//

/*
#include<stdio.h>
int main()
{
	float price[]={100,200,300};

	printf("price of 1st item :%f",price[0]+0.18*price[0]);
	printf("price of 2ndt item %f:",price[1]+0.18*price[1]);
	printf("price of 3rd item :%f",price[2]+0.18*price[2]);
	
	return 0;
}
*/
/*
#include<stdio.h>
int main()
{
	int a[5]={1,7,5,8,4};
    
    printf("%d\n",a[0]);
    printf("%d\n",a[1]);
    printf("%d\n",a[3]);
    
    return 0;
}*/

//WACP TO SCAN ARRAY FROM USER//
/*
#include<stdio.h>
int main()
{
		int a[5];
	for(int i=0;i<5;i++)
	{
		printf("enter number\n");
	scanf("%d",&a[i]);
}
	return 0;
}*/

//C PROGRAM TO FIND SUM OF ARRAY ELEMENTS//
/*
#include<stdio.h>
int main()
{
	int a[5],sum=0;
	for(int i=0;i<5;i++)
	{
		printf("enter number\n");
	scanf("%d",&a[i]);
}
    for(int i=0;i<5;i++)
    {
    	sum=sum+a[i];
	}
	printf("sum of array no.=%d",sum);
	return 0;
}
*/
//WACP TO SCAN ARRAY FROM USER//
/*
#include<stdio.h>
int main()
{
		int a[5];
	for(int i=0;i<5;i++)
	{
	scanf("%d",&a[i]);
}
    for(int i=0;i<5;i++)
    {
    	printf("%d\n",a[i]);
	}
	return 0;
}
*/
/*  
//WACP TO FIND SUM OF ODD ELEMENTS IN ARRAY//
#include<stdio.h>
int main()
{
    int a[5],sum=0;
	for(int i=0;i<5;i++)
	{   
	printf("enter number\n");
		scanf("%d",&a[i]);
		}			
		for(int i=0;i<5;i++)
		{
			if(a[i]%2!=0)
			sum=sum+a[i];
		}
		printf("sum of array is %d",sum);
		return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int n;
	printf("no of elements:");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(int i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
		
{	   int c=0;
		 for(int i=0;i<n;i++)
	    {
		if(a[i]%2==0)
	    
	      c=c+a[i];
	  }
	      printf("sum of even elements:%d",c);
}
	{       int b=0;
			for(int i=0;i<n;i++)
		{
		 if(a[i]%2==1)
			b=b+a[i];
			}
			printf("sum of odd elements:%d",b);
	}
	return 0;
}
*/
/*
#include <stdio.h>
int main()
{
 int values[5];
  printf("Enter 5 integers: ");

  // taking input and storing it in an array
 for(int i = 0; i < 5; i++) 
 {
     scanf("%d", &values[i]);
  } 
  printf("Displaying integers: "); 
  
  // printing elements of an array
  for(int i = 0; i < 5; i++)
   {
     printf("%d\n", values[i]);
  }
  return 0;
}
*/

//WACP TO PRINT ARRAY ELEMENTS IN REVERSE ORDER
/*
#include<stdio.h>
int main()
{
	int n;
	printf("enter no. of array");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("orginal array\n");
	
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("reverse array");
	for(int i=n;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

*/
/*
 WAP to input an array of N number of elements and find the sum and average of all the elements 
 in that array
*/
/*
#include<stdio.h>
int main()
{
	int n;
	float sum=0;
	float avg;
	printf("enter no. of array");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of array is %0.2f\n",sum);
	
	for(int i=0;i<n;i++)
	{
		avg=sum/n;
	}
	printf("average of array is %0.2f",avg);
	return 0;
}
*/

/* WAP to input an array of Nnumber of elements and count totalnumber of positives, negatives
and zero elements in that array and display those counts.*/
/*
#include<stdio.h>
int main()
{
	int n,count1=0,count2=0,count3=0;
	printf("enter number");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
}
    printf("original array\n");
    
    for(int i=0;i<n;i++)
    {
    	printf("%d\n",a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		count1=count1+1;
		else if(a[i]<0)
		count2=count2+1;
		else
		count3=count3+1;
	}
	printf("%d no. is positive\n",count1);
	printf("%d no. is negative\n",count2);
	printf("%d no. is zero",count3);	
	return 0;
}
*/

/*WAP to input an array of Nnumber of elements and store a lleven numbers in 1 array 
and a ll odd numbers in another array.Print both the even and odd array separately.*/

//WACP TO PRINT THE ELEMENTS PRESNET AT GIVEN POSITION IN A GIVEN ARRAY//
/*
#include<stdio.h>
int main()
{
	int n,p;
	printf("enter no.");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
		scanf("%d",&p);
    
		 printf("%d",a[p-1]);
      
   return 0;
}
*/




