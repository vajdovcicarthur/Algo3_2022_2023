#include <stdio.h>
#define N 10

void affichage(int *tabNotes,int *tabCoeff,int taille)
{
    int i;
    for (i=0;i<taille;i++)
    {
        printf("%d \n",tabNotes[i]);
    }
    for (i=0;i<taille;i++)
    {
        printf(" %d \n",tabCoeff[i]);
    }
}

void moyenne_notes(int *tabNotes,int taille)
{
    float moyenne;
    int somme;
    int i;
    somme=0;
    for (i=0;i<taille;i++)
    {
        somme += tabNotes[i];
    }
    moyenne = (float)somme / (float)taille;
    printf("%f\n",moyenne);
}

void min_max(int *tabNotes,int taille)
{
    int i;
    int *max=tabNotes[0];
    int *min=tabNotes[0];
    for(i=0;i<taille;i++)
    {
        if(*max<tabNotes[i])
        {
            *max=tabNotes[i];
        }
        if (*min>tabNotes[i])
        {
            *min=tabNotes[i];
        }
    }
    printf("La plus grande note est : %d , La plus petite est : %d",max,min);
    return 0;
}
void ajouter_1(int *tabNotes,int taille)
{
    int i=0;
    for (i=0;i<taille;i++)
    {
        tabNotes[i]=tabNotes[i]+1;
    }
    printf("%d \n",tabNotes[i]);
}
void modifier(int *tabNotes,int taille)
{
    int i;
    int a=0;

    printf("Entrez la valeur");
    scanf("%d", &a);

     for (i=0;i<taille;i++)
    {
     printf("%d",(tabNotes+a));
    }

}
int main(int argc,char **argv)
    {
        int tabNotes[N];
        int tabCoeff[N]={1, 2, 2, 3, 4, 2, 1, 2, 2, 1};
        int i;
        for (i=0; i<N; i++)
        {
            printf("Saisissez vos notes");
            scanf("%d\n",&tabNotes[i]);
        }
        affichage(tabNotes,tabCoeff, N);
        moyenne_notes(tabNotes, N);
        min_max(tabNotes, N);
        ajouter_1(tabNotes, N);
        modifier(tabNotes, N);
    }






