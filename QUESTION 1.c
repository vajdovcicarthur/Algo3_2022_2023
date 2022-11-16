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

