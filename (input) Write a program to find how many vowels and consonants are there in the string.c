//title of program
//program to find out how many vowels and consonants are there in the string
//header file
#include<stdio.h>
//header file for including string functions
#include<string.h>
//main function heading
void main()
{
//character(array) dclaration
char a[50];
//input statement form user
printf("Enter the string:");
//statement for getting string from the user
scanf("%[^\n]s",a);
//assignment of value for getting length of the string
int l=strlen(a);
//assignment of values for vowel and consonant calculation
int vow=0,con=0;
//for loop statement
for(int i=0;i<l;i++)
{
//if else statement for calculating  the no. of vowels and consonants
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
//increrment statement for vowel
vow++;
else
//increrment statement for consonant
con++;
}
//output statements for printing the no. of vowels and consonants in the string
printf("The no. of vowels are :%d\n",vow);
printf("The no. of consonats are :%d\n",con);
}

