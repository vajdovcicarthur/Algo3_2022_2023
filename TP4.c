#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef char Tab[MAX];

typedef struct Client
{
    int id;
    char nomClient[20];
}Client;

void ajouteClientFichier(char * fichierClient, Client c)
{
        FILE * f = fopen(fichierClient,"a");
        if (!f) printf("Erreur à l'ouverture du fichier %s\n",fichierClient);
        else
        {
            fprintf(f,"%d %s\n",c.id,c.nomClient);
            fclose(f);
        }

}
void afficheClientsFichier(char * fichierClient)
{
        FILE * f = fopen(fichierClient,"r");
        char ligne[512];
        int nb_lignes=0;
        if (!f) printf("Erreur a l'ouverture du fichier %s\n",fichierClient);
        else
        {
            while(fgets(ligne,512,f))
            {
                printf("%s",ligne);
                nb_lignes++;
            }
        }
        fclose(f);
}

int nombreClientsFichier(char * fichierClient)
{

    FILE * f = fopen(fichierClient,"r");
        char ligne[512];
        int nb_lignes=0;
        if (!f) printf("Erreur a l'ouverture du fichier %s\n",fichierClient);
        else
        {
            while(fgets(ligne,512,f))
            {
                nb_lignes++;
            }
        }
        printf("Nombre de client : %d\n",nb_lignes);
        fclose(f);

}

int appartientClientFichier(char *fichierClient, char *nomClient)
{
    FILE *f = fopen(fichierClient, "r");
    if(f==NULL)
    {
        printf("Le fichier n'existe pas. \n");
        return 0;
    }
    char ligne[512];
    int i=0;
    while(fgets(ligne,512,f)!= NULL)
    {
        if(strstr(ligne,fichierClient)!=NULL)
        {
            printf("Le client %s est repertorie.\n",fichierClient);
            fclose(f);
            return 1;
        }
    }
    printf("Client non repertorie. \n");
    fclose(f);
    return 0;
}

int main()
{
    Client Lutecien = {12,"Lutecien"};
    Client Clementine = {34,"Clementine"};
    ajouteClientFichier("fichierClient.txt",Lutecien);
    ajouteClientFichier("fichierClient.txt",Clementine);
    afficheClientsFichier("fichierClient.txt");
    nombreClientsFichier("fichierClient.txt");
    appartientClientFichier("fichierClient.txt","Lutecien");
    return 0;
}
