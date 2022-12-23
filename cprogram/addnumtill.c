#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,i;
    int s=0;
    printf("Enter the limit: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("sum is:%d ",s);
    return EXIT_SUCCESS;
}/*Enter the limit: 10
sum is:55*/