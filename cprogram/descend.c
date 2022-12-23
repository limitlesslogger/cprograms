#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s,i,j,temp;
    printf("\nenter size of array: ");
    scanf("%d",&s);
    int ar[s];//ar[s] must be initialised only after inputting size s
    for (i=0;i<s;i++)
    {
        printf("enter value for array");
        scanf("%d",&ar[i]);
    }  
    printf("\nentered array is: "); 
    for (i=0;i<s;i++)
    {
        printf("\t%d",ar[i]);
    }
    for (i=0;i<s-1;i++)
    {
        for (j=i+1;j<s;j++)
        {
            if (ar[i]<ar[j])
        {
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
        }
    }
    printf("\nentered array is in descending: "); 
    for (i=0;i<s;i++)
    {
        printf("\t%d",ar[i]);
    } 
    printf("\n");
}
