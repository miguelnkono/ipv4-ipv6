#ifndef ADRESSAGEIPV4__H__
#define ADRESSAGEIPV4__H__


typedef struct IPPART{
    unsigned char _first[225];      //premier bloque
    unsigned char _second[225];     //deuxieme bloque
    unsigned char _third[225];      //troisieme bloque
    unsigned char _fourth[225];     //quatrieme bloque
}IPPART;

typedef struct IPV4{
    unsigned char ADRESS[225];      //adress fournie
    unsigned char HostID[225];      //adress du resseau
    unsigned char NetID[225];       //adress de la machine
    int classe;
    IPPART Bloque;
}IPV4;


/*---------SETTERS-----------------------------------*/
void GetPart(IPV4 *Adress ,IPPART *adress);
int SizeIPV(IPV4 *adress);
void SetNetID(IPV4 *adress, IPPART Adress);
void SetHostID(IPV4 *adress, IPPART Adress);
void SetAdress(IPV4 *adress, char Adress[255]);

/*-------------GETTES----------------------------------*/
void GetAdress(IPV4 adress);

/*------------PRINTEURS--------------------------------*/
void PrintAdress(IPV4 *adress);
void PrintNetID(IPV4 *adress);
void PrintHostID(IPV4 *adress);


#endif