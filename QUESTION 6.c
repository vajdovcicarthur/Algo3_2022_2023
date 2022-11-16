int rechercheDichotomique(Tab t,int v,int debut,int fin)
{
    int m;
    if (debut<fin)
    {
        m=(debut+fin)/2;
        if (v<t[m])
        {
            return rechercheDichotomique(t,v,debut,m);
        }
        if (v>t[m])
        {
            return rechercheDichotomique(t,v,m+1,fin);
        }
    return debut;
}
}
