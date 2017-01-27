#include "Screen.h"
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
	int choix;

	cout << "--------------------- Menu Principal -----------------------" << endl;
	cout << "1) Ajouter un club" << endl;
	cout << "2) Afficher les clubs existant" << endl;
	cout << "3) Supprimer un club" << endl;

	cin >> choix;
	cout << endl << endl;


	return;
}