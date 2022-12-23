
#include <stdio.h>
#include <stdlib.h>
int sum()
{
    int a,b;
    printf("in sum \n");
    printf("enter two number");
    scanf("%d%d",&a,&b);
    return ((a+b));

}
int main()
{
    int k;
    k=sum();
    printf("in main \n");
    printf("%d",k);
    return 0;
}
//structure in C
/*printf, scanf etc has def in stdio.h 
which is a library     
pre processive diective
pointers
vere programming language il ninnu c ile call cheyam
*/