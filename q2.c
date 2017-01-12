#include <stdio.h>
long pascal(int y)
{
    int z;
    long result = 1;
    for( z = 1 ; z <= y ; z++ )
        result = result*z;
    return ( result );
}
int main()
{
    int x, y, z;
    printf("number of rows : ");
    scanf("%d",&y);
    for ( x = 0 ; x < y ; x++ )
    {
        for ( z = 0 ; z <= ( y - x - 2 ) ; z++ )
            printf(" ");
        for( z = 0 ; z <= x ; z++ )
            printf("%ld ",pascal(x)/(pascal(z)*pascal(x-z)));
        printf("\n");
    }
    return 0;
}
