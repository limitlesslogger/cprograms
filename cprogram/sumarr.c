#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s,i;
    printf("enter size of array: ");
    scanf("%d",&s);
    int a[s];
    for (i=0;i<s;i++)
    {
        printf("enter value: ");
        scanf("%d",&a[i]);
    }
    printf("entered values are: ");
    for (i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }
    int sum=0;
    for (i=0;i<s;i++)
    {
        sum=sum+a[i];
    }
    printf("\n");
    printf("sum is: %d\n",sum);
    return EXIT_SUCCESS;
}