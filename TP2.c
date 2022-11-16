#include <stdio.h>
#define N 10

typedef int Tab[N];

/*
int somme(Tab t, int n, int i )
{
    int res=0;
    printf("Calcul de la somme a partir de l段ndice %d :\n",i);
    if (i<n)
{
    printf("\t appel du calcul de la somme a partir de l段ndice %d :\n",i+1);
    res=t[i]+somme(t,n,i+1);
    printf ("\t addition avec t[%d]\n",i );
}

    printf("\t Somme a partir de l段ndice %d = %d\n\n",i,res);
    return res ;
}

*/

//QUESTION 1

void affichageTab(int tab[],int n)
{
    if(n==1)
        printf("%d",tab[0]);
    else
    {
        affichageTab(tab,n-1);
        printf(" %d",tab[n-1]);
    }
}

//QUESTION 2

int somme(Tab t,int n)
{
    int res=0;
    printf("Calcul de la somme :\n");
if (n>0)
{
    printf("\t appel du calcul de la somme a partir de l段ndice %d :\n",n-1);
    res=t[n-1]+somme(t,n-1);
    printf("\t addition avec t[%d]\n",n-1 );
}
    printf("\t Somme a partir de l段ndice %d = %d\n\n",n-1,res);
    return res;
}

//QUESTION 3

int nbElements(int *tab, int n, int v)
{
    if (n==0)
        return 0;
    else
    {
        if (tab[n-1]<v)
            return 1 + nbElements(tab,n-1,v);
        else
            return nbElements(tab,n-1,v);
    }
}

//QUESTION 4

void affichageInverseTab(int tab[],int n)
{
    if(n > 0)
        printf("\n%d",tab[0]);
    else
    {
        printf("\n%d",tab[n-1]);
        affichageInverseTab(tab,n-1);
    }
}

//QUESTION 5

int rechercheValeur(int tab[],int n,int v)
{
    if(n==0)
    {
        return -1;
    }
    if(tab[n-1]==v)
    {
        return n-1;
    }
    return rechercheValeur(tab,n-1,v);
}

//QUESTION 6

int rechercheDichotomique(Tab t,int v,int debut,int fin)
{
    int m;
    if (debut<fin)
    {
        m=(debut+fin)/2;
        if (v<t[m])
        {
            return rechercheDichotomique(t,v,debut,m);
        }
        if (v>t[m])
        {
            return rechercheDichotomique(t,v,m+1,fin);
        }
    return debut;
}
}
int main(){

    Tab t1 = {4,2,8,0,7,3,1,5,9,6};
    Tab t2 = {0,1,2,3,4,5,6,7,8,9};
    printf("La somme des entiers du tableau t1 = %d\n",somme(t1,N));
    affichageTab(t1,N);
    affichageInverseTab(t1,N);
    printf("\n%d",nbElements(t1,N,20));
    printf("\n%d",rechercheValeur(t1,N,6));
    printf("\n%d",rechercheDichotomique(t2,9,0,9));
    return 0;
}

