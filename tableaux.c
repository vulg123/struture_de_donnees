#include <stdio.h>
#include <stdlib.h>

//affichage des contenus d'une table
void affiche_tableau (int table [], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf (" %d *", table[i]);
    }
}

//algorithme de recherche
void recherche (int table [], int taille, int a)
{
    for (int i = 0; i < taille; i++)
    {
        if (table[i] == a)
        {
            printf ("\n on a trouver votre nombre \"%d\" a l'index %i", a, i+1);
        }

    }
    
}


//algorithme de concatenation
int* concatenerTableaux(int tableau1 [], int taille1, int tableau2 [], int taille2) {

    int* resultat = (int*)malloc((taille1 + taille2) * sizeof(int));

    if (resultat == NULL) {
        printf("Erreur: Mémoire insuffisante\n");
        exit(EXIT_FAILURE);
    }

    
    for (int i = 0; i < taille1; i++) {
        resultat[i] = tableau1[i];
    }


    for (int i = 0; i < taille2; i++) {
        resultat[taille1 + i] = tableau2[i];
    }

    return resultat;
}


int main() {
    int tab[10] = {21, 4, 8, 10, 11, 12, 15, 9, 3, 18}; //initialisation a la main
    affiche_tableau (tab, 10);

    recherche (tab, 10, 11);

    printf ("\n");
    return 0;
}
