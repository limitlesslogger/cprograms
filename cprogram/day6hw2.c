#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s;
    printf("enter size of arrays: ");
    scanf("%d",&s);
    int a[s][s],i,j,cnt=0;
    for (i=0;i<s;i++)
    {
        for (j=0;j<s;j++)
        {
            printf("enter element: ");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    } 
    printf("\nentered array is: \n"); 
    for (i=0;i<s;i++)
    {
        for (j=0;j<s;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    int si,sum,i3,j3;
    printf("enter size of array: ");
    scanf("%d",&si);
    int ar[si][si],i2,j2;
    for (i2=0;i2<si;i2++)
    {
        for (j2=0;j2<si;j2++)
        {
            printf("enter element: ");
            scanf("%d",&ar[i2][j2]);
        }
        printf("\n");
    } 
    printf("\nentered array is: \n"); 
    for (i2=0;i2<si;i2++)
    {
        for (j2=0;j2<si;j2++)
        {
            printf("\t%d",ar[i2][j2]);
        }
        printf("\n");
    }
    printf("sum is:\n");
    for (i3=0;i3<s;i3++)
    {
        for(j3=0;j3<s;j3++)
        {
        sum=(a[i3][j3]) + (ar[i3][j3]);
        printf("\t%d",sum);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}