#include "Date.h"

using namespace std;

Date::Date()
{

}

Date::~Date()
{

}

void Date::SetAnnee(string a)
{
	this->annee = a;
}

void Date::SetMois(string m)
{
	this->mois = m;
}

void Date::SetJour(string j)
{
	this->jour = j;
}