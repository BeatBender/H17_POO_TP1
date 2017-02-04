#include "Screen.h"
#include "Club.h"
#include <iostream>

using namespace std;

Screen::Screen()
{

}

Screen::~Screen()
{

}

void Screen::InitMainMenu()
{
	vector<Club*> vecteur_club;
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
		club_courant->SetDate();

	default:
		break;
	}


	return;
}