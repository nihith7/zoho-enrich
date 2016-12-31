#include <stdio.h>
int main()
{
int n,i,count=0;
int a[20];
    printf("enter number to find");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      }  
		for(i=0;i<n;i++)
		{     
		if(a[i] == n)
		{
		count++;
		}		
}
printf("'a =: %d \n",count);
return 0;
}
