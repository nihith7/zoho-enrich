#include<stdio.h>
int main()
{
int a[10][10],i,j,n;
int c=1;
printf("entert the matrix dim");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(i%2==0)
{
a[i][j]=c;
c++;
}
else
{
a[i][n-(j+1)]=c;
c++;
}
}

}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("\t%d",a[i][j]);
}
printf("\n");
}
return 0;
}
