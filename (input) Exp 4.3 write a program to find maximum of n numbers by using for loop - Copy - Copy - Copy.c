//title of program
//program to find the maximum of n numbers
//header file
//function heading
int main()
{
//variable declaration
int limit,num,count,big;
//input statement from user
printf("Enter the limit\n");
scanf("%d",& limit);
//output statement
printf("Enter %d numbers\n",limit);
//for loop statement
for(count=1; count<=limit;count++)
{
//output statement
scanf("%d",&num);
//if condititon
if(num> big|| count==1)
{
//assignment of value
big=num;
}
}
//output statement
printf("Biggest number is%d\n",big);
//return statement
return 0;
}
