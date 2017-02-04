#include<stdio.h>
int main() 
{
	int n,i,a[20],var=0,x;
	printf("Enter the elements:");
	scanf("%d",&n);
	printf("\nEnter the list");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	printf("\nEnter Search Element");
	scanf("%d",&x);
for(i=0;i<n;i++)
{
if(a[i]>a[i+1])
{
var=a[i];
a[i]=a[i+1];
a[i+1]=var;
printf("%d",a[i]);
}
else
{
printf("%d",a[i]);
}
}
	for(i=0;i<n;i++)
	{
	    if(x==a[i])
	    {
	        printf("%d",i);
	    }
	}
	return 0;
}
