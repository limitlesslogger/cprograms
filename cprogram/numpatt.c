#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,n,j;
    printf("enter limit: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
/*enter limit: 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 */