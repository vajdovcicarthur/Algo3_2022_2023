int somme(Tab t,int n)
{
    int res=0;
    printf("Calcul de la somme :\n");
if (n>0)
{
    printf("\t appel du calcul de la somme a partir de l'indice %d :\n",n-1);
    res=t[n-1]+somme(t,n-1);
    printf("\t addition avec t[%d]\n",n-1 );
}
    printf("\t Somme a partir de l'indice %d = %d\n\n",n-1,res);
    return res;
}
