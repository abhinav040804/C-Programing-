#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", n);
    int sum = 0;
    for(int i=n; i<=n; i++){
        sum = sum + i;
    }
    printf("Sum is %d\n", sum);
    return 0;
    }