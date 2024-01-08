//title of program
//program to add,sub,mult and divide
#include<stdio.h>
//main function heading
void main()
{
//variable declaration
float a,b,c;
//output statement
printf("enter two numbers");
//input statement
scanf("%f%f",&a,&b);
//input statement to add
c=a+b;
//output statement
printf("sum=%f\n",c);
//input statement to subtract
c=a-b;
//output statement
printf("difference=%f\n",c);
//input statement to multiply
c=a*b;
//output statement
printf("product=%f\n",c);
//input statement to divide
c=a/b;
//output statement
printf("divide=%.1f\n",c);
}