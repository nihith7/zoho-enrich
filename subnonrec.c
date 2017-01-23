include <stdio.h>
int main()
 {
int i,j,temp,flag,s,n,a[20];
scanf("%d",&temp);
printf("Enter the elements");
for(i=0;i<temp;i++)
 {
	scanf("%d",&a[i]);
}
 s=0;
 flag=1;
for(i=0;i<temp;i++)
{
 	printf("%d",a[i]);
 }
 for(n=0;n!=temp;n++)
 {
for( ;flag!=temp;flag++)
{
for(i=flag;i<temp;i++)
{
for(j=s;j<flag;j++)
{
	printf("%d",a[j]);
}	
printf("%d",a[i]);
}	
}
	  s++;
    index=s+1;			
 } 
 return 0;
}

