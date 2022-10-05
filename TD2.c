#include <stdio.h>

// QUESTION 1 //

/*

int main(){
typedef struct {
    char nom[15];
    char prenom[15];
    int codeFonction;
    float salaire;
}Employe;

Employe e1;
printf("Nom de l'employe ? :");
scanf("%s",e1.nom);
printf("\n %s \n",e1.nom);
printf("Prenom de l'employe ? :");
scanf("%s",e1.prenom);
printf("\n %s \n",e1.prenom);
printf("CodeFonction de l'employe ? :");
scanf("%d",e1.codeFonction);
printf("\n %s \n",e1.codeFonction);
printf("Salaire de l'employe ? :");
scanf("%f",e1.salaire);
printf("\n %s \n",e1.salaire);
}

*/

//QUESTION 2//

#define N 15

typedef struct {
    char nom[N];
    char prenom[N];
    int codeFonction;
    float salaire;
}Employe;

void saisieEmploye(Employe *e)
{
    printf("Nom de l'employe ? :");
        scanf("%s",e1->nom);
    printf("\n %s \n",e1->nom);
    printf("Prenom de l'employe ? :");
        scanf("%s",e1->prenom);
    printf("\n %s \n",e1->prenom);
    printf("CodeFonction de l'employe ? :");
        scanf("%d",e1->codeFonction);
    printf("\n %s \n",e1->codeFonction);
    printf("Salaire de l'employe ? :");
        scanf("%f",e1->salaire);
    printf("\n %s \n",e1->salaire);
}

void afficheEmploye(Employe *e)
{
    printf("\n Nom de l'employe : %s \n",e1->nom);
    printf("\n Prenom de l'employe : %s \n",e1->prenom);
    printf("\n CodeFonction de l'employe : %s \n",e1->codeFonction);
    printf("\n Salaire de l'employe : %s \n",e1->salaire);
}

int main()
{
    Employe e;
    saisieEmploye(&e);
    afficheEmploye(&e);
}
