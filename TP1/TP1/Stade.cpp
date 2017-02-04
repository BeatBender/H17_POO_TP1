#include "Stade.h"
#include <iostream>

using namespace std;

Stade::Stade()
{

}

Stade::~Stade()
{

}

void Stade::SetCapacite()
{
	int capacite;
	string nom, lieu;
	bool qualite;

	cout << endl << "Entrez la capacite (nb de places) du stade:" << endl;
	cin >> capacite;
	this->capacite = capacite;
	cout << endl << "Entrez le nom du stade:" << endl;
	cin >> nom;

}

void Stade::SetQualite()
{

}

void Stade::SetNom()
{

}

void Stade::SetLieu()
{

}