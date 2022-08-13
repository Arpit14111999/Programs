#include <stdio.h>
int fib(int);
int main()
{
    int i=1, n;
    printf("enter the term upto which  you want to print\n");
    scanf("%d", &n);
    while (i <= n)
    {
 printf("%d\t",fib(i));
 i++;
    }

    return 0;
}
int fib(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}
