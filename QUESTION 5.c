int triRapide(Tab t,int g,int d)
{
	if (g<d)
    {
    int p=partitionTab(t,g,d);
    triRapide(t,g,p-1);
    triRapide(t,p+1,d);
	}
}

