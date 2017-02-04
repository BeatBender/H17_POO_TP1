#include "Club.h"
#include "Joueur.h"
#include <iostream>

using namespace std;

void Club::SetNom()
{
	string nom_club;
	cout << "Entrez le nom du club:" << endl;
	cin >> nom_club;
	cout << endl;
	this->nom = nom_club;
}

void Club::SetHistoire()
{
	string histoire_club;
	cout << "Entrez l'histoire du club:" << endl;
	cin >> histoire_club;
	cout << endl;
	this->histoire = histoire_club;
}

void Club::SetCouleur()
{
	string couleur_club;
	cout << "Entrez la couleur du club:" << endl;
	cin >> couleur_club;
	cout << endl;
	this->couleur = couleur_club;
}

void Club::SetVille()
{
	string ville_club;
	cout << "Entrez la ville du club:" << endl;
	cin >> ville_club;
	cout << endl;
	this->ville = ville_club;
}

void Club::SetDate()
{
	string annee, mois, jour;
	cout << "Entrez l'année de création du club:" << endl;
	cin >> annee;
	cout << endl << "Entrez le mois de création du club" << endl;
	cin >> mois;
	cout << endl << "Entrez le jour de création du club" << endl;
	this->annee_creation.SetAnnee(annee);
	this->annee_creation.SetMois(mois);
	this->annee_creation.SetJour(jour);
}

void Club::SetEffectif()
{
	bool cont;
	do
	{
		Joueur* joueur_courant;
		joueur_courant = new Joueur;
		joueur_courant->SetNom();
		joueur_courant->SetPrenom();
		joueur_courant->SetVille();
		joueur_courant->SetTaille();
		joueur_courant->SetPoids();
		joueur_courant->SetParcours();
		effectif.push_back(joueur_courant);
		cout << endl << "Voulez-vous entrer un autre joueur?" << endl << "1) oui" << endl << "0) non :" << endl;
		cin >> cont;
	} while (cont == 1);
}

void Club::SetPalmares()
{
	string palmares;
	this->palmares = palmares.GetPalmares();
}

void Club::SetStade()
{

}

void Club::SetStaff()
{

}

Club::Club()
{

}

Club::~Club()
{

}