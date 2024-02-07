#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{
    /*
    Asunto asunto1;
    asunto1.maarita(2, 100);
    asunto1.laskeKulutus(1);


    Kerros kerros1;
    kerros1.maaritaAsunnot();
    cout << "Kerroksen kulutus on " << kerros1.laskeKulutus(1) << endl;

    Katutaso katutaso1;
    katutaso1.maaritaAsunnot();
    cout << "Kerroksen kulutus on " << katutaso1.laskeKulutus(1) << endl;
*/
    Kerrostalo talo1;
    talo1.maaritatalo();
    cout << "Kerrostalon kulutus kun hinta on 1 = " << talo1.laskeKulutus(1) << endl;
    return 0;
}
