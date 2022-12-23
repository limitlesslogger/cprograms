/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("hello\n");
        if (i==3)
        {
            break;
        }
        printf("out of if \n");
    }
    printf("finished");
}*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("hello\n");
        if (i==3)
        {
            continue;
        }
        printf("out of if \n");
    }
    printf("finished");
}