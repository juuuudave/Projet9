#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

unsigned char chiffre = 3; //255
unsigned int grosChiffre = 23984; //65 535
unsigned long tresGrosChiffre = 1939872; //4 294 967 295


char chiffreNeg = -3; //127
int grosChiffreNeg = -23323; //32 767
long tresGrosChiffreNeg = -4434343; //2 147 483 647 

float decimalNeg = 2.2; // 1 x1037
double decimalDoubleNeg = 2.2; //1x1037

const int CONSTANTE = 5;


int function(int shiffr){

    shiffr = shiffr + 1;
    //Afficher un message

    printf("Ceci est un iteger: %d !", chiffreNeg);
    printf("Ceci est un iteger positif : %u !", chiffre);
    printf("Ceci est un long iteger: %ld !", tresGrosChiffre);
    printf("Ceci est un floaty : %f !", decimalNeg);
    printf("Je peux aussi, %d %d !", chiffreNeg);

    return shiffr;
}

int getScore(){
    int score = 0;
    printf("Quel score avez vous ?");

    scanf("Votre score est pour l'instant : %d" , &score);
    printf("Ah vous avez donc %d points !\n\n " , score);
    return score;
}


int increment(int base){

    //l'incrementation
    base++;
    //decrementation
    base--;

    int nombre = 2;

    nombre += 4; //6
    nombre -= 3; //3
    nombre *= 5; //15
    nombre /= 3; //5
    nombre %= 3; //2
    return base;
}

int arythmetique(){
    /*
    Avec la librairie 
    */

   int test  = 2;

   double absolue = fabs(test);

   double arrondDessus = ceil(test);

   double arrondDessous = floor(test);

   double puissance = pow(test, 4);

   double carree = sqrt(test);

   double sinus = sin(test);
   double cosinus = cos(test);
   double tangente = tan(test);

   double asinus = asin(test);
   double acosinus = acos(test);
   double atangente = atan(test);
   

   double exponentielle = exp(test);
   
   double ln = log(test);
   double l10 = log10(test);

   return 0;
}

int conditions(){

    if (1)
    {
        return 1;
    } else if(1)
    {
        return 0;
    }
    else {
        return 2;
    }
    
    
    switch (chiffre)
    {
    case 2:
        printf("Deux");
        break;
    
    case 6:
        printf("six");
        break;


    default:
    printf("je n\'ai pas de réponse");
        break;
    }
    
    
    
    while (0)
    {
        printf("je ne m'affiche jamais ");
    }
    
    
    int ternary = (chiffre) ? 1 : 0;

    return 0;
}



