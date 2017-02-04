#include "Palmares.h"
#include "Date.h"
#include <iostream>

using namespace std;

Palmares::Palmares()
{

}

Palmares::~Palmares()
{

}

void Palmares::SetPalmares()
{
	string titre, annee, mois, jour;
	cout << endl << "Entrez le titre gagne du club:" << endl;
	cin >> titre;
	cout << endl << "Entrez l'annee d'obtention du titre:" << endl;
	cin >> annee;
	this->date_obtention.SetAnnee(annee);
	cout << endl << "Entrez le mois d'obtention du titre:" << endl;
	cin >> mois;
	this->date_obtention.SetMois(mois);
	cout << endl << "Entrez le jour d'obtention du titre:" << endl;
	cin >> jour;
	this->date_obtention.SetJour(jour);
	cout << endl;
}

string Palmares::GetPalmares()
{
	return this->titre;
}