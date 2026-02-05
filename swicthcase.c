#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("ennter two number:");
    scanf("%d%d",&a,&b);
    printf("enter the operator(+,-,*,/):" );
    scanf(" %c",&op);
    switch(op)
    {
        case'+':printf("result=%d",a+b);break;
        case'-':printf("resuit=%d",a-b);break;
        case'*':printf("result=%d",a*b);break;
        case'/':if(b!=0)
        printf("result=%d",a/b);
        else
        printf("division by zero not allowed");
        break;
        default:printf("invalid operator");
    }
    return 0;
}