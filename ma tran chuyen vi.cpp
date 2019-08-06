#include <stdio.h>
int main (){
 int ar[4][3],temp;
 	for(int i=0;i<4;i++)
	{
		for (int j=0;j<3;j++)
       {
     	printf("nhap ar[%d][%d]:\n",i,j);
     	scanf("%d",&ar[i][j]);
     	}
    } 
	  for(int i=1;i<4;i++)
	   {
      for (int j = 0;j < 3;j++) 
	  {
         temp = ar[i][j];
         ar[i][j] = ar[j][i];
         ar[j][i] = temp;
      }
   }

   printf("\nMa tran chuyen vi cua ma tran da cho la:\n");
   for (int i = 0; i <4; i++) 
   {
      printf("\n");
      for (int j = 0; j < 3; j++) 
	  {
         printf("%d\t", ar[i][j]);
      }
   }

   return (0);
}

