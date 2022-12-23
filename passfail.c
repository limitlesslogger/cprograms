#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float mrk;
    puts("enter your marks on 100: ");
    scanf("%f",&mrk);
    if (mrk>50)
    {
        puts("you have passed\n");
    }
    else
    {
        printf("you failed\n");
    }
    return EXIT_SUCCESS;
}
/*enter your marks on 100: 
45
you failed
enter your marks on 100: 
51
you have passed*/