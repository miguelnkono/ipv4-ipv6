#ifndef CLASSESIPV4__H__
#define CLASSESIPV4__H__

#include "AdressageIPV4.h"

typedef enum Classe{
    classeA,
    classeB,
    classeC,
    classeD,
    classeE
}Classe;

long int CLASSE(IPPART *Adress, IPV4 *adress);

void PrintCLASSE(IPPART *Adresse);

void SetClasse(IPPART *adress, IPV4 *adres);

#endif