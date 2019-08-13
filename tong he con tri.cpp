#include <stdio.h>
#include <iostream>
 int main (){
 	int x=10;
 	int y=20;
 	int *p;
 	int *q;
 	int tong;
 	int hieu;
 	p=&x;
 	q=&y;
 	tong =*p+*q;
 	hieu =*p-*q;
 	printf("tong : %d ",tong);
 	printf("hieu: %d ",hieu);
 	
 	return 0;
 	}
 	
 	
