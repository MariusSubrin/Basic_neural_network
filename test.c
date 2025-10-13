#include <stdio.h>

int main(void) {
    int N;

    printf("Combien y'a t'il d'entrees ? :");
    scanf("%d", &N);
    int liste_sortie [N];

    for(int i=0;i<N;i++){
        printf("rentrez valeur d'entree de %d : ", i+1);
        scanf(" %d", &liste_sortie[i]);
        printf("\n");
    }
    
    for(int i=0;i<N;i++){
        printf("%d", liste_sortie[i]);
    }
    printf("\n");

    printf("the end \n");

    return 0;
}

// struct neurone_a {
//     int value;
//     struct neurone_a * succ;
//     struct neurone_a * prev;
// };

// struct neurone_non_a {
//     int value;
//     struct neurone_non_a * succ;
//     struct neurone_non_a * prev;
// };

