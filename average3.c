#include <stdio.h>
#include <stdlib.h>
int main(void){
    float num1,num2,num3;
    printf("enter three numbers: ");
    scanf("%f%f%f",&num1,&num2,&num3);
    printf("average: %f\n",(num1+num2+num3)/3);
    return EXIT_SUCCESS;
}