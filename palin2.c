#include<stdio.h>
#include<string.h>
int main()
{
int a[20],j=0,i=0;
int count=0,k=0,temp=0,flag=0;
char str1[50],str2[50];
gets(str2);
strcpy(str1,str2);
k=strlen(str2);
while(i<=k)
{
count=0;
j=0;
while(str2[j]!='\0')
{
	if(str1[i]==str2[j])
	{
		count++;
	}
	j++;
}
	if(count%2 != 0)
		temp++;
	if(temp>=2)
	{	
		flag=1;
		break;
	}
	i++;

}
if(flag)
{

}	printf("no");
else
{
	printf("");
}
return 0;
}
