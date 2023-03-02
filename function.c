#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>


// fonction permettant de compter le nombre de caratère dans un string
int countCharacters(char* str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

// void searchForString(){ 

//     // On cherche la première occurrence de "test" dans "Texte de test" :
//     char chaine[100] = "Test de test";
//     char Occurence[100] = "test";
//     int i, j;
//     int len1 = strlen(chaine);
//     int len2 = strlen(Occurence);

//     for (i = 0; i <= len1 - len2; i++) {
//         for (j = 0; j < len2; j++) {
//             if (chaine[i+j] != Occurence[j]) {
//                 break;
//             }
//         }
//         if (j == len2) {
//             printf("Il y avait bien \"test\" dans la chaine \n");
//             return;
//         }
//     }
//     printf("Il n'y avait pas \"test\" dans la chaine \n");
// }

void copyString(char destination[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

void testCopyString() {
    char source[] = "Hello, world!";
    char destination[100];
    copyString(destination, source);
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
}


void findFirstOccurrence() {
    char chaine[] = "Test text";
    char occurences[] = "ext";
    int i, j, found = 0;
    
    for (i = 0; chaine[i] != '\0' && !found; i++) {
        for (j = 0; occurences[j] != '\0'; j++) {
            if (chaine[i] == occurences[j]) {
                printf("La première occurrence de '%c' est à la position %d\n", chaine[i], i);
                found = 1;
                break;
            }
        }
    }
}

// Creez un programme qui :
// 1 prend pour input "Titre", "Prix /u", "Quantité"
// 2 apres avoir rentré ces informations, le programme vous demande 
// si vous souhaitez continuer
// Si oui : Retournez a l'etape 1
// Si non, le programme affiche l'ensemble des lignes rentrées
// précédement dans un format "tableau"
// ex : "| Mon super titre | 4 €/u | 45 | 180 | ~135€ |"
// plus une ligne de total, affichant la somme des prix susmentionnés
// ex : "|TOTAL| | | 180 € | ~135€|"



// define pour nommer les constantes pour éviter à chaque fois de mettre le tableau[100] ou tableau[200]
#define MAX_SIZE 100
#define MAX_SIZE_TAB 200

// structure des factures
typedef struct 
{
    char titres[MAX_SIZE];
    float prix_unitaires;
    int quantites;
}Factures;
// on remplace facture par items
Factures items[MAX_SIZE_TAB];

int main() {
    // Initialisation des variables pour stocker les données
    
    int nb_lignes = 0;

    char continuer_str[10];
    int continuer = 1;
    while (continuer) {
        // Saisie des données
        printf("Titre : ");
        scanf("%s", items[nb_lignes].titres);
        printf("Prix /u : ");
        scanf("%d", items[nb_lignes].prix_unitaires);
        printf("Quantité : ");
        scanf("%d", items[nb_lignes].quantites);

        // Incrément du nombre de lignes
        nb_lignes++;

        // Demande de continuation
        printf("Voulez-vous continuer ? (o/n) ");
        scanf("%s", continuer_str);
        if (strcmp(continuer_str, "o") != 0) {
            continuer = 0;
        }
    }

    // Affichage du tableau récapitulatif
    printf("| Titre | Prix /u | Quantité | Prix total |\n");
    float total_prix = 0;
    for (int i = 0; i < nb_lignes; i++) {
        float prix_total = items[i].prix_unitaires * items[i].quantites;
        total_prix += prix_total;
        printf("| %s | %.2f €/u | %d | %.2f € |\n", items[i].titres, items[i].prix_unitaires, items[i].quantites, prix_total);
    }
    printf("| TOTAL |  |  | %.2f € | ~%.2f€ |\n", total_prix, total_prix * 0.75);

    // on met pause pour afficher les résultats
    system("pause");
    return 0;
}
// int main() {

//     printf("Choisissez un mot ou une phrase de votre choix \n");
//     char str[100];
//     scanf("%s", str);
//     // char str[] = "Hello World!";
//     int numChars = countCharacters(str);
//     printf("Le nombre de caractères dans la chaîne est : %d \n", numChars);

//     // fonction pour trouver une occurence dans du texte
//     searchForString();

//     // fonction pour copier la même de caractère
//     testCopyString();

//     // fonction pour chercher les occurences en e x et t
//     findFirstOccurrence();
    
//     
// }
