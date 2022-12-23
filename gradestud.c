#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float p;
    printf("enter percentage of marks: ");
    scanf("%f",&p);
    if (p<50)
    {
        printf("failed\n");
    }
    else if(p<60)
    {
     printf("grade:E\n");   
    }
    else if(p<70)
    {
        printf("grade:D\n");
    }
    else if(p<80)
    {
        printf("grade:C\n");
    }
    else if (p<90)
    {
        printf("grade:A\n");
    }
    else if(p<=100)
    {
        printf("good work keep it up\n");
    }
    else{
        printf("percentage must be within 100\n");
    }
    return EXIT_SUCCESS;
}
/*enter percentage of marks: 45
failed
enter percentage of marks: 51
grade:E
enter percentage of marks: 65
grade:D
enter percentage of marks: 78
grade:C
enter percentage of marks: 88
grade:A
enter percentage of marks: 99
good work keep it up
enter percentage of marks: 988
percentage must be within 100*/