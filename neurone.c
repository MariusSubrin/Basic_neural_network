#include <stdio.h>
#include <stdlib.h>
#include "neurone.h"

Neurone* InitNeur (int nbr_entree, int *poids, int seuil, int n_couche, int num){
    Neurone *nv_neurone = (Neurone*)malloc(sizeof(Neurone));
    if (!nv_neurone) {
        perror("Erreur d'allocation pour le neurone");
        exit(EXIT_FAILURE);
    }
    nv_neurone->nbr_entree = nbr_entree;
    nv_neurone->poids = poids;
    nv_neurone->seuil = seuil;
    nv_neurone->n_couche = n_couche;
    nv_neurone->num = num;
    return nv_neurone; //retourne l'adresse du neurone uniquement
}

int Outneurone (Neurone *neurone, int taille_poids){ //il faudra lui donner l'adresse du bon neurone
    int x = 0;
    for (int i = 0; i < taille_poids; i++){
        x = x + i * neurone->poids[i];
    }
    if (x >= neurone->seuil){
        return 1;
    }else{
        return 0;
    }
}

Couche *InitCouche (int nrb_neurone, int numero_couche){
    Couche *couche; //retourne donc l'adresse de la couche
    int t_nbr_entree; //temporaire_nombre_d_entrees
    int t_poids[t_nbr_entree]; 
    int t_seuil;
    int t_n_couche;
    int t_num;
    list* elem_actuel = (list*)malloc(sizeof(list));
    elem_actuel->adresse_neurone = NULL;

    list* nv_elem = (list*)malloc(sizeof(list));
    if (!nv_elem) {
        perror("Erreur d'allocation pour la liste");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < nrb_neurone; i++){
        printf("Combien d'entrees pour le neurone %d : ", i);
        scanf("%d", &t_nbr_entree);
        for (int w = 1; w <= t_nbr_entree; w++){
            printf("Quels poids pour l'entrée %d : ", w);
            scanf("%d", &t_poids[w-1]);
        };
        printf("Quel seuil pour le neurone %d : ", i);
        scanf("%d", &t_seuil);
        t_n_couche = numero_couche; //numéro de la couche au sein du réseaux
        t_num = i; //numéro du neurone au sein de la couche

        nv_elem->adresse_neurone = InitNeur(t_nbr_entree, t_poids, t_seuil, t_n_couche, t_num); //sachant que InitNeur renvoi une adresse
        elem_actuel->suivant = nv_elem;
        nv_elem = elem_actuel; //premier_élément prend l'adresse du nouvel_élément, ainsi à l'ajout d'un nouvel élément à la liste, c'est l'adresse du précédent nouvel élément qui sera prise
    }
    return couche;
}

void appel_neurone_test  (){
    list* liste_adresse_neurone;
    list* actuel;
    while(actuel->adresse_neurone != NULL){
        printf("%d", actuel->adresse_neurone);
        liste_adresse_neurone = actuel->suivant;
        actuel = liste_adresse_neurone;
    }
}

// int Outcouche (){
//     list_list;
// }