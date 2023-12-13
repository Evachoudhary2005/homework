//program to perform addition, subtraction, multiplication and division.
#include<stdio.h>
void main()
{
float a,b,c;
printf("Enter two numbers:");
scanf("%f%f",&a,&b);
c=a+b;
printf("Sum=%.2f\n",c);
c=a-b;
printf("Difference=%.2f\n",c);
c=a*b;
printf("Product=%.2f\n",c);
c=a/b;
printf("Divide=%.2f\n",c);
}
