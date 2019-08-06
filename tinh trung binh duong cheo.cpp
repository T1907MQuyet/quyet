#include<stdio.h>
int main (){
	int ar[4][4];
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
       {
     	printf("nhap ar[%d][%d]:\n",i,j);
     	scanf("%d",&ar[i][j]);
     	}
    }
    
    for (int i=0;i<4;i++)
    {   
    	for (int j=0;j<4;j++)
    	{
    	printf ("%5d",ar[i][j]);
    	}
    	}
    	

	int tb=0 ;
	{
	tb=(ar[0][0])+(ar[1][1])+(ar[2][2])+(ar[3][3])+(ar[4][4])/4;
    	
    	printf ("so trung binh duong  cheo la =\n",tb);
    }
    	
    	
	return 0;
	
       }
       
	
