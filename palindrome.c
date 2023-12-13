#include<stdio.h>
#include<string.h>
//program to find if the string is a palindrome or not.
void printrev(char str[])
{
int len=strlen(str);
printf("Given String:");
for(int i=len-1;i>=0;i--)
{
printf("%c"),str[i]");
}
printf("\n");
}
int ispal(char str[])
{
int len=strlen(str);
for(int i=0;i<len/2;i++)
{
if(str[i]!=str[len-i-1])
{
return 0;
}
}
retuen 1;
}
int main()
{
char input[100];
printf("Enter the string:");
scanf("%s",&input);
printrev(input);
if(ispal(input))
{
printf("%s is a palindrome.",input);
}
else
{
printf("%s is not a palindrome.",input);
}
}
