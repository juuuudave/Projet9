#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>


// génération de lettres
void gen_letters(const char arr[4]) {
    char *letters[6] = {"P", "B" , "M" , "Y" , "O" , "G"};
    for (int i = 0; i < 4; ++i) {
        printf("%s", letters[arr[i] - 1]);
    }
    printf("\n");
}

// fonction pour saisir les lettres
void saisir() {
    printf("Veuillez saisir une combinaison de 4 couleurs parmi les suivantes : \n");
    printf("P pour le rose, B pour le bleu, M pour le magenta, Y pour le jaune, O pour le orange, G pour le vert.\n");
    char *letters[6] = {"P", "B" , "M" , "Y" , "O" , "G"};
    char arr[4];
    for (int i = 0; i < 4; ++i) {
        scanf("%s", &arr[i]);
    }
    for (int i = 0; i < 4; ++i) {
        printf("%s", letters[arr[i] - 1]);
    }
    printf("\n");
}

// le RANGEMENTTATOR
int rangementator(const char gen[4], const char saisie[4]) {
    int result = 0;
    bool gen_used[4] = {false, false, false, false};
    bool saisie_used[4] = {false, false, false, false};

    // Vérifier les lettres qui sont au bon endroit (W)
    for (int i = 0; i < 4; ++i) {
        if (gen[i] == saisie[i]) {
            result += 1000;  // Ajouter 1000 à la valeur de retour
            gen_used[i] = true;
            saisie_used[i] = true;
        }
    }

    // Vérifier les lettres qui sont dans la combinaison mais pas au bon endroit (R)
    for (int i = 0; i < 4; ++i) {
        if (!gen_used[i]) {
            for (int j = 0; j < 4; ++j) {
                if (!saisie_used[j] && gen[i] == saisie[j]) {
                    result += 1;  // Ajouter 1 à la valeur de retour
                    saisie_used[j] = true;
                    break;
                }
            }
        }
    }

    // Le reste des lettres est considéré comme n'étant pas la bonne (N)
    return result;
}




int main() {
    srand(time(NULL));
    char gen[4];
    for (int i = 0; i < 4; ++i) {
        gen[i] = rand() % 6 + 1;
    }

    for (int essai = 1; essai <= 10; ++essai) {
        printf("Essai %d :\n", essai);
        char saisie[4];
        saisir(saisie);

        int result = rangementator(gen, saisie);

        int w = result / 1000;
        int r = result % 1000;
        int n = 4 - w - r;

        printf("%d lettres sont bien placées (W)\n", w);
        printf("%d lettres sont présentes mais mal placées (R)\n", r);
        printf("%d lettres ne sont pas dans la combinaison (N)\n", n);

        if (w == 4) {
            printf("Bravo, vous avez gagné en %d essais !\n", essai);
            return 0;
        }
    }

    printf("Vous avez perdu, la combinaison était : ");
    gen_letters(gen);

    return 0;
}