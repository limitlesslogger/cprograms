#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s,i,cnt=0;
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
    for (i=0;i<s;i++)
    {
        if ((ar[i]%2)==0)
        {
            cnt=cnt+1;
        }
    }
    printf("\nnumber of even numbers is %d\n",cnt);
    return EXIT_SUCCESS;
}
