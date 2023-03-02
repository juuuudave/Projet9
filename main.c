#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include "useless.h"



// suite de fibonacci
int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}


struct Prestation
{
    char title[50];
    int prix;
    char quantity;
};

typedef enum{
  VRAI, FAUX
} Boolean;

typedef enum{
  XS = 130, S = 150, M= 170, L= 190,XL = 200, XLL
} Taille;

typedef struct Prestation Prestation;

int main(){
  // présentatiion des structures 
    Prestation nouvellePrestation;

    scanf("%s", nouvellePrestation.title);
    scanf("%d", nouvellePrestation.prix);
    scanf("%d", nouvellePrestation.quantity);

    Prestation encoreUnePresta;
    Prestation *pointeurPrestation = &encoreUnePresta;
    pointeurPrestation->quantity = 23;

    // présentation des modules pour includes des méthodes et des fichiers
    direBonchouranh(1, 1);
    
    Boolean process = VRAI;
    Taille justin = 201; // taille XLL
    if (process == VRAI)
    {
      
    }
    
    if (justin == XL)
    {
      printf("t'as trop repris du dessert au self !");
    }

    system("pause");
    return 0;
}

// int main(void)
// {
//     // déclaration des variables
//     int nbr, j;

//     printf("Entrez le nombre de termes\n");
//     scanf("%d", &nbr);
    
//     printf("Les %d premiers termes de la série de Fibonacci sont:\n", nbr);
    
//     for (j = 1; j <= nbr; j++)
//     {
//       printf("%d\n", fibonacci(j));

//     }

//     system("pause");
//     return 0;

// }