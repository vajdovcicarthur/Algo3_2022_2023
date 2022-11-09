void modifierNom(Tab t, int nbClients, int i){
    Chaine nouveauNom;

    if(i<=nbClients)
    {
        printf("\n Veuillez entrer le nouveau nom du client: ", i);
        scanf("%s", nouveauNom);
        strcpy(t[i].nomClient, nouveauNom);
    }
}

