#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s,flag=0;
    printf("enter size of array: ");
    scanf("%d",&s);
    

    // for (i=s-1;i>=0;i--)
    // {    
    //     b[k]=a[i];
    //     ++k;
    // }
    // printf("\n reversed array is :%s",b);

    for (i=0;i<=(s/2);i++)
    {
        if (a[cnt]==a[i])
        {
            cnt=cnt-1;//comment 
        }
        else
        {
            flag=1;
        }
    }
    if (flag==0)
    {
        printf("\npalindrome\n");
    }
    else{
        printf("\nnot palindrome\n");
    }
}
