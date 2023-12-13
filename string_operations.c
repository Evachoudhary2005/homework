//program to demonstrate the use of various string operations.
#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20],str3[20];
int res;
printf("Enter the string 1:\n");
scanf("%s",&str1);
printf("Enter the string 2:\n");
scanf("%s",&str2);
printf("Concatentation string is:%s\n",strcat(str1,str2));
res=strcmp(str1,str2);
printf("Compare string result is:%d\n",res);
strcpy(str3,str1);
printf("First string is:%s\n",str1);
printf("Third string is:%s\n",str3);
printf("\n Third string lower case is:%s",strlwr(str3);
printf("\n Third string upper case is:%s",strupr(str2));
return 0;
}
