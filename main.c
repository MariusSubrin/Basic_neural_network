#include <stdio.h>
#include "neurone.h"

int main (){
    int nbr_couche;
    printf("Combien souhaitez vous de couches de neurones ? ");
    scanf("%d", &nbr_couche);

    // int *nbr_neur_par_couche [nbr_couche];
    // printf("Sachant la couche %d la finale et la couche 0 l'initial \n");
    // for (int i = 0; i < nbr_couche; i++){
    //     int h;
    //     printf("Combien de neurones sur la couche %d : ", i);
    //     scanf("%d", &h);
    //     nbr_neur_par_couche[i] = h;
    // }

    InitCouche(nbr_couche, 1);
    appel_neurone_test();

    return 0;
}

// Chaque neurone doit être défini avec un numéro de couche + un numéro propre à lui.
