#include <stdio.h>
#include <math.h>
bool kiem_tra_tra_so_nguyen_to(int n){
     if(n<2) return false ;
     if (n==2 )return true;
     for (int i=2; i<=2 ;i++)
     {
     if(n%i==0){
      return false;
      }
      }
      return true;
    }
    
    
 
int main(){
    int n;
    printf("\nNhap n = ");
    scanf("%d", &n);
    for (int i=0;i<n;i++)
    {
    
    if(kiem_tra_so_nguyen_to(n)){
        printf("%d la so nguyen to\n", i);
  }
    }
     if(kiem_tra_so_nguyen_to(n)){
      printf("%d la so nguyen to\n", n);
      }else{
       printf("%d khong phai la so nguyen to\n", n);
      
     
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d la so nguyen to", n);
    }else{
        printf("\n%d khong phai so nguyen to", n);
    }
}
