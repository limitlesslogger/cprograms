#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int p;
    float r,n,s;
    printf("enter three numbers p,r,n : ");
    scanf("%d%f%f",&p,&r,&n);
    s=(p*r*n)/100;
    printf("simple interest is:%f",s);
    return EXIT_SUCCESS;
}
/*enter three numbers p,r,n : 1 2 3 
simple interest is:0.060000% */