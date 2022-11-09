int enleverClient(int idClient, Chaine nomClient, Tab t, int *nbClients){

    int temp_i;
    int a = 0;
    while(a==0)
    {
        for(int i=0; i<*nbClients; i++)
        {
            if(t[i].idClient==idClient&&strcmp(t[i].nomClient, nomClient)==0)
            {
                temp_i =i;
                a=1;
            }
        }
        if(a==0)
        {
            printf("\n Le client n'a pas ete enleve car il n'existe pas\n");
            return 0;
        }
    }
    for(int i =temp_i;i<*nbClients;i++)
    {
        t[i]=t[i+1];
    }
    *nbClients-=1;
    return 1;
}
