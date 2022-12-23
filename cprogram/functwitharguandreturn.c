#include <stdio.h>
#include <stdlib.h>
//int sum(int,int);
int sum(int num1,int num2)
{
    int s;
    s=num1+num2;
    return(s);//return value int so not void int
}
int main()
{
    printf("in main \n");
    int a,b,r;
    printf("in sum \n");
    printf("enter two number");
    scanf("%d%d",&a,&b);
    r=sum(a,b);
    printf("sum is:%d ",r);
    return 0;
}
//with argument no return value