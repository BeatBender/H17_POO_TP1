#include "Contrat.h"
#include <iostream>

using namespace std;

Contrat::Contrat()
{

}

Contrat::~Contrat()
{

}

void Contrat::SetJoueur()
{
	cout << "Joueur contractant: " << endl;
	this->joueur.SetPrenom();
	this->joueur.SetNom();
}

void Contrat::SetNouvClub()
{
	cout << "Nouveau club du joueur:" << endl;
	this->nouvClub.SetNom();
}

void Contrat::SetAncClub()
{
	cout << "Ancien club du joueur:" << endl;
	this->ancClub.SetNom();
}

void Contrat::SetReglement()
{
	
}

void Contrat::SetDateEntree()
{
	string jour, mois, annee;
	cout << "Entrez le jour d'entree dans le club: "<< endl;
	cin >> jour;
	this->dateEntree.SetJour(jour);
	cout << "Entrez le mois d'entree dans le club: " << endl;
	cin >> mois;
	this->dateEntree.SetMois(mois);
	cout << "Entrez le annee d'entree dans le club: " << endl;
	cin >> annee;
	this->dateEntree.SetAnnee(annee);
}

void Contrat::SetDateContrat()
{
	string jour, mois, annee;
	cout << "Entrez le jour de signature du contrat: " << endl;
	cin >> jour;
	this->dateEntree.SetJour(jour);
	cout << "Entrez le mois de signature du contrat: " << endl;
	cin >> mois;
	this->dateEntree.SetMois(mois);
	cout << "Entrez l'annee de signature du contrat: " << endl;
	cin >> annee;
	this->dateEntree.SetAnnee(annee);
}