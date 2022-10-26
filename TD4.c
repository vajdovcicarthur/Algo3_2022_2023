#include <stdio.h>

//EXERCICE 1

//QUESTION 1 ET 2

/*

typedef int Tab[4];

int dicho(Tab t,int c, int g,int d)
{
    int i;
    d=-1;
    for (i=0;i<g;i++)
        if(c == t[i])
            d=(i+1);
    return d;
}

int main()
{
    Tab t[]={4,8,12,16};
    printf("%d",dicho(t,12,4,0));
}

*/

//EXERCICE 2

//QUESTION 1

#define n 10
/*
typedef int Tab[n];

int minIndice(Tab t,int min,int g,int d)
{
    int i;
    min=1000;
    g=n;
    for (i=0;i<g;i++)
    {
        if(t[i]<min)
        {
            min=t[i];
            d=i;
        }
    }
    printf("Min :%d\n Position : %d",minIndice(t,3,17,9,15,2,7,10,9,8,12),min,position);
    return 0;
}

//QUESTION 2

int permut(Tab t,int j,int c)
{
    int i,j;
    for(j=1;j<=n;j++)
    {
        for (i=0;i<n-1;i++)
        {
            if (t[i]>t[i+1])
            {
                c=t[i];
                t[i=t[i+1];
                t[i+1]=c;
            }
        }
    }
}
*/

//EXERCICE 3

/*

typedef int Tab[10];
void f(Tab t,int n)
{
    int b=1,j=n,i;
    while(b==1)
    {
        b=0;
        i=0;
        while(i<j)
        {
            if(t[i]>t[i+1])
               {
                   permut(t,i,i+1);
                    b=1;
               }
            i++;
        }
        j--;
    }
}
int main()
{
    Tab t[]={3,17,9,15,2,7,10,9,8,12};
}

*/

