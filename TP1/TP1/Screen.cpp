#include "Screen.h"
#include "Club.h"
#include <iostream>

using namespace std;

class Club;

vector<Club*> vecteur_club;

Screen::Screen()
{

}

Screen::~Screen()
{

}

void Screen::AfficherClubs()
{
	cout << "Voici la liste des clubs de la ligue:" << endl;
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << i << ") " << vecteur_club.at(i)->GetNom() << endl;
	}
	system("PAUSE");
}

void Screen::SuppClub()
{
	int choix;

	cout << "Choisissez le club que vous voulez supprimer:" << endl;
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << i << ") " << vecteur_club.at(i)->GetNom() << endl;
	}

	cin >> choix;

	vecteur_club.erase(vecteur_club.begin() + choix);
}

void Screen::InitMainMenu()
{
	
	int choix;
	Club* club_courant;

	cout << "--------------------- Menu Principal -----------------------" << endl;
	cout << "0) Quitter l'application" << endl;
	cout << "1) Ajouter un club" << endl;
	cout << "2) Afficher les clubs existant" << endl;
	cout << "3) Supprimer un club" << endl;

	cin >> choix;
	cout << endl << endl;

	switch (choix)
	{

	case 0:
		return;
		break;
	case 1:
		club_courant = new Club;
		club_courant->SetNom();
		club_courant->SetHistoire();
		club_courant->SetCouleur();
		club_courant->SetVille();
		club_courant->SetDate();
		club_courant->SetEffectif();
		club_courant->SetPalmares();
		club_courant->SetStade();
		club_courant->SetStaff();
		vecteur_club.push_back(club_courant);
		InitMainMenu();
		break;

	case 2:
		AfficherClubs();
		InitMainMenu();
		break;

	case 3:
		SuppClub();
		InitMainMenu();
		break;

	default:
		break;
	}


	return;
}