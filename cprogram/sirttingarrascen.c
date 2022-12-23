//selection sort
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s,i,p,j,temp,flag=0;
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
    for (i=0;i<s-1;i++)//size is 5 5-1 is 4 this loop locks position hence 3rd postion vare nokiya mathi 4th position onnumayi compare cheyan ella
    {
        for (j=i+1;j<s;j++)
        {
            if (a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\narray is:");
        for (i=0;i<s;i++)
    {
        printf("%d\t",a[i]);
    }
    }
    /*enter size of array: 5 
enter value: 5
enter value: 4
enter value: 3
enter value: 2
enter value: 1
entered values are: 5   4       3       2       1
array is:1      2       3       4       5  */