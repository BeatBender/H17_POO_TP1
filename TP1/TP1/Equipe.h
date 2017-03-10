#pragma once
#ifndef EQUIPE_H_
#define EQUIPE_H_
#include "Club.h"

class Equipe
{
public:
	Equipe();
	~Equipe();

private:
	Club club;
	int nbJoueursTerrain, nbGardiens;
	Joueur capitaine;
};

#endif