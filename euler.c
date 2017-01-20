#include<stdio.h>
float fun(float x,float y)
{
    float f;
    f=x+y;
    return f;
}
main()
{
    float i,j,x,y,h,t,k;
    printf("\nEnter x0,y0,h,xn: ");
    scanf("%f%f%f%f",&i,&j,&h,&t);
    x=i;
    y=j;
    while(x<=t)
    {
        k=h*fun(x,y);
        y=y+k;
        x=x+h;
        printf("%0.3f\t%0.3f\n",x,y);
    }
}
