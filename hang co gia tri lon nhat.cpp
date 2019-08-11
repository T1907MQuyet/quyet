#include<stdio.h>
int tim_hang_co_gia_tri_lon_nhat(int a[][4],int n){
	int max;
	int vi_tri=0;
	for(int i=0;i<n;i++)
	{
		int tong_hang=0;
		for (int j=0;j<4;j++)
		{
			tong_hang+=a[i][j];
			
			if(i==0){
				max=tong_hang;
				}
		    if(max<tong_hang){
		    	max=tong_hang;
		    	vi_tri=i;
		
		}
		}
		
		return vi_tri;
		}
		
		
