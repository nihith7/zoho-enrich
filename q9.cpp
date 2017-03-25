#include <stdio.h>
int main()
{
int n,i,a[10],first=0,second=0;;
printf("Enter no of elements");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(first<a[i])
{
second=first;
first=a[i];
}
else if(second<a[i])
{
second=a[i];
}
}
printf("%d",second);
return 0;
}
