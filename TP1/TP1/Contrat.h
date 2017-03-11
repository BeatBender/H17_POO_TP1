#pragma once
#ifndef CONTRAT_H_
#define CONTRAT_H_
#include "Joueur.h"
#include "Reglement.h"

class Joueur;
class Club;
class Contrat
{
public:
	Contrat();
	~Contrat();

	void SetJoueur();
	void SetNouvClub();
	void SetAncClub();
	void SetReglement();
	void SetDateEntree();
	void SetDateContrat();

	string GetJoueur();
	string GetNouvClub();
	string GetAncClub();
	int GetDuree();

private:
	Joueur *joueur;
	Club *nouvClub, *ancClub;
	Reglement reglement;
	int duree;
	Date dateEntree, dateContrat;
};

#endif
