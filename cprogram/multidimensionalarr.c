//multidimensional arrays have rows and columns
//as in matrix
//start from [0,0] [0,1] [0,2]
//[1,0],[1,1],[1,2]
//size like matrix 3by3
// int a[3][3];
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int s;
    printf("enter size of array: ");
    scanf("%d",&s);
    int a[s][s],i,j;
    for (i=0;i<s;i++)
    {
        for (j=0;j<s;j++)
        {
            printf("enter element: ");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    } 
    printf("\nentered array is: \n"); 
    for (i=0;i<s;i++)
    {
        for (j=0;j<s;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }  
    return EXIT_SUCCESS;
}
/*enter size of array: 3
enter element: 1
enter element: 2
enter element: 3

enter element: 4
enter element: 5
enter element: 6

enter element: 7
enter element: 8
enter element: 9


entered array is: 
        1       2       3
        4       5       6
        7       8       9*/