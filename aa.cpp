#inclde<stdio.h>

int tim_max(int a ,int n){
	int max =a[0];
	for (int i=0;i<n;i++)
	{
		if (max<a[i]){
			max=a[i];
			}
			}
			return max;
			}
int main(){
	int x[5]={4,22,8,1,3}
