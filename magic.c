#include<stdio.h>
int main()
{
    int n, i, j, k, a[10][10] ;
    printf("Enter the order of the magic square");
    scanf("%d",&n) ;
    printf("\nThe magic square for %d x %d is :\n\n",n,n);
   {
    j = (n+1)/2;
    i = 1;
  }
    for(k=1;k<=n*n;k++)
    {
        a[i][j] = k ;
        if(k % n == 0)
        {
            i = i + 1 ;
            goto loop ;
        }
        if(i == 1)
        i=n;
        else
        i=i-1;
        if(j == n)
        j = 1;
        else
        j = j + 1 ;
        loop: ;
    }
    for (i=1;i<=n;i++)
        {
        for (j=1;j<=n;j++)
        {
            printf("%d\t", a[i][j]) ;
        }
        printf("\n\n") ;
    }
    end: ;
    return 0;
}
