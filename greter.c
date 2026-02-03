#include<stdio.h>
int main() 
{
    int a,b,c;
    printf("enter the number");
    scanf("%d%d%d",&a,&b,&c);
    if (a>=b&&a>=c)
    printf("greter=%d",a);
    else if(b>=a&&b>=c)
    printf("greter=%d",b);
    else
    printf("greter=%d",c);
    return 0;
}