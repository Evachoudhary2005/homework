//program to print fibonacci series using recursion.
#include<stdio.h>
int fib(int n)
{
    if(n<=1)
    return n;
    else
    return fib(n-1)+fib(n-2);
}
void fib1(int n, int i)
{
    if(i<n)
    {
        printf("%d\n",fib(i));
        fib1(n,i+1);
    }
}
int main()
{
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci sequence:\n");
    fib1(n,0);
}


OUTPUT:
Enter the number of terms:9
Fibonacci sequence:
0
1
1
2
3
5
8
13
21
