int triMin(Tab t,int n)
{
    int min;
    int temp;
    int i=0;
    for(i=0;i<n-1;i++)
    {
    min=i;
    int j;
       for(j=i+1;j<n;j++)
       {
        if(t[j]<t[min])
        {
        min = j;
        }
       if(min!=i)
       {
        temp=t[i];
        t[i]=t[min];
        t[min]=temp;
       }
      }
    }
}
int permuter(int *i,int *j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}

int initPivot(Tab t,int g,int d)
{
	return t[g];
}

int partitionTab(int tab[],int petit,int grand)
{
    int pivot=tab[grand];
    int i=(petit-1);
    int j=petit;
    for(j=petit;j<=grand-1;j++)
    {
    if (tab[j]<=pivot)
    {
    i++;
    permuter(&tab[i],&tab[j]);
    }
    }
    permuter(&tab[i+1],&tab[grand]);
    return(i+1);
}

int partitionner(Tab t,int g,int d)
{
	int pivot=initPivot(t,g,d);
	int i=g-1;
	int j=d+1;
    int fin=0;

	while(!fin)
	{
    printf("%d,i %d,j %d\n",pivot,i,j);
    do
    {
    j=j-1;
    }
    while(t[j]<pivot);
    {
    do
    {
    i=i+1;
    }
    while(t[i]>=pivot);
    {
    if (i<j)
    {
    permuter(&t[i],&t[j]);
    }
    else
    {
    fin=1;
    }
	}
	return i;
}
}}
