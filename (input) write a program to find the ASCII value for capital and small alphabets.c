//title of program
//program to find the ASCII value for capital and small alphabets
//header file
#include<stdio.h>
//main function heading
int main ()
{
//character declaration
  char ch;
//input statement from user
  printf ("Enter the Character = ");
  scanf ("%c", &ch);
//output statement
  printf ("\nThe ASCII Value of %c = %d", ch, ch);
//return statement
  return 0;
}