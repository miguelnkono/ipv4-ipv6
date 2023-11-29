#include <stdio.h>

#include "..\include\AdressageIPV4.h"
#include "..\include\ClassesIPV4.h"
#include "..\include\Segmentation.h"

int main(void)
{
    IPV4 adress1;
    IPPART adress;
    char adres[225];

    printf("Eveuillez entrez l'adress IPV4 -> \n");
    scanf("%s", adres);

    //GetAdress(adress1);

    SetAdress(&adress1, adres);
    GetPart(&adress1, &adress);

    SetNetID(&adress1, adress);
    SetHostID(&adress1, adress);
    
    PrintCLASSE(&adress);
    SetClasse(&adress, &adress1);
    printf("%s\n", adress1.NetID);

    Binary(*adress1.Bloque._first);

    return 0;
}