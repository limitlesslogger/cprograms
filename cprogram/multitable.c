#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,i;
    printf("enter number: ");
    scanf("%d",&n);
    for (i=1;i<11;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return EXIT_SUCCESS;
}