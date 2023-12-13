//program to print a pattern.
#include<stdio.h>
void main()
{
int i,j;
for(i=0;i<=5;i++)
{
for(j=0;j<=i;j++)
{
printf("%d",i);
}
printf("\n");
}


OUTPUT:-
0
01
012
0123
01234
012345
