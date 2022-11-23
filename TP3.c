#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* #define N 10 */ // Debut du TP
#define N 1000

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

void copie(Tab t,Tab t2,int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
    t2[i]=t[i];
    }
    printf("\n");
}

int triMin(Tab t,int n)
{
    int min;
    int temp;
    int i=0;
    for(i=0;i<n-1;i++)
    {
    min=i;
    int j;
       for(j=i+1;j<n;j++)
       {
        if(t[j]<t[min])
        {
        min = j;
        }
       if(min!=i)
       {
        temp=t[i];
        t[i]=t[min];
        t[min]=temp;
       }
      }
    }
}

int permuter(int *i,int *j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}

int initPivot(Tab t,int g,int d)
{
	return t[g];
}

int partitionTab(int tab[],int petit,int grand)
{
    int pivot=tab[grand];
    int i=(petit-1);
    int j=petit;
    for(j=petit;j<=grand-1;j++)
    {
    if (tab[j]<=pivot)
    {
    i++;
    permuter(&tab[i],&tab[j]);
    }
    }
    permuter(&tab[i+1],&tab[grand]);
    return(i+1);
}

int partitionner(Tab t,int g,int d)
{
	int pivot=initPivot(t,g,d);
	int i=g-1;
	int j=d+1;
    int fin=0;

	while(!fin)
	{
    printf("%d,i %d,j %d\n",pivot,i,j);
    do
    {
    j=j-1;
    }
    while(t[j]<pivot);
    {
    do
    {
    i=i+1;
    }
    while(t[i]>=pivot);
    {
    if (i<j)
    {
    permuter(&t[i],&t[j]);
    }
    else
    {
    fin=1;
    }
	}
	return i;
}
}}

int triRapide(Tab t,int g,int d)
{
	if (g<d)
    {
    int p=partitionTab(t,g,d);
    triRapide(t,g,p-1);
    triRapide(t,p+1,d);
	}
}

void fonctionF()
{
    Tab t1;
    Tab t2;
    remplirTableau(t1,N);
    copie(t1,t2,N);
    triMin(t1,N);
    affichage(t1,N,0);
    triRapide(t2,0,N-1);
    affichage(t2,N,0);
}

int main(int argc,char const *argv[])
{
    int i=0;
    float somme;
    float temps[10];
    float moyenne;
    for(i=0;i<10;i++)
    {
    double temps_debut;
    double temps_fin;
    temps_debut=(double)clock();
    fonctionF();
    temps_fin=(double)clock();
    printf ("\n Duree de traitement: %f ms\n",1000*(temps_fin-temps_debut)/CLOCKS_PER_SEC);
    temps[i]=(temps_fin-temps_debut);
    }
}

