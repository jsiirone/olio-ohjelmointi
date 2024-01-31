#include "chef.h"

Chef::Chef()
{
cout << "Chef default konstruktori" << endl;
}


Chef::Chef(string n)
{
    Chef::name=n;
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;

}

void Chef::makeSoup()
{
    cout << "Chef " << name << " makes soup" << endl;
}

