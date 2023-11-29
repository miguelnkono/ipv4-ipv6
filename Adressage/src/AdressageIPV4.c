#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "..\include\AdressageIPV4.h"
#include "..\include\ClassesIPV4.h"


/*
                    GETTER FOR THE ADRESS
*/

/*void GetAdress(IPV4 adress){
    unsigned char adres[225];
    printf("Eveuillez entrez l'adress IPV4 -> ");
    scanf("%s", adres);
    //strcpy(adress.ADRESS, adres);
}*/

/*
                    SETTERS FOR THE ADRESS
*/

/*---------SetAdress--------------------------*/
void SetAdress(IPV4 *adress, char Adress[255]){
    strcpy(adress->ADRESS, Adress);
}

/*--------GetPart-----------------------------*/
void GetPart(IPV4 *Adress ,IPPART *adress){
    unsigned char copie[225];
    strcpy(copie, Adress->ADRESS);

    char *p = strtok(Adress->ADRESS, ".");
    strcpy(adress->_first, p);
    p = strtok(NULL, ".");
    strcpy(adress->_second, p);
    p = strtok(NULL, ".");
    strcpy(adress->_third, p);
    p = strtok(NULL, ".");
    strcpy(adress->_fourth, p);
    
    strcpy(Adress->ADRESS, copie);
}

/*---------SizeIPV----------------------------*/
int SizeIPV(IPV4 *adress){
    size_t len = 0;
    while (adress->ADRESS[len] != '\n')
        ++len;
    return len;
    //return strlen(adress->ADRESS);
}

/*-----------SetNetID------------------------*/
void SetNetID(IPV4 *adress, IPPART Adress){
    strcpy(adress->NetID, Adress._first);
    /*strcat(adress->NetID, ".");
    strcat(adress->NetID, Adress._second);*/
    switch (CLASSE(&Adress, adress))
    {
    case 0:
        break;
    case 1:
        strcat(adress->NetID, ".");
        strcat(adress->NetID, Adress._second);
        break;
    case 2:
        strcat(adress->NetID, ".");
        strcat(adress->NetID, Adress._second);
        strcat(adress->NetID, Adress._third);
    
    default:
        printf("Il s'agit d'une classe reserve!!\n");
        break;
    }
}

/*----------SetHostID------------------------*/
void SetHostID(IPV4 *adress, IPPART Adress){
    strcpy(adress->HostID, Adress._third);
    strcat(adress->HostID, ".");
    strcat(adress->HostID, Adress._fourth);
}

/*
                    PRINTTERS FOR THE ADRESS
*/

/*-------------PrintAdress--------------------*/
void PrintAdress(IPV4 *adress){
    printf("%s\n", adress->ADRESS);
}

/*-------------PrintAdress--------------------*/

void PrintNetID(IPV4 *adress){
    printf("%s\n", adress->NetID);
}

/*-------------PrintAdress--------------------*/

void PrintHostID(IPV4 *adress){
    printf("%s\n", adress->HostID);
}
