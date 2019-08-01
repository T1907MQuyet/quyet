#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
int fibonacci (int n);
int main()
{
    int n;
    printf("Type a number: ");
    while ((scanf("%d", &n))!= EOF)
        printf("The result is: %d\n", fibonacci(n));
    return 1;
}
int fibonacci (int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n > 1)
        return (fibonacci(n - 1))+(fibonacci(n - 2));
}
