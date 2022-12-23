#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s;
    int a[s];
    getArray()
    displayArray()
    return EXIT_SUCCESS;
}
int getArray()
{
    int s,i;
    int a[i];
    printf("input size: ");
    scanf("%d",&s);
    for (i=0;i<s;i++)
    {
        printf("enter value of array: ");
        scanf("%d",&a[i]);
    }
    for (i=0;i<s;i++)
    {
        printf("entered value of array: ");
        printff("\n%d",a[i]);
    }
}