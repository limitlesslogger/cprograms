#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n1,n2,n3;
    printf("enter three numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);
    if (n1>n2){
        if (n1>n3)
        {
            printf("greatest number is: %d",n1);
        }
        else{
            printf("greatest number is: %d",n3);
        }
    }
    else if (n2>n1)
    {
        if (n2>n3)
        {
            printf("greatest number is: %d",n2);
        }
        else{
            printf("greatest number is: %d",n3);
        }
    }
    else
    {
        printf("greatest is: %d",n3);
    }
    return EXIT_SUCCESS;
}
/*enter three numbers: 3 5 1
greatest number is: 5% 
*/