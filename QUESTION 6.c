#define N 1000
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
