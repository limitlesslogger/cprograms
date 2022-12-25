#include <stdio.h>
#include <stdlib.h>
int* Getarray(int s,int arr[])
{   
    printf("enter values of array: ");
    for (int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr;  
}
void displayArray(int s,int arr[])
{   
    printf("entered value of array: ");
    for (int i=0;i<s;i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("\n");
}
int main()
{
    int s;
    printf("input size: ");
    scanf("%d",&s);
    int arr[s];
    int* p = Getarray(s,arr);
    printf("size of int%d",sizeof(int));
    // printf("points to first element:%p",arr);
    // printf("points to second element:%p",arr+2);
    //printf("points to :%d",*((&arr)+8));

    displayArray(s,p);
}