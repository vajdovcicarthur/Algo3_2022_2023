int appartientClientFichier(char *fichierClient, char *nomClient)
{
    FILE *f = fopen(fichierClient, "r");
    if(f==NULL)
    {
        printf("Le fichier n'existe pas. \n");
        return 0;
    }
    char ligne[512];
    int i=0;
    while(fgets(ligne,512,f)!= NULL)
    {
        if(strstr(ligne,fichierClient)!=NULL)
        {
            printf("Le client %s est repertorie.\n",fichierClient);
            fclose(f);
            return 1;
        }
    }
    printf("Client non repertorie. \n");
    fclose(f);
    return 0;
}
