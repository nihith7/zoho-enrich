#include<stdio.h>
int main()
{
	int n,i,temp=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		temp+=i;
		printf("%d\n",temp);
	}
	printf("\n");
	return 0;
}
