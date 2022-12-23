//values passed argument or parameter
//return value
//default function ie start point 
//of prgram void main()
#include <stdio.h>
#include <stdlib.h>
void sum()
{
    int a,b;
    printf("in sum \n");
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("sum is : %d\n",a+b);
}
int main()
{
    printf("in main \n");
    sum();//no arguments
    return 0;
}
/*no return so void
if return is there its type 
must be specified eg: int main()*/