#include <stdio.h>
#include <math.h>


int main(){
    int n;
    printf("\nNhap n =/n ");
    scanf("%d", &n);
    for (int i =1 ; i<=n ; ++i)
    {
    int count = 0;
    for(int j = 1; j <=i; j++){
        if(i % j == 0){
            count++;
            }
    if(count == 2){
        printf("\n%d la so nguyen to nho hon n ", i);
    
    }
    }
    return 0;
    }
    
    
