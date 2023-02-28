#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 




// suite de fibonacci
int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (fibonacci(n-1) + fibonacci(n-2));
}




int main(void)
{
    // déclaration des variables
    int nbr, j;

    printf("Entrez le nombre de termes\n");
    scanf("%d", &nbr);
    
    printf("Les %d premiers termes de la série de Fibonacci sont:\n", nbr);
    
    for (j = 1; j <= nbr; j++)
    {
      printf("%d\n", fibonacci(j));

    }

    system("pause");
    return 0;

}