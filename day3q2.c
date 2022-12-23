#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1,num2;
    printf("enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    if (num1>num2)
    {
        printf("the number %d is greater\n",num1);

    }
    else{
        printf("the number %d is greater\n",num2);

    }
    return EXIT_SUCCESS;
}
/*enter two numbers: 4555 -566
the number 4555 is greater*/