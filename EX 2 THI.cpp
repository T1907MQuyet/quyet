#include <stdio.h>
#include <math.h>

int main (){
    int a[10];
    for (int i=1;i<10;i++)
    { 
    printf("enter telement [%d]:",i);
    scanf("%d",&a[i]);
    }
    for (int i=10;i>0;i--)
    {
    printf ("%5d",a[i]);
    }
    return 0;
    }

