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
