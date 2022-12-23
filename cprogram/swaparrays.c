/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s1,s2,i;
    int a[s1],a[s2];
    printf("enter size of first array: ");
    scanf("%d",s1);
    printf("enter size of second array: ");
    scanf("%d",s2);
    for (i=0;i<=(s1-1);i++)
    {
        printf("enter value for array 1: ");
        scanf("%d",a[i]);
    }
    for (i=0;i<=s2-1;i++)
    {
        printf("enter value for array 2: ");
        scanf("%d",a[i]);
    }
    printf("entered values are: ");
    for (i=0;i<s1;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("entered values are: ");
    for (i=0;i<s2;i++)
    {
        printf("%d\t",a[i]);
    }
    return EXIT_SUCCESS;
}*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s,n,i,temp,flag=0;
    printf("\nenter size of array1: ");
    scanf("%d",&s);
    printf("\nenter size of array2: ");
    scanf("%d",&n);
    int a[s],ar[n];
    for (i=0;i<s;i++)
    {
        printf("\nenter value for array 1: ");
        scanf("%d",&a[i]);
    }
    printf("\nentered values are array 1: ");
    for (i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("\nenter value for array 2: ");
        scanf("%d",&ar[i]);
    }
    printf("\nentered values are array 2: ");
    for (i=0;i<n;i++)
    {
        printf("%d\t",ar[i]);
    }
    if (n==s)
    {
        for (i=0;i<n;i++)
        {
            temp=a[i];//left assignment if you write as a[i]=temp you will get wrong output
            a[i]=ar[i];
            ar[i]=temp;
        }
        flag=1;
    }
    printf("\nswapped a1:");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nswapped a2:");
    for (i=0;i<n;i++)
    {
        printf("%d\t",ar[i]);
    }
    if (flag==0)
    {
        printf("array cannot be swapped");
    }
}