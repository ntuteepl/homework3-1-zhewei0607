#include<stdio.h>
#include<stdlib.h>
main()
{
    int a,b,c,d,e,f,num;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    num=3;
    if(a>=c)
    {
        if(a>=c>=e)
        {
           if(f<=c)
           {
               num=num-1;
               if(d<=a)
                 num=num-1;
           }
           if(f<=a)
           {
               num=num-1;
           }
        }
        else if(a>=e>=c)
        {
            if(d<=e)
           {
               num=num-1;
               if(f<=a)
                 num=num-1;
           }
           if(d<=a)
           {
               num=num-1;
           }
        }
        else
        {
            if(d<=a)
           {
               num=num-1;
               if(b<=e)
                 num=num-1;
           }
           if(d<=e)
           {
               num=num-1;
           }
        }
    }
    else
    {
        if(c>=a>=e)
        {
            if(f<=a)
           {
               num=num-1;
               if(b<=c)
                 num=num-1;
           }
           if(f<=c)
           {
               num=num-1;
           }
        }
        else if(c>=e>=a)
        {
            if(b<=e)
           {
               num=num-1;
               if(f<=c)
                 num=num-1;
           }
           if(b<=d)
           {
               num=num-1;
           }
        }
        else
        {
            if(b<=c)
           {
               num=num-1;
               if(d<=e)
                 num=num-1;
           }
           if(b<=e)
           {
               num=num-1;
           }
        }
    }
    printf("%d",num);

}
