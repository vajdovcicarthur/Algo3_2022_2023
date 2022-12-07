void ajouteClientFichier(char * fichierClient, Client c)
{
        FILE * f = fopen(fichierClient,"a");
        if (!f) printf("Erreur à l'ouverture du fichier %s\n",fichierClient);
        else
        {
            fprintf(f,"%d %s\n",c.id,c.nomClient);
            fclose(f);
        }

}
