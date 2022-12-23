//DISCIPLINE==FREEDOM
//EXTREME OWNERSHIP :BE RESPONSIBLE

//CONTROL STATEMENTS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num1;
    printf("enter a number: ");
    scanf("%d",&num1);
    if (num1>0)
    {
        printf("positive\n");
    }
    else if (num1<0)
    {
        printf("negative\n");
    }
    else
    {
        printf("zero\n");
    }
    return EXIT_SUCCESS;
}
/*enter a number: 2
positive
enter a number: -2
negative
enter a number: 0
zero*/