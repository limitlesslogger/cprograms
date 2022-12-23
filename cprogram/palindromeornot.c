#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s,flag=0;
    printf("enter size of array: ");
    scanf("%d",&s);
    int i,j,cnt=s-1;
    char a[s];
    char b[s];
    int k=0;
    printf("\nenter array:  ");
    scanf("%s",a);
    printf("\narray is : %s",a);

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
            cnt=cnt-1;
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
