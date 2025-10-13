#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int nbr_entree;
    int *poids;
    int seuil;
    int n_couche;
    int num;
} Neurone;

typedef struct Node {
    Neurone *adresse_neurone;
    struct list* suivant;
} list; 
//liste stockant les adresses des neurones

typedef struct {
    list *adresse_list;
    struct list* suivant;
} list_list; 
//liste stockant les adresses des listes de l'ensembles de couches

typedef struct { 
    int num;
    int nbr_neurone;
    list *liste_neurone;
} Couche;

Neurone* InitNeur (int nbr_entree, int *poids, int seuil, int n_couche, int num);
int Outneurone (Neurone *neurone, int taille_poids);
Couche InitCouche (int nrb_neurone, int numero_couche);
void appel_neurone_test  ();

