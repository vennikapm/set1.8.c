#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,i,sum=0;
scanf("%d",&n);
while(n>0)
{
scanf("%d",&num);
for(i=num;i>0;i--)
{
sum=sum+i;
}
printf("%d",sum);
n--;
}
getch();
}
