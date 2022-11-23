#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//EXERCICE 1

//QUESTION 1

typedef char Chaine[15];
typedef char ChaineTel[10];

typedef struct _Client{
    int id;
    Chaine nomClient;
    ChaineTel tel;

}Client;

//QUESTION 2 et QUESTION 5

void ajouteClientFichier(char * fichierClient,Client c)
{
    FILE * f = fopen(fichierClient,"a");
    if (!f) printf("Erreur à l'ouverture de %s\n",fichierClient);
    else
    {
        fprintf(f,"%d %s %s\n",c.id,c.nomClient,c.tel);
        fclose(f);
    }
}

//QUESTION 3

 void afficheClientsFichier(char * fichierClient)
 {
     FILE * f = fopen(fichierClient,"r");
     char ligne[100];

     if (!f) printf("Erreur à l'ouverture de %s\n",fichierClient);
     else
     {
     while (fgets(ligne,100,f))
     {
     if (nomtab[nb_ligne]!=ligne)
        {
        clients[nb_ligne]=ligne;
        nbclient++;
        }
     else
        {
        nbclient=nbclient;
        }
     }
    printf("%s\n",ligne);
    fclose(f);
     }
 }

//QUESTION 4

void nombreClientsFichier(char * fichierClient,Tab clients)
{
FILE * f = fopen(fichierClient,"r");
     char ligne[100];
     int nb_ligne=0;
     int nbclient=0;

     if (!f) printf("Erreur à l'ouverture du fichier %s\n",fichierClient);
     else
     {
     while (fgets(ligne,100,f))
     {
     if (clients[nb_ligne]!=ligne)
        {
        clients[nb_ligne]=ligne;
        nbclient++;
        }
     else
        {
        nbclient=nbclient;
        }
        printf("%s\n",ligne);
        fclose(f);
     }
 }
}

//QUESTION 6

void triClientsFichier(char * fichierClient)
{
    FILE *f = fopen(fichierClient,"r");
    Client c[200];
    int i = 0;
    while (fscanf(fichier, "%d %s %s", c[i].id, c[i].nomClient, c[i].tel) != EOF)
    {
    i++;
    }
    fclose(f);
    int j=0;
    for (j=0;j<i;j++)
        {
        for (int k=j+1;k<i;k++)
        {
        if (strcmp(c[j].nomClient, c[k].nomClient)>0)
        {
        Client temp = c[j];
        c[j] = c[k];
        c[k] = temp;
        }
        }
    }
    fichier = fopen(nomClient, "w");
    int j=0;
    for (j=0;j<i;j++)
    {
    fprintf(f, "%d %s %s",c[j].id,c[j].nomClient,c[j].tel);
    }
    fclose(f);
}

 int main (int argc, const char * argv[],)
 {
     afficheClientsFichier("C:/Users/vajdo/OneDrive/Bureau/TD6/fichierClient.txt");
     return 0;
 }
