#include <stdio.h>
#define N 10
typedef int Tab[N];

//EXERCICE 1

int partitionner(int tab[],int g,int d)
{
int i,j;
int pivot,temp;
pivot=tab[g];
i=g-1;
j=d+1;
while (i<j)
{
while (tab[i]<=pivot)
{
    i++;
}
while (tab[j]>pivot)
{
    j--;
}
if (i<j)
{
    temp=tab[i];
    tab[i]=tab[j];
    tab[j]=temp;
}
}
    tab[g]=tab[j];
    tab[j]=pivot;
return j;
}

void triRapide(int *tab,int taille)
{
  int i,j;
  int pivot,temp;
  if (taille<2)
  {
      return pivot=tab[taille/2];
  }
  for (i=0,j=taille-1;;i++,j--)
    {
    while (tab[i]<pivot)
    {
        i++;
    }
    while (pivot<tab[j])
    {
        j--;
    }
    if (i>=j)
    {
    break;
    temp=tab[i];
    tab[i]=tab[j];
    tab[j]=temp;
    }
   }
}

int initPivot(int tab[],int n)
{
    int i,j;
    int temp;
    for (i=0;i<n-1;i++)
{
        for (j=i+1;j<n;j++)
    {
        if (tab[i]>tab[j])
        {
            temp=tab[i];
            tab[i]=tab[j];
            tab[j]=temp;
        }
    }
}
return tab[n/2];
}

int main()
{
    Tab t = {3,17,9,15,2,7,10,9,8,12};
    triRapide(t,N);
    return 0;
}

//EXERCICE 2

#define MAX 15

int fusion_t1_t2(int t1[],int t2[],int t3[MAX],int n1,int n2)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2)
    {
    if(t1[i]<t2[j])
    {
    t3[k++] = t1[i++];
    }
    else
    {
    t3[k++] = t2[j++];
    }
    }
    while(i<n1)
    {
    t3[k++]=t1[i++];
    }
    while(j<n2)
    {
    t3[k++]=t2[j++];
    }
return k;
}
