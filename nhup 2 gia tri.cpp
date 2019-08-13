#include <stdio.h>

int main (){
	int x;
	int y;
	int *p,*q ;
	
	p=&x;
	q=&y;
	
	printf ("nhap x :\n");
	scanf ("%d ",p);
	printf ("nhap y :\n");
	scanf ("%d",&q );
\
 	printf("x+y: %d ",*p+*q);
 	printf("hieu: %d ",*p-*q);
 	
 	return 0;
 	}
 	
