#pragma once
#ifndef CONTRAT_H_
#define CONTRAT_H_
#include "Joueur.h"

class Contrat
{
public:
	Contrat();
	~Contrat();

private:
	Joueur joueur;
	Club nouvClub, ancClub;
	int duree;
	Date dateEntree, dateContrat;

};

#endif
