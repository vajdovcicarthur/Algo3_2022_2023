void rechercherIdMinMax(Tab t, int nbClients, int *indiceIdMin, int *indiceIdMax){

    int tempIdMin=t[0].idClient;
    int tempIdMax=t[0].idClient;

    for(int i=1;i<nbClients;i++)
        {
        if(t[i].idClient<tempIdMin)
        {
            tempIdMin=t[i].idClient;
            *indiceIdMin=i;
        }
        if(t[i].idClient>tempIdMax)
        {
            tempIdMax=t[i].idClient;
            *indiceIdMax=i;
        }
    }
    printf("\nL'indice du client avec l'id client minimum : %d\n", *indiceIdMin);
    printf("L'indice du client avec l'id client maximum : %d\n", *indiceIdMax);
}
