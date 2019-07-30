#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n)
	int m = n ;
	
	int tg = 0;
	
	while (m){
     	tg = tg * 10 + m% 10;
     	m/= 10;
     	
	}
	if (tg ==n)	print ("%d la so thuan nghich ",n)

    else  printf("%d khong la so thuan nghich",n)
    retur 0;
	}
