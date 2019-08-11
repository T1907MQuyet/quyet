#include<stdio.h>
#include<conio.h>

int main(){
char s1[100], s2[100];

printf("Nhap chuoi thu nhat : ");
gets(s1);
printf("Nhap chuoi thu hai : ");
gets(s2);

int i = 0, j = 0;
int flag = 0;

while (s2[i] != 0)
{
if (s1[i] == s2[j])
{
j++;
if (s2[j] == 0)
{
flag = 1;
break;
}
}
else
j = 0;

i++;
}

if (flag)
printf("s1 chua s2\n");
else
printf("s1 khong chua s2\n");

getch( ) ;
}
