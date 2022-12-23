#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1,num2,temp;
    printf("enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("num1 is before swap : %d\n",num1);
    printf("num2 is before swap %d \n",num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("num1 is before swap: %d\n",num1);
    printf("num2 is after swap%d\n",num2);
    return EXIT_SUCCESS;
}   