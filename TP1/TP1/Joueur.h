#pragma once
#ifndef JOUEUR_H_
#define JOUEUR_H_

#include <string>
#include <vector>
#include "Parcours.h"

using namespace std;

class Joueur
{
public:
	Joueur();
	~Joueur();

private:
	string nom, prenom, ville_naissance;
	float taille, poids;
	vector<Parcours> parcours;
};
#endif