/*PERCEPTION=REALITY
coding standard eg:variable names
typing skill typing master*/
//ARRAYS int a[size]
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
    return EXIT_SUCCESS;
}