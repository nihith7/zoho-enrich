#include<stdio.h>
int main()
{
int n,i,rem,pal;
printf("enter the number");
scanf("%d",&n);
for(i=n;1;i++)
{
while(i>0)
{
rem=i%10;
pal=pal*10+r;
i=i/10;
}
if(i == pal)
{
printf("%d",i);
}
}
return 0;
}
