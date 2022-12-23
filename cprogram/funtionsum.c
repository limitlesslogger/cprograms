#include <stdio.h>
#include <stdlib.h>
void sum(int,int);
void sum(int num1,int num2)
{
    printf("sum is : %d\n",num1+num2);
}
int main()
{
    printf("in main \n");
    int a,b;
    printf("in sum \n");
    printf("enter two number");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
//with argument no return value