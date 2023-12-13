//to print different gate operators.
#include<stdio.h>
void main()
{
int a=49,b=35,c=55;
printf("AND gate=%d\n",(a&b));
printf("OR gate=%d\n",(a|b));
printf("XOR gate=%d\n",(a^b));
printf("Left Shift=%d\n",(c<<2));
printf("Right Shift=%d\n",(c>>2));
printf("XOR' gate=%d\n",(~a));
}
