#include "Screen.h"
#include "Club.h"
#include <iostream>

using namespace std;

vector<Club*> vecteur_club;

Screen::Screen()
{

}

Screen::~Screen()
{

}

void Screen::AfficherClubs()
{
	for (int i = 0; i < vecteur_club.size(); i++)
	{
		cout << 
	}
}

void Screen::InitMainMenu()
{
	
	int choix;
	Club* club_courant;

	cout << "--------------------- Menu Principal -----------------------" << endl;
	cout << "1) Ajouter un club" << endl;
	cout << "2) Afficher les clubs existant" << endl;
	cout << "3) Supprimer un club" << endl;

	cin >> choix;
	cout << endl << endl;

	switch (choix)
	{
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
		break;

	case 2:
		AfficherClubs();

	default:
		break;
	}


	return;
}