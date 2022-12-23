/*
communication must be effective and interest other person
TED presentation skill
*/
//behave differently to act differently
//count yourself in
//be brave for 20sec
//takee a seat
//cheer for others success
//confidence from past success
//celebrate consantly
//what could you have done if yo were 10 times more confident
//STRING % only one characher so we use character array or string
// char name[6]
// \0 to end scanf("%s",name)=====>>& no nedd
// assignment by programmer
//name[]={'n','i','k'}
//name[]="nik"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char name[20];
    printf("Enter Name: ");
    scanf("%s",name);
    printf("\nname is %s",name);
    //gets(name);
    //printf("\nname is %s",name);
    return EXIT_SUCCESS;
}
/*Enter Name: Anusha Paul

name is Anusha
scanf generally doesnt take after space
avoiding scanf using gets which doesnt
 specify size hence is 
 unsafe*/