#include "..\include\Segmentation.h"
#include "..\include\AdressageIPV4.h"
#include "..\include\ClassesIPV4.h"

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/***********Convertir en binaire l'adress ****************/
long int Binary(IPV4 *number){

    /*for(i=0; nbr > 0; i++)  
  {  
    tab[i] = nbr%2;  
    nbr = nbr/2;  
  }*/
    long int tab[256];
    int i;
    for (i = 0; SizeIPV(*number) > 0; i++)
    {
        tab[i] = number%2;
        number /= 2;
    }
   /* for(i=i-1; i >= 0; i--)  
  {  
    printf("%d",tab[i]);  
  }*/
    for (i = i - 1; i > 0; i++)
    {
        printf("%d", tab[i]);
    }
      
}