#include "italianchef.h"


ItalianChef::ItalianChef(string n, int v, int j)
{
    ItalianChef::name=n;
    vesi=v;
    jauhot=j;

    cout << "Chef " << getName() << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "Chef " << getName() << " destruktori" << endl;
}

void ItalianChef::makePasta()
{
    cout << "Chef " << getName() << " makes pasta with special recipe" << endl;
    cout << "Chef " << getName() << " uses jauhot = " << jauhot << endl;
    cout << "Chef " << getName() << " uses vesi = " << vesi << endl;
}

string ItalianChef::getName()
{
    return name;
}
