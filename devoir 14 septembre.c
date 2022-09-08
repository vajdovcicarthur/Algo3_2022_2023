#include <stdio.h>
int somme_1 =1;
int somme(int n1,int n2)
{
    int resultat_somme;
    resultat_somme = n1+n2;
    return(resultat_somme);
}
int main ()
{
    printf("%d",somme(1,3)+somme_1);
    printf("\n");printf("\n");
    printf("%d",somme(200,400)+somme_1);
    return 0;
}
