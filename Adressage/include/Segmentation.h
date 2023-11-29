#ifndef SEGMENTATION__H__
#define SEGMENTATION__H__

#include "AdressageIPV4.h"
#include "ClassesIPV4.h"

/***********Convertir en binaire, octets et decimal l'adress ****************/
long int Binary(long int number);
long int Octet(long int number);
long int Decimale(long int number);

/*************Addiction des bits*********************************************/
long int AddBits(long int bit1, long int bit2);
long int Substract(long int bit1, long int bit2);

/*************Give the different adress wanted*******************************/
void GiveAdress(long int adress);

#endif