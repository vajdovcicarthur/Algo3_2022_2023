void afficheClientsFichier(char * fichierClient)
{
        FILE * f = fopen(fichierClient,"r");
        char ligne[512];
        int nb_lignes=0;
        if (!f) printf("Erreur a l'ouverture du fichier %s\n",fichierClient);
        else
        {
            while(fgets(ligne,512,f))
            {
                printf("%s",ligne);
                nb_lignes++;
            }
        }
        fclose(f);
}

