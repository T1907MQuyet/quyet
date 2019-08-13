#include <stdio.h>

int main (){
	int n[10],i,sum;

    
    
    for (i=0 ;i<10;i++)
	{
    
    
    printf("nhap so nguyen i [%d]:",i);
    scanf("%d",&n[i]);
	
	 sum +=n[i];
    
	}
	
	printf("=>gia tri trung binh cua mang la : %d ",sum/10 );
	
	return 0 ;
	
	}
	
	
    
