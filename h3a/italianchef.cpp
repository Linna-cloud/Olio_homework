#include "italianchef.h"

ItalianChef::ItalianChef(string chefName):Chef(chefName)
{
    cout<<"ItalianChef " <<name<<" constructor"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef " <<name<<" destructor"<<endl;
}

string ItalianChef::getName()
{
    cout << "name of the Italian Chef is "<<name<< endl;
    return name;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef "<<name<<" makes pasta"<< endl;
}
