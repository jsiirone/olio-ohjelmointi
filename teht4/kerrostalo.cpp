#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout << "kerrostalo luotu" << endl;
}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus(double hinta)
{
    return (eka.laskeKulutus(hinta) + toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta));
}

void Kerrostalo::maaritatalo()
{
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}
