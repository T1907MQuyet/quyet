#include<iostream>
void nhap(int a[], int n)
 {
    for (int i = 0; i < n; i++) 
	{
        printf( "Nhap vao phan tu a[%d]:\n",i);
        scanf("%d",&a[i]);
    }
    }
    
int max(int a[], int n){
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i]);
            max = a[i];
    return max;
    }
  }


int main(){
    int a[1000];
    int n;
    printf("Nhap n:\n ",n);
    printf("max=\n",a[n]);
    return 0;
}

