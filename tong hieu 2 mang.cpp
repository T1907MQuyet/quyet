#include <stdio.h>
int main (){
	int a[4][3];
	int b[4][3];
	int c[4][3];
	int d[4][3];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("nhap a[%d][%d]=\n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("nhap b[%d][%d]=\n",i,j);
			scanf ("%d",&b[i][j]);
		
		}
	}
	for (int i=0;i<4;i++)
	{  int c;
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[4][3]+b[4][3];
			printf ("tong [%d][%d]=\n",c[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<4;i++)
	{  int d;
		for(int j=0;j<3;j++)
		{
			d[i][j]=a[4][3]-b[4][3];
			printf ("hieu[%d][%d]=\n",d[i][j]);
			
		}
		
	
		printf("\n");
	}	
			
				return 0;
}	
