//program for deletion an element from the specified location from an array.
#include<stdio.h>
void main()
{
int arr[30],i,loc,num;
printf("Enter the size of an array:");
scanf("%d",&num);
printf("Enter the elemnts %d:",num);
for(i=0;i<num;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the location to delete the value:");
scanf("%d",&loc);
while(loc<num)
{
arr[loc-1]=arr[loc];
loc++;
}
num--;
for(i=0;i<num;i++)
printf("Array after deletion:%d\n",arr[i]);
}

OUTPUT:-
Enter the size of an array:6
Enter the elements: 3
2
5
6
9
8
Enter the location to delete the value:4
Array after deletion:3
2
5
9
8
