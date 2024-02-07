#include "asunto.h"

Asunto::Asunto()
{
    cout << "asunto luotu" << endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int asukkaat, int ala)
{
    asukasMaara=asukkaat;
    neliot=ala;
    cout << "Asunto maaritetty asukkaita = " << asukasMaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta)
{
    //cout << "asunnon kulutus, kun hinta = " << hinta << " on " << (hinta * asukasMaara * neliot) << endl;
    return (hinta*asukasMaara*neliot);
}
