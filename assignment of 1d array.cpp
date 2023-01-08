// wap a program to input an array of n number of elements and display it
//#include<stdio.h>
//int main(){
//	int n;printf("enter number of elements in an array:");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++)
//	printf("elements of an array are:%d\n",a[i]);
//}
// wap to input an array of n number of elements and print it in reverse order
//# include<stdio.h>
//int main(){
//	int n;printf("enter the number of elements in an array:");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	printf("original array:");
//	for(int i=0;i<n;i++)
//	printf("%d\n",a[i]);
//	printf("reversed array");
//	for(int i=n-1;i>=0;i--)
//	printf("%d\n",a[i]);
//}
// wap to input an array of n number of elements and find the sum and average of elements of array
//# include<stdio.h>
//int main(){
//	int n;printf("enter the elements in an array:");scanf("%d",&n);int a[n];int sum=0;float avg=0;
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<n;i++){
//	sum=sum+a[i];
//	avg=sum/n;}
//	printf("sum=%d\navg=%.2f",sum,avg);
//
//}
// wap to input an array of n number of elements and count total number of positives and negatives and zeroes in an array
//#include<stdio.h>
//int main(){
//	int t,p=0,n=0,zero=0;printf("enter number of elements in an array:");scanf("%d",&t);int a[t];
//	for(int i=0;i<t;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<t;i++){
//		if(a[i]>0)
//		p=p+1;
//		else if(a[i]<0)
//		n=n+1;
//		else
//		zero=zero+1;}
//		
//	
//	printf("positive=%d,negative=%d,zero=%d",p,n,zero);
//}
// wap to input an array and print two different arrays one of even numbers and other of odd numbers
//# include<stdio.h>
//int main(){
//	int n,c1=0,c2=0;printf("enter the elements in an array:");scanf("%d",&n);int a[n],a1[n],a2[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<n;i++){
//		if(a[i]%2==0)
//		a1[c1++]=a[i];
//		else
//		a2[c2++]=a[i];
//	}
//	printf("original array:");
//	for(int i=0;i<n;i++)
//	printf("%d ",a[i]);printf("\narray of even number:");
//	for(int i=0;i<c1;i++)
//	printf("%d ",a1[i]);printf("\narray of odd numbers:");
//	for(int i=0;i<c2;i++)
//	printf("%d ",a2[i]);
//	}
//wap to input an array of n number of elements and find their standard deviation
//# include<stdio.h>
//# include<math.h>
//int main(){
//	int n,sum =0,sum1=0,mean;int var,sd;printf("enter the elements in an array:");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<n;i++)
//	sum =sum+a[i];
//	mean=sum/n;
//	for(int i=0;i<n;i++){
//		sum1=sum1+pow((a[i]-mean),2);
//		}
//		var=sum1/n;
//		sd=sqrt(var);
//		printf("%d",sd);
//	}
// WAP to read the marks of 500 students of a course in computer programming and print
//the frequency of each score above 60.Do it using most efficient method you could
//taking minimum memory and minimum time
//# include<stdio.h>
//int main(){
//	int n,c,k=0;printf("enter the number of students:");scanf("%d",&n);int a[n];int f[n];
//	for(int i=0;i<n;i++){
//	scanf("%d",&a[i]);f[i]=0;}
//	for(int i=0;i<n;i++){
//		c=a[i];
//		if(f[i]==0){
//			if(c>60){
//		for(int j=i;j<n;j++){
//				if(a[j]==c){
//				k++;f[j]=-1;
//			}}}
//		printf("%d-%d\n",c,k);}k=0;
//	}}
//wap to input an array and find the largest in that array
//#include<stdio.h>
//int main(){
//	int n;printf("enter the elements in an array:");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<n-1;i++){
//		for(int j=0;j<n-1-i;j++){
//			if(a[j]>a[j+1]){
//				int temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//		}
//	}printf("%d",a[n-1]);
//}
// wap to enter an array and find the smallest in that array
//# include<stdio.h>
//int main(){
//	int n;printf("enter the elements in an array");scanf("%d",&n);int a[n];
//	for(int i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(int i=0;i<n-1;i++){
//		for(int j=0;j<n-1-i;j++){
//			if(a[j]>a[j+1]){
//				int temp=a[j];
//				a[j]=a[j+1];a[j+1]=a[j];
//			}
//		}
//	}printf("smalest number is %d",a[0]);
//}
//wap to input an array and swap the largest and smallest in that array print that updated array
#include<stdio.h>
int main(){
	int n,sml=0,lar=0,spos,lpos;printf("enter the elemets in an array");scanf("%d",&n);int a[n],b[n];
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	a[i]=b[i];
	sml=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<sml){sml=a[i];
		spos=i;		}
		if(lar<a[i]){
			lar=a[i];lpos=i;
		}
	}
}int temp=a[spos];
a[spos]=a[lpos];
a[lpos]=temp;
printf("original array\n");
for(int i=0;i<n;i++)
printf("%d\n",&b[i]);
printf("array after interchanging the smallest and largest element\n");
for(int i=0;i<n;i++)
printf("%d\n",a[i]);}
