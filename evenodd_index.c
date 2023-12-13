//program to print even/odd index in an array.
#include<stdio.h>
void main()
{
int rollno[10],i,n,j;
printf("Enter the size of the array:");
scanf("%d",&n);
printf("Enter the values:");
for(i=0;i<n;i++)
{
scanf("%d",&rollno);
}
for(j=1;j<=n;j+=2)
{
printf("The even  index values are:%d\n",rollno);
}
}

OUTPUT:-
Enter the size of the array: 6
Enter the values: 45
55
59
65
35
26
The even index values are:55
The even index values are:65
The even index values are:26
