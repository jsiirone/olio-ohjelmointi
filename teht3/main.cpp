#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef Chef("Jyrki");
    ItalianChef ItalianChef("Mario", 100, 250);
    Chef.makeSalad();
 //   ItalianChef.makeSalad();
 //   ItalianChef.makeSoup();
    ItalianChef.makePasta();
    Chef.makeSoup();
    return 0;
}
