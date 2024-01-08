//title of program
//program for declaring the structure by displaying the total marks of subjects and average calculation
//header file
#include<stdio.h>
//main function heading
void main()
{
//structure declaration (keyword used here--->'struct'and structure name here;--->'student')
struct student
{
//variable declaration
int m1,m2,m3;
//variable declaration for total calculation
int tot;
//variable declaration for average calculation
float avg;
//structure defintion ends here
};
//stucture variable declaration
struct student s1;
//variable declaration(simple one--->optional)
int i;
//input statememt from user with using dot operator
printf("Enter the student marks:");
scanf("%d%d%d",&s1.m1,&s1.m2,&s1.m3);
// statememt for accessing the values for calculationg total
s1.tot=s1.m1+s1.m2+s1.m3;
// (getting float no.)statement for getting avg value
s1.avg=s1.tot/3;
//output statememt
printf("Student marklist:-");
//input statements for giving the marks of 3 subjects
printf("Subject 1:%d",s1.m1);
printf("Subject 2:%d",s1.m2);
printf("Subject 3:%d",s1.m3);
//output statements for printing the total marks and average of the marks
printf("Total:%d",s1.tot);
printf("Average:%f",s1.avg);
}