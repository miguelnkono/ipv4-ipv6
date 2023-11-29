#include "..\include\AdressageIPV4.h"
#include "..\include\ClassesIPV4.h"

#include <stdlib.h>
#include <stdio.h>

/*---------Get the class of the adress--------------------*/
long int CLASSE(IPPART *Adress, IPV4 *adress){
    Classe class;
    const int classe = atoi(Adress->_first);      //Convertis une chaine de caractere en int

    if(classe > 0 && classe < 126)
    {
        class = classeA;
        return class;

    }
    if (classe > 127 && classe <= 191)
    {
        class = classeB;
        return class;
    }
    if (classe > 191 && classe <= 223)
    {
        class = classeC;
        return class;
    }
    if (classe > 223 && classe <= 239)
    {
        class = classeD;
        return class;
    }
    if (classe > 239  && classe < 250)
    {
        class = classeE;
        return class;
    }

    
    return class;
}

/*------------Print the class of the adress---------------*/
void PrintCLASSE(IPPART *Adresse){
    int classe = CLASSE(Adresse, NULL);

    switch (classe)
        {
        case 0:
            printf("Classe A\n");
            break;
        case 1:
            printf("Classe B\n");
            break;
        case 2:
            printf("Classe C\n");
            break;
        case 3:
            printf("Classe D\n");
            break;
        case 4:
            printf("Classe E\n");
            break;
    }

}

/*--------------Set the adress class----------------------*/
void SetClasse(IPPART *adress, IPV4 *adres){
    adres->classe = CLASSE(adress, adres) + 1;
}
