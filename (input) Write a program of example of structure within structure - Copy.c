//title of program
//program of example of structure within structure
//header file
#include<stdio.h>
// structure declaration
struct employee{
//character array declaration as one of the member
char name[50];
//variable declaration
int id;
int age;
};
//structure declaration
struct organisation
{
//character array as one of the member
char name[50];
int id;
//creating the variable name of employee structure
struct employee emp;
};
//main function heading
int main()
{
//assigning the values to the structure member
struct organisation org1={"XYZ Ltd.",123,{"John Doe",101,30}};
printf("Organisation name:%s\n",org1.name);
printf("Organisation ID:%d\n",org1.id);
printf("Employee name:%s\n",org1.emp.name);
printf("Employee ID:%d\n",org1.emp.id);
printf("Employee age:%d\n",org1.emp.age);
return 0;
}