#include<stdio.h>
#include<stdlib.h>
main()
{
    int num,i;
    scanf("%d",&num);
    if(num==0 || num==1)
    {
        printf("NO");
    }
    else if(num==2 || num==3)
    {
        printf("YES");
    }
    else
    {
       for(i=2;i<(num-1);i++)
       {
           if(num%i==0)
           {
               printf("NO");
               break;
           }
           else
           {
              printf("YES");
              break;
           }
       }
    }
}

