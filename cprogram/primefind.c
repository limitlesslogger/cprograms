/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,n;
    printf("enter number: ");
    scanf("%d",&n);
    for (i=2;i<n/2;i++)
    {
        if (n%i==0)
        {
            printf("not prime\n");
            break;
        }
        else
        {
            printf("prime\n");
            break;
        }
    }
    return EXIT_SUCCESS;
}*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int n,i,flag=0;
  printf("enter num: ");
  scanf("%d",&n);
  for(i=2;i<n/2;i++)
  {
    if (n%i==0)
    {
        flag=1;
        break;    
    }
  }
  if (flag==0)
  {
    printf("prime");
  }
  else{
    printf("not prime");
  }
}
/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("%d",10/2);
}*/
//5