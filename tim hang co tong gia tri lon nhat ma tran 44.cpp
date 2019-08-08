#include<stdio.h>
#include<conio.h>
#include<math.h>
#define MAX 100
void nhapmang(int a[][MAX], int &m, int &n);
void xuatmang(int a[][MAX], int m, int n);
double tong(int a[][MAX], int i, int n);
int tonglonnhat(int a[][MAX], int m, int n);
int main()
{
	int a[MAX][MAX], m,n;
	nhapmang(a,m,n);
	printf("\nnoi dung cua ma tran\n");
	xuatmang(a,m,n);
	int kq=tonglonnhat(a,m,n);
	printf("\nhang lon nhat trong ma tran la: %d",kq);
}
void nhapmang(int a[4][4])
{
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
       {
     	printf("nhap a[%d][%d]:\n",i,j);
     	scanf("%d",&a[i][j]);
     	}
    }
	
	}
	while(n<=0)
	{
	for(i=0;i<m;i++)
	
	{  
		for( j=0;j<n;j++)
		{
			printf("\nso phan tu a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	}

void xuatmang(int a[][MAX], int m, int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
double tong(int a[][MAX], int i, int n)
{
	double s=0;
	for(int j=0;j<n;j++)
		s=s+a[i][j];
	return s;
}
int tonglonnhat(int a[][MAX], int m, int n)
{
	int i,d;
	double max=tong(a,0,n);
	for( i=0;i<m;i++)
	{
		double t=tong(a,i,n);
		if(max<t)
		{
			max=t;
			d=i;
		}
	}
	return d;
}
