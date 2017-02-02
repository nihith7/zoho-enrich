#include<stdio.h>
int main() 
{
   int a[20],x,n,i;
   printf("\nEnter no of elements");
   scanf("%d", &n);
   printf("\nEnter the values");
   for (i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
   }
   printf("\nEnter the elements to be finded");
   scanf("%d", &x);
   i = 0;
   while (i < n && x != a[i]) 
   {
      i++;
   }
   if (i < n)
    {
      printf("Number index = %d",i);
   } 
   else
    {
      printf("Number not found");
   }
   return (0);
}


