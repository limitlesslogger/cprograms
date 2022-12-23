#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,n,s=0;
    printf("enter limit: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (i%2!=0)
        {
            s+=i;
        }
    }
    printf("sum is: %d",s);
    return EXIT_SUCCESS;
}