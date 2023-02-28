#include <stdio.h> 
#include <stdlib.h> 


// fonction nombre de caractères dans un string
int longueur(char* text){
    int compteur = 0;

    for (int i = 0; text[i]; i++)
    {
        compteur++;
    }
    
    return compteur;
}

int main(){
    char* chaine;
    printf("Mettez un mot de la taille que vous voulez \n");
    scanf("%d", chaine);
    printf("%d \n", longueur(chaine));
    
    system("pause");
    return 0;
}