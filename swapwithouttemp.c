#include <stdio.h>
#include <stdlib.h>
/*this swap only in output
int main(void) 
{
	int a=50,b=100;
    printf("a:%d b:%d",b,a);
    return EXIT_SUCCESS;
}*/
int main(void)
{
    int num1,num2;// num1=5,num2=3
    printf("enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("num1 is before swap : %d\n",num1);
    printf("num2 is before swap %d \n",num2);
    num1=num1+num2;//8
    num2=num1-num2;//8-3=5
    num1=num1-num2;//8-5=3
    printf("num1 is before swap: %d\n",num1);
    printf("num2 is after swap%d\n",num2);
    return EXIT_SUCCESS;
}