 #include <stdio.h>

//QUESTION 1

/* int main (int argc, char **argv)
{
    int a;
    int * p;
     p = &a;

        printf("Entrez votre valeur :");
        scanf("%d",&a);
        printf("\n Valeur %d \n",a);
        printf("\n Addresse %d \n",&p);
    return 0;

}
*/

//QUESTION 2

/* int main (int argc, char **argv)
{
    char a;
    int * p;
     p = &a;

        printf("Entrez votre valeur :");
        scanf("%c",&a);
        printf("\n Valeur : %c \n",a);
        printf("\n Addresse : %d \n",&p);
    return 0;

}
*/

//QUESTION 3

/* void permutation(int * a,int * b)
{
    int permut = * a;
    * a = * b;
    * b = permut;
}

void main()
{
    int c=20, d=400;
    printf("\n c = %d d = %d \n",c,d);
    permutation(&c, &d);
    printf("\n c = %d d = %d \n",c,d);
}

*/

//QUESTION 4

void retourne(int *e, int *r, int *t, int *max, int *min)
{
* max = *e;
* min = *e;
    if(* max < *r && *r > *t)
        * max = *r;
    else if(* max > *t)
        * max = *e;
    else * max = *t;

    if(* min > *r && *r < *t)
        * min = *r;
    else if(* min < *t)
        * min = *e;
    else * min = *t;

}

void main()
{
    int e=30, r=10, t=250;
    int max = 0;
    int min = 0;
    printf("\n e = %d r = %d t = %d \n",e,r,t);
    retourne(&e, &r, &t, &max, &min);
    printf("\n Valeur la plus grande = %d \n Valeur la plus petite = %d",max,min);
}
