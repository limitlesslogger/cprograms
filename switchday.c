#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ch;
    printf("1.Monday\n2.Tuesday\n\
3.Wednesday\n4.Thursday\n\
5.Friday\n6.Saturday\n\
7.Sunday\n\
Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("MONDAY\n");
        break;
        case2:
        printf("Tuesday\n");
        break;
        case3:
        printf("wednesday\n");
        break;
        case 4:
        printf("thursady\n");
        break;
        case 5:
        printf("friday\n");
        break;
        case 6:
        printf("Saturday\n");
        break;
        case 7:
        printf("sunday\n");
        break;
        default:
        printf("enter a valid choice\n");
    }
    return EXIT_SUCCESS;
}
/*1.Monday
2.Tuesday
3.Wednesday
4.Thursday
5.Friday
6.Saturday
7.Sunday
Enter your choice: 4
thursady
Enter your choice: 9
enter a valid choice*/