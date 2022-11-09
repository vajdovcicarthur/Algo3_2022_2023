void afficher(Tab t, int nbClients){

    for(int i=0;i<nbClients;i++)
    {
        printf("\n L'id du client est: %d\n", t[i].idClient);
        printf("\n Le nom du client est : %s\n", t[i].nomClient);
    }
}

