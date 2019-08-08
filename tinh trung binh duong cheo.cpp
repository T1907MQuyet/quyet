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
    int total=0 ;
    for (int i=0;i<4;i++)
    {   
    	for (int j=0;j<4;j++)
    	{
    	if (i==j){
    	 total+=[i][j];
    	}
    	}
    	}
    	
    	
    	printf ("trung binh=\n",(float)total/4);
    }
    	
    	
	return 0;
	
       }
       ]
       
	
