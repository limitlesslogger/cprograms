#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s,i,p,flag=0;
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
    printf("\nenter element to be searched: ");
    scanf("%d",&p);
    for(i=0;i<s;i++)
    {
        if (p==a[i])
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("element present at position %d\n",i+1);
    }
    else if (flag==0)
    {
        printf("element not found \n");
    }
    return EXIT_SUCCESS;
}