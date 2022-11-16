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

