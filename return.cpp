#include <stdio.h>
int kiem_tra_so_le(int x){
	if(x%2!=0){
		return true;
		} 
		return false ;
		} 
int main (){
    int n;
    printf ("nhap n =\n");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
    if (kiem_tra_so_le(i)){
    printf ("so le :%\n",i);
    }
    }
    return 0;
    }
    
