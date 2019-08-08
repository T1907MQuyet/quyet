#include <stdio.h>
int main (){
 int ar[4][3], ra[3][4];
 	for(int i=0;i<4;i++)
	{
		for (int j=0;j<3;j++)
       {
     	printf("nhap ar[%d][%d]:\n",i,j);
     	scanf("%d",&ar[i][j]);
     	}
    } 
	  for(int i=1;i<3;i++)
	   {
      for (int j = 0;j < 4;j++) 
	  {
          ra[3][4]= ar[4][3]
      }
   }
 for (int i = 0; i <4; i++) 
   {
      
      for (int j = 0; j < 3; j++) 
	  {
         printf("%3d",ra[i][j]);
      }
   }
  

   return (0);
}

