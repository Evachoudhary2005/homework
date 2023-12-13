//program to caculate the factorial using recursion.
#include<stdio.h>
int fact(int);
void main()
{
    int a,fact1;
    printf("Enter the number to calculate factorial:");
    scanf("%d",&a);
    fact(a);
    fact1=fact(a);
    printf("Factorial of %d is:%d",a,fact1);
}
int fact(int x)
{
    if(x<1)
    return 1;
    else
    return x*fact(x-1);
}


OUTPUT:
Enter the number to calculate factorial:6
Factorial of 6 is:720
