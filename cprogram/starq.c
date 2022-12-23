/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,i,j;
    printf("enter limit: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}*/
/*enter limit: 5
*
**
***
****
*****    */
//break and continue
//break encounter comes out of loop
//continue encounter goes to increment or decrement but statements with loop after continue not executed
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,i,j;
    printf("enter limit: ");
    scanf("%d",&n);
    for (i=n;i>0;i--)
    {
        for (j=i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
/*{
    int i,j,s,cnt=0;
    printf("enter size of array: ");
    scanf("%d",&s);
    char a[s];
    char re[s];
    printf("\nenter array");
    scanf("%s",a);
    printf("\na%s",a);
    for (i=s;i>0;i--)
    {
        re[cnt]=a[i];
        cnt=cnt+1;
    }
    printf("\nre%s",re);
    for (i=0;i<s;i++)
    {
        printf("enter value: ");
        scanf("%s",&a[i]);
    }
    printf("entered values are: ");
    for (i=0;i<s;i++)
    {
        printf("%s\t",a[i]);
    }
    return EXIT_SUCCESS;
}*/
