#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef int Tab[N];

void remplirTableau(Tab t,int n)
{
    int i;
    srand(time(NULL));
    for (i=0;i<n;i++)
    t[i]=rand()%n;
}

void affichage(int *t,int n,int i)
{
	if (i==n)
    {
    return;
    }
	printf("_%d",t[0]);
    affichage(t+1,n,i+1);
}

