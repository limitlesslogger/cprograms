/*F.U. Money: Make As Much Money As You Damn Well Want And Live Your LIfe As You Damn Well Please!
Discipline Equals Freedom: Field Manual
Book by Jocko Willink
Extreme Ownership: How U.S. Navy SEALs Lead and Win
Book by Jocko Willink and Leif Babin
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float n1,n2;
    int opt;
    printf("enter two numbers: ");
    scanf("%f%f",&n1,&n2);
    printf("enter 1 for addition\n\
    enter 2 for substraction\n\
    enter 3 for multiplication\n\
    enter 4 for division\n\
    enter your choice : ");
    scanf("%d",&opt);
    if (opt==1)
    {
        printf("output is: %f",n1+n2);
    }
    else if (opt==2)
    {
        printf("output: %f",n1-n2);
    }
    else if (opt==3)
    {
        printf("output: %f",n1*n2);    
    }
    else if (opt==4)
    {
        printf("output: %f",n1/n2);
    }
    else
    {
        printf("choose a valid option ");
    }   
    return EXIT_SUCCESS;
}
/*
if n1,n2 and opt are int
enter two numbers: 2 3
enter 1 for addition
    enter 2 for substraction
    enter 3 for multiplication
    enter 4 for division1
output is: 5% 
enter two numbers: 2 5
enter 1 for addition
    enter 2 for substraction
    enter 3 for multiplication
    enter 4 for division2
output: -3
 enter two numbers: 2 3
enter 1 for addition
    enter 2 for substraction
    enter 3 for multiplication
    enter 4 for division3
output: 6% 
enter two numbers: 10 5
enter 1 for addition
    enter 2 for substraction
    enter 3 for multiplication
    enter 4 for division4
output: 2%  
enter two numbers: 2 10
enter 1 for addition
    enter 2 for substraction
    enter 3 for multiplication
    enter 4 for division4
output: 0%  
if n1 and n2 float
enter two numbers: 2 10
enter 1 for addition
    enter 2 for substraction
    enter 3 for multiplication
    enter 4 for division4
output: 0.200000% */