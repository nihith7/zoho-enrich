#include <stdio.h>
int main
{
  int a[10],n,i,first=0,second=0;
  printf("entert the no of elements");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  if(a[i]%2==0)
  {
    if(a[i]>first)
    {
      first=a[i];
    }
  }
}
  for(i=0;i<n;i++)
  {
   if(a[i]!=first&&a[i]>second&&a[i]%2==0)
   {
     second=a[i];
   }
  }
  printf("%d",second);
	return 0;
}
