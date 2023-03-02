#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 




// nombre premier
int primaryNumber(int n)
{
  int i;

  if(n == 1 ){
    return 0;
  } else 
  {
    for (i = 2; i < n; i++)
    {
      if (n % i == 0){
        return 0;
      }
    }
    return 1;
  }

}
  




int main(void)
{
    // déclaration des variables
    int nbr, i;

    printf("Entrez le nombre \n");
    scanf("%d", &nbr);
  
    for ( i = 1; i < nbr; i++)
    {
      if (primaryNumber(i) == 1){
        printf("%d, \n", i);
      }

    }
    
    system("pause");
    return 0;

}