
#include <stdio.h>

void longer(char *chain, int *l){
	char *p;
	p = chain;
	printf("inside %s",chain);
	while(*p != '\0'){
		printf("%c \n", *p);
		*l = *l + 1;
		p++;
		}

}
void afficheInverse(char *chain)

int main(int argc, char **argv)
{
	int l = 0;
	char * test  = "Test";
	printf("%s",test);
	longer(test, &l);
	printf("%d",l);
}


//EXERCICE 2

//QUESTION 2.b
void puissance(int a, int n)
    {
        int result;
        if (n == 0)
            result = 1;
         else
         result = n * puissance(a,n-1);
        return result;
    }
//QUESTION 2.a
void puissance(int a, int n)
    {
        int result;
        if (n>0 && a>0)
        if (n == 0)
            result = 1;
         else
         result = n * puissance(a,n-1);
        return result;
    }
//QUESTION 2.c
void puissance(int a, int n)
    {
        int result;
        if (n == 0)
            result = 1;
         else
         result = n * puissance(a,(n-1)/2)*puissance(a,(n-1)/2);
        return result;
    }

//EXERCICE 3

//QUESTION 1

int saisieT(int myTab[],int i,int size){
    if (i==size -1){
        return myTab[i];
        }
    else{
        saisieT(myTab, i+1,size);
    }
}

//QUESTION 2

int sommeT(int myTab[],int i){
    if (somme)
}
